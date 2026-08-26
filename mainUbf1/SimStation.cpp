
#include "SimStation.hpp"

<<<<<<< HEAD
#include "mixr/simulation/ISimulation.hpp"

#include "mixr/models/player/air/IAirVehicle.hpp"

#include "mixr/ui/glut/IGlutDisplay.hpp"

#include "mixr/base/numeric/Boolean.hpp"
#include "mixr/base/qty/angles.hpp"
#include "mixr/base/qty/times.hpp"
=======
#include "mixr/simulation/Simulation.hpp"

#include "mixr/models/player/air/AirVehicle.hpp"

#include "mixr/ui/glut/GlutDisplay.hpp"

#include "mixr/base/numeric/Boolean.hpp"
#include "mixr/base/units/Angles.hpp"
#include "mixr/base/units/Times.hpp"
>>>>>>> d91383e8

#include "mixr/base/Identifier.hpp"
#include "mixr/base/Pair.hpp"
#include "mixr/base/PairStream.hpp"
<<<<<<< HEAD
#include "mixr/base/timers/ITimer.hpp"

#include <string>
=======
#include "mixr/base/Timers.hpp"
>>>>>>> d91383e8

using namespace mixr;

IMPLEMENT_SUBCLASS(SimStation, "SimStation")
EMPTY_COPYDATA(SimStation)
EMPTY_DELETEDATA(SimStation)

BEGIN_SLOTTABLE(SimStation)
    "display",                  //  1) Main Display
END_SLOTTABLE(SimStation)

BEGIN_SLOT_MAP(SimStation)
<<<<<<< HEAD
    ON_SLOT( 1, setSlotMainDisplay, glut::IGlutDisplay)
=======
    ON_SLOT( 1, setSlotMainDisplay, glut::GlutDisplay)
>>>>>>> d91383e8
END_SLOT_MAP()

SimStation::SimStation()
{
    STANDARD_CONSTRUCTOR()
}

void SimStation::reset()
{
    // setup ownship player pointer
<<<<<<< HEAD
    setOwnshipByName( getOwnshipName().c_str() );
=======
    setOwnshipByName( getOwnshipName()->getString() );
>>>>>>> d91383e8

    if (!displayInit && mainDisplay != nullptr) {
        mainDisplay->createWindow();
        base::Pair* p{mainDisplay->findByType(typeid(graphics::Page))};
        if (p != nullptr) mainDisplay->focus(static_cast<graphics::Graphic*>(p->object()));
        else mainDisplay->focus(nullptr);
        displayInit = true;
    }
    // reset all of our subcomponents
    if (mainDisplay != nullptr) mainDisplay->reset();

    // reset our baseclass
    BaseClass::reset();
}

void SimStation::updateTC(const double dt)
{
    // First update the simulation
    BaseClass::updateTC(dt);

<<<<<<< HEAD
    base::ITimer::updateTimers(dt);
=======
    base::Timer::updateTimers(dt);
>>>>>>> d91383e8
    graphics::Graphic::flashTimer(dt);

    // Update any TC stuff in our main display
    if (mainDisplay != nullptr) mainDisplay->updateTC(dt);
}

//------------------------------------------------------------------------------
// stepOwnshipPlayer() -- Step to the next local player
//------------------------------------------------------------------------------
void SimStation::stepOwnshipPlayer()
{
   base::PairStream* pl{getSimulation()->getPlayers()};
   if (pl != nullptr) {

<<<<<<< HEAD
      models::IPlayer* f{};
      models::IPlayer* n{};
      bool found{};

      // Find the next player
      base::IList::Item* item{pl->getFirstItem()};
      while (item != nullptr) {
         const auto pair = static_cast<base::Pair*>(item->getValue());
         if (pair != nullptr) {
            const auto ip = static_cast<models::IPlayer*>(pair->object());
            if ( ip->isMode(models::IPlayer::Mode::ACTIVE) &&
               ip->isLocalPlayer() &&
               ip->isClassType(typeid(models::IAirVehicle))
=======
      models::Player* f{};
      models::Player* n{};
      bool found{};

      // Find the next player
      base::List::Item* item{pl->getFirstItem()};
      while (item != nullptr) {
         const auto pair = static_cast<base::Pair*>(item->getValue());
         if (pair != nullptr) {
            const auto ip = static_cast<models::Player*>(pair->object());
            if ( ip->isMode(models::Player::ACTIVE) &&
               ip->isLocalPlayer() &&
               ip->isClassType(typeid(models::AirVehicle))
>>>>>>> d91383e8
               ) {
                  if (f == nullptr) { f = ip; }  // Remember the first
                  if (found) { n = ip; ; break; }
                  if (ip == getOwnship()) found = true;
            }
         }
         item = item->getNext();
      }
      if (found && n == nullptr) n = f;
      if (n != nullptr) setOwnshipPlayer(n);

      pl->unref();
    }
}

<<<<<<< HEAD
bool SimStation::setSlotMainDisplay(glut::IGlutDisplay* const d)
=======
bool SimStation::setSlotMainDisplay(glut::GlutDisplay* const d)
>>>>>>> d91383e8
{
    if (mainDisplay != nullptr) mainDisplay->container(nullptr);
    mainDisplay = d;
    if (mainDisplay != nullptr) mainDisplay->container(this);
    displayInit = false;
    return true;
}

