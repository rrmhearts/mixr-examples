
<<<<<<< HEAD
#ifndef __TestStation_HPP__
#define __TestStation_HPP__

#include "mixr/simulation/IStation.hpp"
=======
#ifndef __TestStation_H__
#define __TestStation_H__

#include "mixr/simulation/Station.hpp"
>>>>>>> d91383e8

namespace mixr {
   namespace graphics { class GlutDisplay; }
}

class Display;

//------------------------------------------------------------------------------
// Class: TestStation
//
// Description: Test station for the Ground mapping radar demo
//------------------------------------------------------------------------------
<<<<<<< HEAD
class TestStation final: public mixr::simulation::IStation
{
    DECLARE_SUBCLASS(TestStation, mixr::simulation::IStation)
=======
class TestStation final: public mixr::simulation::Station
{
    DECLARE_SUBCLASS(TestStation, mixr::simulation::Station)
>>>>>>> d91383e8

public:
    TestStation();

    void updateTC(const double dt = 0.0) final;
    void reset() final;

private:
    mixr::base::safe_ptr<Display> display;
    bool displayInit {};

private:
    // slot table helper methods
    bool setSlotDisplay(Display* const);
};

#endif
