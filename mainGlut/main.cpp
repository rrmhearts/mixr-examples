//----------------------------------------------------------------
<<<<<<< HEAD
// Simple example program that creates a GLUT window and draws what
// is defined by an EDL file
//----------------------------------------------------------------

#include "mixr/base/Pair.hpp"
#include "mixr/base/timers/ITimer.hpp"
=======
// Simple example program that creates a GLUT window and draws an image
// as defined by EDL file.
//----------------------------------------------------------------

#include "mixr/base/Pair.hpp"
#include "mixr/base/Timers.hpp"
>>>>>>> d91383e8
#include "mixr/base/edl_parser.hpp"

#include "mixr/graphics/Graphic.hpp"

<<<<<<< HEAD
#include "mixr/ui/glut/IGlutDisplay.hpp"
=======
#include "mixr/ui/glut/GlutDisplay.hpp"
>>>>>>> d91383e8

// factories
#include "mixr/base/factory.hpp"
#include "mixr/graphics/factory.hpp"
<<<<<<< HEAD
#include "mixr/graphics/fonts/ftgl/factory.hpp"
=======
>>>>>>> d91383e8
#include "mixr/ui/glut/factory.hpp"

#include <GL/glut.h>

#include <string>

const int frameRate{20};
<<<<<<< HEAD
mixr::glut::IGlutDisplay* display{};
=======
mixr::glut::GlutDisplay* glutDisplay{};
>>>>>>> d91383e8

// timerFunc() -- Time critical stuff
void timerFunc(int)
{
   const double dt{1.0 / static_cast<double>(frameRate)};
   const int millis{static_cast<int>(dt * 1000)};
   glutTimerFunc(millis, timerFunc, 1);

<<<<<<< HEAD
   mixr::base::ITimer::updateTimers(static_cast<double>(dt));
   mixr::graphics::Graphic::flashTimer(static_cast<double>(dt));
   display->tcFrame(static_cast<double>(dt));
}

// our class factory
mixr::base::IObject* factory(const std::string& name)
{
   mixr::base::IObject* obj{mixr::glut::factory(name)};
   if (obj == nullptr) obj = mixr::graphics::ftgl::factory(name);
=======
   mixr::base::Timer::updateTimers(static_cast<double>(dt));
   mixr::graphics::Graphic::flashTimer(static_cast<double>(dt));
   glutDisplay->tcFrame(static_cast<double>(dt));
}

// our class factory
mixr::base::Object* factory(const std::string& name)
{
   mixr::base::Object* obj{mixr::glut::factory(name)};
>>>>>>> d91383e8
   if (obj == nullptr) obj = mixr::graphics::factory(name);
   if (obj == nullptr) obj = mixr::base::factory(name);

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
   const auto glutDisplay = dynamic_cast<mixr::glut::IGlutDisplay*>(obj);
=======
   const auto glutDisplay = dynamic_cast<mixr::glut::GlutDisplay*>(obj);
>>>>>>> d91383e8
   if (glutDisplay == nullptr) {
      std::cerr << "Invalid configuration file!" << std::endl;
      std::exit(EXIT_FAILURE);
   }
   return glutDisplay;
}

//
int main(int argc, char* argv[])
{
   glutInit(&argc, argv);

   // default configuration filename
<<<<<<< HEAD
   std::string configFilename{"alignmentPattern.edl"};
   for (int i{1}; i < argc; i++) {
=======
   std::string configFilename = "glutdisplay.edl";
   for (int i = 1; i < argc; i++) {
>>>>>>> d91383e8
      if ( std::string(argv[i]) == "-f" ) {
         configFilename = argv[++i];
      }
   }

<<<<<<< HEAD
   display = builder(configFilename);

   // create a display window
   display->createWindow();
=======
   glutDisplay = builder(configFilename);

   // create a display window
   glutDisplay->createWindow();
>>>>>>> d91383e8

   // set timer
   const double dt{1.0 / static_cast<double>(frameRate)};
   const int millis{static_cast<int>(dt * 1000)};
   glutTimerFunc(millis, timerFunc, 1);

   glutMainLoop();
   return 0;
}
