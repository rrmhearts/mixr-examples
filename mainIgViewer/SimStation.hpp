
<<<<<<< HEAD
#ifndef __SimStation_HPP__
#define __SimStation_HPP__

#include "mixr/simulation/IStation.hpp"

namespace mixr {
namespace base { class ITime; class Table1; }
namespace glut  { class IGlutDisplay; }
=======
#ifndef __SimStation_H__
#define __SimStation_H__

#include "mixr/simulation/Station.hpp"

namespace mixr {
namespace base { class Time; class Table1; }
namespace glut  { class GlutDisplay; }
namespace simulation { class AirVehicle; }
>>>>>>> d91383e8
}

//------------------------------------------------------------------------------
// Class: SimStation
//
// Description: Example station class that adds our graphics, which is managed by
//              a GlutDisplay.
//
// Factory name: SimStation
// Slots:
//      display          <glut::GlutDisplay> ! Main graphics display
<<<<<<< HEAD
//      autoResetTimer   <ITime>             ! Auto RESET timer value (base::ITime); default: 0
//------------------------------------------------------------------------------
class SimStation final: public ::mixr::simulation::IStation
{
   DECLARE_SUBCLASS(SimStation, ::mixr::simulation::IStation)
=======
//      autoResetTimer   <Time>              ! Auto RESET timer value (base::Time); default: 0
//------------------------------------------------------------------------------
class SimStation final: public ::mixr::simulation::Station
{
   DECLARE_SUBCLASS(SimStation, ::mixr::simulation::Station)
>>>>>>> d91383e8

public:
   SimStation();

   // Step our "ownship" to the next local air vehicle
   void stepOwnshipPlayer();

   // base::Component Interface
   void updateTC(const double dt = 0.0f) final;
   void updateData(const double dt = 0.0f) final;
   void reset() final;
<<<<<<< HEAD
   bool event(const int event, ::mixr::base::IObject* const obj = nullptr) final;
=======
   bool event(const int event, ::mixr::base::Object* const obj = nullptr) final;
>>>>>>> d91383e8

   // SimStation interface
   bool onEntry();

private:
   // main display
<<<<<<< HEAD
   ::mixr::base::safe_ptr<::mixr::glut::IGlutDisplay> mainDisplay;
   bool displayInit{};
   // auto reset timer
   double autoResetTimer{};                       // Auto RESET timer (sends a RESET_EVENT after timeout)
   const ::mixr::base::ITime* autoResetTimer0{};  // Init value of the Auto RESET timer

private:
   // slot table helper methods
   bool setSlotMainDisplay(::mixr::glut::IGlutDisplay* const);
   bool setSlotAutoResetTime(const ::mixr::base::ITime* const);     // Sets the auto RESET timer
=======
   ::mixr::base::safe_ptr<::mixr::glut::GlutDisplay> mainDisplay;
   bool displayInit{};
   // auto reset timer
   double autoResetTimer{};                      // Auto RESET timer (sends a RESET_EVENT after timeout)
   const ::mixr::base::Time* autoResetTimer0{};  // Init value of the Auto RESET timer

private:
   // slot table helper methods
   bool setSlotMainDisplay(::mixr::glut::GlutDisplay* const);
   bool setSlotAutoResetTime(const ::mixr::base::Time* const);     // Sets the auto RESET timer
>>>>>>> d91383e8
};

#endif
