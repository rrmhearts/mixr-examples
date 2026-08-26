
<<<<<<< HEAD
#ifndef __mixr_xpanel_SpdLines_HPP__
#define __mixr_xpanel_SpdLines_HPP__
=======
#ifndef __mixr_xpanel_SpdLines_H__
#define __mixr_xpanel_SpdLines_H__
>>>>>>> d91383e8

#include "mixr/graphics/Graphic.hpp"

namespace mixr {
<<<<<<< HEAD
namespace base { class Boolean; }
=======
>>>>>>> d91383e8
namespace xpanel {

//------------------------------------------------------------------------------
// Class: SpdLines
//
// Description: Draws the lines for the airspeed graphic
// Inputs:
//      UPDATE_VALUE  -> altitude flag on or off
//------------------------------------------------------------------------------
class SpdLines final: public graphics::Graphic
{
<<<<<<< HEAD
    DECLARE_SUBCLASS(SpdLines, graphics::Graphic)
=======
    DECLARE_SUBCLASS(SpdLines,graphics::Graphic)
>>>>>>> d91383e8

public:
    SpdLines();

    // set functions
    bool setIsAlt(const bool newIsAlt)      { isAlt = newIsAlt; return true; }

    // get functions
    bool isAltSelected()                    { return isAlt; }

    void drawFunc() final;
<<<<<<< HEAD
    bool event(const int event, base::IObject* const obj = nullptr) final;

protected:
    bool setSlotIsAlt(const base::Boolean*);

private:
    // event function
    bool onEventSetIsAltSpdLines(const base::Boolean* const);
=======
    bool event(const int event, base::Object* const obj = nullptr) final;

protected:
    bool setSlotIsAlt(const base::Number* newIsAlt);

private:
    // event function
    bool onEventSetIsAltSpdLines(const base::Number* const);
>>>>>>> d91383e8

    bool isAlt{};     // are we drawing the altitude lines instead?
};

}
}

#endif
