
#include "TestStation.hpp"

#include "mixr/models/system/Antenna.hpp"
<<<<<<< HEAD
=======
#include "mixr/models/player/air/AirVehicle.hpp"
>>>>>>> d91383e8

#include "mixr/base/numeric/Boolean.hpp"

#include "mixr/base/Pair.hpp"
<<<<<<< HEAD
#include "mixr/base/timers/ITimer.hpp"

#include "mixr/ui/glut/IGlutDisplay.hpp"
=======
#include "mixr/base/PairStream.hpp"
#include "mixr/base/units/Angles.hpp"
#include "mixr/base/Timers.hpp"

#include "mixr/ui/glut/GlutDisplay.hpp"
>>>>>>> d91383e8

IMPLEMENT_SUBCLASS(TestStation, "TestStation")

BEGIN_SLOTTABLE(TestStation)
    "glutDisplay",
    "mapDisplay",
END_SLOTTABLE(TestStation)

BEGIN_SLOT_MAP(TestStation)
<<<<<<< HEAD
    ON_SLOT(1, setSlotGlutDisplay, mixr::glut::IGlutDisplay)
    ON_SLOT(2, setSlotMapDisplay,  mixr::glut::IGlutDisplay)
=======
    ON_SLOT(1, setSlotGlutDisplay, mixr::glut::GlutDisplay)
    ON_SLOT(2, setSlotMapDisplay, mixr::glut::GlutDisplay)
>>>>>>> d91383e8
END_SLOT_MAP()

TestStation::TestStation()
{
   STANDARD_CONSTRUCTOR()
}

void TestStation::copyData(const TestStation& org, const bool)
{
   BaseClass::copyData(org);

   setSlotGlutDisplay(nullptr);
   glutDisplayInit = false;
   setSlotMapDisplay(nullptr);
   mapDisplayInit = false;
}

void TestStation::deleteData()
{
   setSlotGlutDisplay(nullptr);
   setSlotMapDisplay(nullptr);
}

void TestStation::updateTC(const double dt)
{
   // manage the timers
<<<<<<< HEAD
   mixr::base::ITimer::updateTimers(dt);
=======
   mixr::base::Timer::updateTimers(dt);
>>>>>>> d91383e8
   mixr::graphics::Graphic::flashTimer(dt);

   if (glutDisplay != nullptr) glutDisplay->updateTC(dt);
   if (mapDisplay != nullptr) mapDisplay->updateTC(dt);

   BaseClass::updateTC(dt);
}

void TestStation::updateData(const double dt)
{
   // ### Don't call updateData for our 'glutDisplay', which is derived from
   // graphics::GlutDisplay, because graphics::GlutDisplay handles calling updateData() for it's
   // own displays.

   BaseClass::updateData(dt);
}

void TestStation::reset()
{
   BaseClass::reset();

   // ---
   // Create the GLUT window
   // ---
   if (!glutDisplayInit && glutDisplay != nullptr) {
      glutDisplay->createWindow();
      glutDisplay->focus(glutDisplay);
      glutDisplayInit = true;
   }

   // create the MAP window
   if (!mapDisplayInit && mapDisplay != nullptr) {
      mapDisplay->createWindow();
      mapDisplay->focus(mapDisplay);
      mapDisplayInit = true;
   }
}

<<<<<<< HEAD
bool TestStation::setSlotGlutDisplay(mixr::glut::IGlutDisplay* const d)
=======
bool TestStation::setSlotGlutDisplay(mixr::glut::GlutDisplay* const d)
>>>>>>> d91383e8
{
   glutDisplay = d;
   glutDisplay->container(this);
   return true;
}

<<<<<<< HEAD
bool TestStation::setSlotMapDisplay(mixr::glut::IGlutDisplay* const d)
=======
bool TestStation::setSlotMapDisplay(mixr::glut::GlutDisplay* const d)
>>>>>>> d91383e8
{
   mapDisplay = d;
   mapDisplay->container(this);
   return true;
}

