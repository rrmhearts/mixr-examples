
#include "mixr/base/Pair.hpp"
<<<<<<< HEAD
#include "mixr/base/timers/ITimer.hpp"
=======
#include "mixr/base/Timers.hpp"
#include "mixr/base/PairStream.hpp"
>>>>>>> d91383e8
#include "mixr/base/edl_parser.hpp"

#include "mixr/graphics/Readouts.hpp"
#include "mixr/graphics/SymbolLoader.hpp"

<<<<<<< HEAD
=======
#include "mixr/ui/glut/GlutDisplay.hpp"
>>>>>>> d91383e8
#include <GL/glut.h>

#include "TestDisplay.hpp"

#include <fstream>

#include "mixr/map/vpf/VpfTable.hpp"
#include "mixr/map/vpf/VpfRecord.hpp"
#include "mixr/map/vpf/VpfDirectory.hpp"
#include "mixr/map/vpf/VMap0MainDirectory.hpp"

// factories
#include "mixr/base/factory.hpp"
#include "mixr/graphics/factory.hpp"
<<<<<<< HEAD
#include "mixr/graphics/fonts/ftgl/factory.hpp"
=======
>>>>>>> d91383e8
#include "mixr/instruments/factory.hpp"
#include "mixr/ui/glut/factory.hpp"
#include "mixr/map/vpf/factory.hpp"

using namespace mixr;

const int frameRate{20};

class TestDisplay* sys{};

void timerFunc(int)
{
    const double dt{1.0 / static_cast<double>(frameRate)};

    const unsigned int millis{static_cast<unsigned int>(dt * 1000)};
    glutTimerFunc(millis, timerFunc, 1);

<<<<<<< HEAD
    base::ITimer::updateTimers( static_cast<double>(dt) );
=======
    base::Timer::updateTimers( static_cast<double>(dt) );
>>>>>>> d91383e8
    graphics::Graphic::flashTimer( static_cast<double>(dt) );
    sys->tcFrame( static_cast<double>(dt) );
}

<<<<<<< HEAD
base::IObject* factory(const std::string& name)
{
    base::IObject* obj{};
=======
base::Object* factory(const std::string& name)
{
    base::Object* obj{};
>>>>>>> d91383e8

    if ( name == TestDisplay::getFactoryName() ) {
        obj = new TestDisplay;
    }

    if (obj == nullptr) obj = vpf::factory(name);
    if (obj == nullptr) obj = instruments::factory(name);
    if (obj == nullptr) obj = graphics::factory(name);
<<<<<<< HEAD
    if (obj == nullptr) obj = graphics::ftgl::factory(name);
    if (obj == nullptr) obj = glut::factory(name);
    if (obj == nullptr) obj = base::factory(name);

=======
    if (obj == nullptr) obj = glut::factory(name);
    if (obj == nullptr) obj = base::factory(name);
    
>>>>>>> d91383e8
    return obj;
}

void builder(const std::string& filename)
{
    // Read the description file
    int num_errors{};
<<<<<<< HEAD
    base::IObject* obj{base::edl_parser(filename, factory, &num_errors)};
=======
    base::Object* obj{base::edl_parser(filename, factory, &num_errors)};
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
   const auto testDisplay = dynamic_cast<TestDisplay*>(obj);
   if (testDisplay == nullptr) {
      std::cerr << "Invalid configuration file!" << std::endl;
      std::exit(EXIT_FAILURE);
   }

   sys = testDisplay;
}

int main(int argc, char* argv[])
{
<<<<<<< HEAD
    std::string configFilename{"test.edl"};
=======
    std::string configFilename = "test.edl";
>>>>>>> d91383e8
    builder(configFilename);

    glutInit(&argc, argv);
    sys->createWindow();
    const double dt{1.0 / static_cast<double>(frameRate)};
    const unsigned int millis{static_cast<unsigned int>(dt * 1000)};
    glutTimerFunc(millis, timerFunc, 1);
    glutMainLoop();
    return 0;
}

