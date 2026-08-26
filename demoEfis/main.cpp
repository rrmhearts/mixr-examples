//----------------------------------------------------------------
// Demo app for Efis
//----------------------------------------------------------------
#include "mixr/base/Pair.hpp"
<<<<<<< HEAD
#include "mixr/base/timers/ITimer.hpp"
#include "mixr/base/edl_parser.hpp"
#include "mixr/graphics/Graphic.hpp"
#include "mixr/ui/glut/IGlutDisplay.hpp"
=======
#include "mixr/base/Timers.hpp"
#include "mixr/base/edl_parser.hpp"
#include "mixr/graphics/Graphic.hpp"
#include "mixr/ui/glut/GlutDisplay.hpp"
>>>>>>> d91383e8

#include <GL/glut.h>

// factories
#include "mixr/instruments/factory.hpp"
#include "mixr/ui/glut/factory.hpp"
#include "mixr/graphics/factory.hpp"
<<<<<<< HEAD
#include "mixr/graphics/fonts/ftgl/factory.hpp"
=======
>>>>>>> d91383e8
#include "mixr/base/factory.hpp"

// Test pages
#include "TestMechanical.hpp"
#include "TestElectronic.hpp"

#include <string>
#include <cstdlib>

const int frameRate{20};
<<<<<<< HEAD
mixr::glut::IGlutDisplay* glutDisplay{};
=======
mixr::glut::GlutDisplay* glutDisplay{};
>>>>>>> d91383e8

// timerFunc() -- Time critical stuff)
void timerFunc(int)
{
   const double dt{1.0 / static_cast<double>(frameRate)};
   const int millis{static_cast<int>(dt * 1000)};
   glutTimerFunc(millis, timerFunc, 1);

<<<<<<< HEAD
   mixr::base::ITimer::updateTimers(dt);
=======
   mixr::base::Timer::updateTimers(dt);
>>>>>>> d91383e8
   mixr::graphics::Graphic::flashTimer(dt);
   glutDisplay->updateTC(dt);
}

<<<<<<< HEAD
mixr::base::IObject* factory(const std::string& name)
{
   mixr::base::IObject* obj{};
=======
mixr::base::Object* factory(const std::string& name)
{
   mixr::base::Object* obj{};
>>>>>>> d91383e8

   // Tests
   if ( name == TestMechanical::getFactoryName() ) {
      obj = new TestMechanical;
   }
   else if ( name == TestElectronic::getFactoryName() ) {
      obj = new TestElectronic;
   }

   else {
      if (obj == nullptr) obj = mixr::instruments::factory(name);
      if (obj == nullptr) obj = mixr::graphics::factory(name);
<<<<<<< HEAD
      if (obj == nullptr) obj = mixr::graphics::ftgl::factory(name);
=======
>>>>>>> d91383e8
      if (obj == nullptr) obj = mixr::glut::factory(name);
      if (obj == nullptr) obj = mixr::base::factory(name);
   }
   return obj;
}

// display builder
<<<<<<< HEAD
mixr::glut::IGlutDisplay* builder(const std::string& filename)
{
   // read configuration file
   int num_errors{};
   mixr::base::IObject* obj{mixr::base::edl_parser(filename, factory, &num_errors)};
=======
mixr::glut::GlutDisplay* builder(const std::string& filename)
{
   // read configuration file
   int num_errors{};
   mixr::base::Object* obj{mixr::base::edl_parser(filename, factory, &num_errors)};
>>>>>>> d91383e8
   if (num_errors > 0) {
      std::cerr << "File: " << filename << ", number of errors: " << num_errors << std::endl;
      std::exit(0);
   }

   // test to see if an object was created
   if (obj == nullptr) {
      std::cerr << "Invalid configuration file, no objects defined!" << std::endl;
      std::exit(0);
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
   const auto glutDisplay = dynamic_cast<mixr::glut::IGlutDisplay*>(obj);
=======
   const auto glutDisplay = dynamic_cast<mixr::glut::GlutDisplay*>(obj);
>>>>>>> d91383e8
   if (glutDisplay == nullptr) {
      std::cerr << "Invalid configuration file!" << std::endl;
      std::exit(0);
   }
   return glutDisplay;
}

//
int main(int argc, char* argv[])
{
   glutInit(&argc, argv);

   // default configuration filename
<<<<<<< HEAD
   std::string configFilename{"glutdisplay.edl"};
=======
   std::string configFilename = "glutdisplay.edl";
>>>>>>> d91383e8

   glutDisplay = builder(configFilename);

   // create a display window
   glutDisplay->createWindow();

   // set timer
   const double dt{1.0 / static_cast<double>(frameRate)};
   const int millis{static_cast<int>(dt * 1000)};
   glutTimerFunc(millis, timerFunc, 1);

   glutMainLoop();
   return 0;
}
