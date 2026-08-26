
<<<<<<< HEAD
#ifndef __Station_HPP__
#define __Station_HPP__

#include "mixr/simulation/IStation.hpp"

namespace mixr {
   namespace glut { class IGlutDisplay; }
=======
#ifndef __Station_H__
#define __Station_H__

#include "mixr/simulation/Station.hpp"

namespace mixr {
   namespace glut { class GlutDisplay; }
>>>>>>> d91383e8
}

// -------------------------------------------------------------------------------
// Class: Station
//
// Description:
//      Derived Station that will know it has a display and can be accessed through
//      it.  This also runs the simulation, and acts as the interface between the
//      graphics and simulation.
// -------------------------------------------------------------------------------
<<<<<<< HEAD
class Station final: public mixr::simulation::IStation
{
    DECLARE_SUBCLASS(Station, mixr::simulation::IStation)
=======
class Station final: public mixr::simulation::Station
{
    DECLARE_SUBCLASS(Station, mixr::simulation::Station)
>>>>>>> d91383e8

public:
    Station();

    void reset() final;

private:
<<<<<<< HEAD
    mixr::base::safe_ptr<mixr::glut::IGlutDisplay> display;  // main display
    bool displayInit{};                                      // display created?

private:
    // slot table helper methods
    bool setSlotDisplay(mixr::glut::IGlutDisplay*);
=======
    mixr::glut::GlutDisplay* display{}; // this is our main display that
    bool displayInit{};               // is our display created?

private:
    // slot table helper methods
    bool setSlotDisplay(mixr::glut::GlutDisplay*);
>>>>>>> d91383e8
};

#endif
