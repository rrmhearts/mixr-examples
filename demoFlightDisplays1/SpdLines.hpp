
<<<<<<< HEAD
#ifndef __SpdLines_HPP__
#define __SpdLines_HPP__
=======
#ifndef __SpdLines_H__
#define __SpdLines_H__
>>>>>>> d91383e8

#include "mixr/graphics/Graphic.hpp"

namespace mixr {
<<<<<<< HEAD
namespace base { class Boolean; }
=======
namespace base { class Number; }
>>>>>>> d91383e8
}

//------------------------------------------------------------------------------
// Class: SpdLines
//
// Description: Draws the lines for the airspeed graphic
// Inputs:
//      UPDATE_VALUE  -> altitude flag on or off
//------------------------------------------------------------------------------
class SpdLines final: public mixr::graphics::Graphic
{
    DECLARE_SUBCLASS(SpdLines, mixr::graphics::Graphic)

public:
    SpdLines();

    void drawFunc() final;
<<<<<<< HEAD
    bool event(const int event, mixr::base::IObject* const obj = nullptr) final;
=======
    bool event(const int event, mixr::base::Object* const obj = nullptr) final;
>>>>>>> d91383e8

    // set methods
    bool setIsAlt(const bool newIsAlt)          { isAlt = newIsAlt; return true; }

    // get methods
    bool isAltSelected()                        { return isAlt; }

private:
    // event method
<<<<<<< HEAD
    bool onEventSetIsAltSpdLines(const mixr::base::Boolean* const);
=======
    bool onEventSetIsAltSpdLines(const mixr::base::Number* const);
>>>>>>> d91383e8

    bool isAlt{};     // are we drawing the altitude lines instead?

private:
    // slot table helper methods
<<<<<<< HEAD
    bool setSlotIsAlt(const mixr::base::Boolean*);
=======
    bool setSlotIsAlt(const mixr::base::Number*);
>>>>>>> d91383e8
};

#endif
