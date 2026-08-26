
<<<<<<< HEAD
#ifndef __Tester_HPP__
#define __Tester_HPP__

#include "mixr/base/IComponent.hpp"
=======
#ifndef __Tester_H__
#define __Tester_H__

#include "mixr/base/Component.hpp"
>>>>>>> d91383e8

namespace mixr {
namespace base { class PairStream; }
}

//------------------------------------------------------------------------------
// Class: Tester
// Description: Container class for the interval timers being tested
//
// Factory name: Tester
// Slots:
//    timers   <PairStream>   ! List of timers to be tested
//------------------------------------------------------------------------------
<<<<<<< HEAD
class Tester final: public mixr::base::IComponent
{
   DECLARE_SUBCLASS(Tester, mixr::base::IComponent)
=======
class Tester final: public mixr::base::Component
{
   DECLARE_SUBCLASS(Tester, mixr::base::Component)
>>>>>>> d91383e8

public:
   Tester();

   bool areAllActiveTimerAlarmsOn() const;

   void printTimers() const;

   // Restart all of the timers -- they're left in an active state
   void restartAllTimers();

   void reset() final;

private:
   mixr::base::PairStream* timers{};    // List of timers

private:
   // slot table helper methods
   bool setSlotTimers(const mixr::base::PairStream* const);
};

#endif
