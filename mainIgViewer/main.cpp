
<<<<<<< HEAD
#include "mixr/base/IComponent.hpp"
#include "mixr/base/Pair.hpp"
#include "mixr/base/timers/ITimer.hpp"
#include "mixr/base/edl_parser.hpp"
#include "mixr/base/util/system_utils.hpp"

#include "mixr/ui/glut/IGlutDisplay.hpp"
=======

#include "mixr/base/Pair.hpp"
#include "mixr/base/Timers.hpp"
#include "mixr/base/edl_parser.hpp"
#include "mixr/base/util/system_utils.hpp"

#include "mixr/ui/glut/GlutDisplay.hpp"
>>>>>>> d91383e8

#include "mixr/simulation/Station.hpp"

#include <GL/glut.h>

#include "events.hpp"
#include "factory.hpp"
#include "SimStation.hpp"

#include <string>

#include "osgDB/Registry"
#ifdef OSG_LIBRARY_STATIC
USE_OSGPLUGIN(txp)
#endif

using namespace mixr;

const int frameRate{60};
<<<<<<< HEAD
SimStation* station{};

// build a station
SimStation* builder(const std::string& fileName)
{
   simulation::IStation* p{};
   // Read the description file
   int errors{};
   base::IObject* obj{base::edl_parser(fileName, factory, &errors)};
=======
simulation::Station* station{};

// build a station
simulation::Station* builder(const std::string& fileName)
{
   simulation::Station* p{};
   // Read the description file
   int errors{};
   base::Object* obj{base::edl_parser(fileName, factory, &errors)};
>>>>>>> d91383e8
   if (errors > 0) {
      std::cerr << "File: " << fileName << ", errors: " << errors << std::endl;
      std::exit(EXIT_FAILURE);
   }

   // test to see if an object was created
   if (obj == nullptr) {
      std::cerr << "Invalid configuration file, no objects defined!" << std::endl;
      std::exit(EXIT_FAILURE);
   }

   // do we have a base::Pair, if so, point to object in Pair, not Pair itself
   const auto pair = dynamic_cast<mixr::base::Pair*>(obj);
   if (pair != nullptr) {
      obj = pair->object();
      obj->ref();
      pair->unref();
   }

   // try to cast to proper object, and check
<<<<<<< HEAD
   const auto station = dynamic_cast<SimStation*>(obj);
=======
   const auto station = dynamic_cast<mixr::simulation::Station*>(obj);
>>>>>>> d91383e8
   if (station == nullptr) {
      std::cerr << "Invalid configuration file!" << std::endl;
      std::exit(EXIT_FAILURE);
   }
   return station;
}

static void updateDataCB(const int msecs)
{
   // get current time
   const double time1{base::getComputerTime()};
   static double time0{time1};   // store (N-1) for next iteration
   // compute delta time (elapsed) from previous time
   const double dt{time1 - time0};
   // update N-1 time
   time0 = time1;
   // update station
   station->updateData(dt);
}

int main(int argc, char* argv[])
{
   glutInit(&argc, argv);

<<<<<<< HEAD
   std::string configFilename{"test.edl"};
   // parse arguments
   for (int i{1}; i < argc; i++) {
=======
   std::string configFilename = "test.edl";
   // parse arguments
   for (int i = 1; i < argc; i++) {
>>>>>>> d91383e8
      if ( std::string(argv[i]) == "-f" ) {
         configFilename = argv[++i];
      }
   }

   station = builder(configFilename);
   if (station == nullptr) {
      std::cerr << "Invalid configuration file!" << std::endl;
      std::exit(EXIT_FAILURE);
   }

<<<<<<< HEAD
   station->event(base::IComponent::RESET_EVENT);
=======
   station->event(base::Component::RESET_EVENT);
>>>>>>> d91383e8

   const double dt{1.0/static_cast<double>(frameRate)};
   const int msecs{static_cast<int>(dt * 1000)};

   station->updateData(dt);
   station->updateTC(dt);
<<<<<<< HEAD
   station->event(base::IComponent::RESET_EVENT);
=======
   station->event(base::Component::RESET_EVENT);
>>>>>>> d91383e8

   station->event(USER_EVENT_ON_ENTRY);

   glutTimerFunc(msecs, updateDataCB, 1);

   station->createTimeCriticalProcess();

   glutMainLoop();
   return 0;
}
