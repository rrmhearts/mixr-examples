
#include "SimStation.hpp"

<<<<<<< HEAD
#include "mixr/simulation/ISimulation.hpp"

#include "mixr/models/player/air/IAirVehicle.hpp"

#include "mixr/ui/glut/IGlutDisplay.hpp"
=======
#include "mixr/simulation/Simulation.hpp"

#include "mixr/models/player/air/AirVehicle.hpp"

#include "mixr/ui/glut/GlutDisplay.hpp"

#include "mixr/base/numeric/Boolean.hpp"
>>>>>>> d91383e8

#include "mixr/base/Identifier.hpp"
#include "mixr/base/Pair.hpp"
#include "mixr/base/PairStream.hpp"
<<<<<<< HEAD
#include "mixr/base/timers/ITimer.hpp"
#include "mixr/base/numeric/Boolean.hpp"
#include "mixr/base/qty/angles.hpp"
#include "mixr/base/qty/times.hpp"
=======
#include "mixr/base/Timers.hpp"
#include "mixr/base/units/Angles.hpp"
#include "mixr/base/units/Times.hpp"
>>>>>>> d91383e8

IMPLEMENT_SUBCLASS(SimStation, "SimStation")
EMPTY_DELETEDATA(SimStation)

BEGIN_SLOTTABLE(SimStation)
<<<<<<< HEAD
    "display",                  //  1: main display
=======
    "display",                  //  1) Main Display
>>>>>>> d91383e8
    "autoResetTimer",           //  2: Auto RESET timer value (base::Time); default: zero (no auto reset)
END_SLOTTABLE(SimStation)

BEGIN_SLOT_MAP(SimStation)
<<<<<<< HEAD
    ON_SLOT( 1, setSlotDisplay,        mixr::glut::IGlutDisplay)
    ON_SLOT( 2, setSlotAutoResetTime,  mixr::base::ITime)
=======
    ON_SLOT( 1, setSlotMainDisplay,    mixr::glut::GlutDisplay)
    ON_SLOT( 2, setSlotAutoResetTime,  mixr::base::Time)
>>>>>>> d91383e8
END_SLOT_MAP()

SimStation::SimStation()
{
    STANDARD_CONSTRUCTOR()
}

void SimStation::copyData(const SimStation& org, const bool)
{
    BaseClass::copyData(org);

<<<<<<< HEAD
    display = org.display->clone();
    //setSlotAutoResetTime(org.autoResetTimer0);
    autoResetTimer0 = org.autoResetTimer0->clone();
=======
    setSlotAutoResetTime(org.autoResetTimer0);
    autoResetTimer = org.autoResetTimer;
>>>>>>> d91383e8
}

void SimStation::reset()
{
<<<<<<< HEAD
    if (display != nullptr && !displayInit) {
        display->createWindow();
        mixr::base::Pair* p{display->findByType(typeid(mixr::graphics::Page))};
        if (p != nullptr) display->focus(static_cast<mixr::graphics::Graphic*>(p->object()));
        else display->focus(nullptr);
        displayInit = true;
    }
    // reset all of our subcomponents
    if (display != nullptr) display->reset();

    // auto reset timer
    if (autoResetTimer0 != nullptr) {
        autoResetTimer = autoResetTimer0->getValueInSeconds();
    } else {
        autoResetTimer = 0.0;
=======
    if (!displayInit && mainDisplay != nullptr) {
        mainDisplay->createWindow();
        mixr::base::Pair* p{mainDisplay->findByType(typeid(mixr::graphics::Page))};
        if (p != nullptr) mainDisplay->focus(static_cast<mixr::graphics::Graphic*>(p->object()));
        else mainDisplay->focus(nullptr);
        displayInit = true;
    }
    // reset all of our subcomponents
    if (mainDisplay != nullptr) mainDisplay->reset();

    // auto reset timer
    if (autoResetTimer0 != nullptr) {
        autoResetTimer = mixr::base::Seconds::convertStatic(*autoResetTimer0);
    }
    else {
        autoResetTimer = 0;
>>>>>>> d91383e8
    }

    // reset our baseclass
    BaseClass::reset();
}

void SimStation::updateTC(const double dt)
{
    // First update the simulation
    BaseClass::updateTC(dt);

<<<<<<< HEAD
    mixr::base::ITimer::updateTimers(dt);
    mixr::graphics::Graphic::flashTimer(dt);

    // Update any TC stuff in our main display
    if (display != nullptr) display->updateTC(dt);
=======
    mixr::base::Timer::updateTimers(dt);
    mixr::graphics::Graphic::flashTimer(dt);

    // Update any TC stuff in our main display
    if (mainDisplay != nullptr) mainDisplay->updateTC(dt);
>>>>>>> d91383e8
}

void SimStation::updateData(const double dt)
{
    // ### Don't call updateData for our 'mainDisplay', which is derived from
    // graphics::GlutDisplay, because graphics::GlutDisplay handles calling updateData() for it's
    // own displays.

    // ---
    // Auto RESET/FREEZE timer --
    // ---
    if ( autoResetTimer > 0 && getSimulation()->isNotFrozen() ) {
       autoResetTimer -= dt;
       if (autoResetTimer <= 0) {
         mixr::base::Boolean newFrz(true);
         getSimulation()->event(FREEZE_EVENT, &newFrz);
         this->event(RESET_EVENT);
       }
    }

    BaseClass::updateData(dt);
}

// step to the next local player
void SimStation::stepOwnshipPlayer()
{
    mixr::base::PairStream* pl{getSimulation()->getPlayers()};
    if (pl != nullptr) {

<<<<<<< HEAD
       mixr::models::IPlayer* f{};
       mixr::models::IPlayer* n{};
       bool found{};

       // Find the next player
       mixr::base::IList::Item* item{pl->getFirstItem()};
       while (item != nullptr) {
           const auto pair = static_cast<mixr::base::Pair*>(item->getValue());
           if (pair != nullptr) {
               const auto ip = static_cast<mixr::models::IPlayer*>(pair->object());
               if ( ip->isMode(mixr::models::IPlayer::Mode::ACTIVE) &&
                    ip->isLocalPlayer() &&
                    ip->isClassType(typeid(mixr::models::IAirVehicle))
=======
       mixr::models::Player* f{};
       mixr::models::Player* n{};
       bool found{};

       // Find the next player
       mixr::base::List::Item* item{pl->getFirstItem()};
       while (item != nullptr) {
           const auto pair = static_cast<mixr::base::Pair*>(item->getValue());
           if (pair != nullptr) {
               const auto ip = static_cast<mixr::models::Player*>(pair->object());
               if ( ip->isMode(mixr::models::Player::ACTIVE) &&
                    ip->isLocalPlayer() &&
                    ip->isClassType(typeid(mixr::models::AirVehicle))
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
bool SimStation::setSlotDisplay(mixr::glut::IGlutDisplay* const x)
{
    bool ok{};
    display = x;
    if (display != nullptr) {
        display->container(this);
        ok = true;
    }
    return ok;
}

// setSlotAutoResetTime() -- Sets the startup RESET pulse timer
bool SimStation::setSlotAutoResetTime(mixr::base::ITime* const x)
{
    autoResetTimer0 = x;
    if (autoResetTimer0 != nullptr) {
        autoResetTimer = autoResetTimer0->getValueInSeconds();
    } else {
        autoResetTimer = -1.0;
    }
=======
bool SimStation::setSlotMainDisplay(mixr::glut::GlutDisplay* const d)
{
    if (mainDisplay != nullptr)   { mainDisplay->container(nullptr);  }
    mainDisplay = d;
    if (mainDisplay != nullptr)   { mainDisplay->container(this);     }
    displayInit = false;
    return true;
}

// setSlotAutoResetTime() -- Sets the startup RESET pulse timer
bool SimStation::setSlotAutoResetTime(const mixr::base::Time* const num)
{
    if (autoResetTimer0 != nullptr) {
        autoResetTimer0->unref();
        autoResetTimer0 = nullptr;
        autoResetTimer = -1.0;
    }
    autoResetTimer0 = num;
    if (autoResetTimer0 != nullptr) {
        autoResetTimer0->ref();
        autoResetTimer = mixr::base::Seconds::convertStatic(*autoResetTimer0);
    }
>>>>>>> d91383e8
    return true;
}

