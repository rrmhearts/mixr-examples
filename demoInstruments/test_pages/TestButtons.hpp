
<<<<<<< HEAD
#ifndef __TestButtons_HPP__
#define __TestButtons_HPP__
=======
#ifndef __TestButtons_H__
#define __TestButtons_H__
>>>>>>> d91383e8

#include "mixr/graphics/Page.hpp"

//------------------------------------------------------------------------------
// Class: TestButtons
//
// Description: Simply tests our buttons and prints out which one we hit
//------------------------------------------------------------------------------
class TestButtons final: public mixr::graphics::Page
{
   DECLARE_SUBCLASS(TestButtons, mixr::graphics::Page)

public:
   TestButtons();

   enum { REGULAR = 0, PUSH_MAINTAINED, PUSH_MOMENTARY, ROTARY, KNOB, SOLENOID };

   void updateData(const double dt = 0.0) final;
<<<<<<< HEAD
   bool event(const int event, mixr::base::IObject* const obj = nullptr) final;
=======
   bool event(const int event, mixr::base::Object* const obj = nullptr) final;
>>>>>>> d91383e8

private:
    bool regularButton();
    bool pushButtonMaintained();
    bool pushButtonMomentary();
    bool rotarySwitch();
    bool knobMoved();
    bool resetSolenoid();
    bool solenoidUp();
    bool solenoidDown();

    int whichButton{-1};
    double value{};

    SendData whichButtonSD;
    SendData valueSD;
    SendData latchedSD;
};

#endif
