
<<<<<<< HEAD
#ifndef __TdElevPtr_HPP__
#define __TdElevPtr_HPP__
=======
#ifndef __TdElevPtr_H__
#define __TdElevPtr_H__
>>>>>>> d91383e8

#include "mixr/graphics/Graphic.hpp"

namespace mixr {
<<<<<<< HEAD
namespace base { class INumber; }
=======
namespace base { class Number; }
>>>>>>> d91383e8
}

//------------------------------------------------------------------------------
// Class: TdElevPtr
//
// Description: Test Display Elevation Pointer
//------------------------------------------------------------------------------
class TdElevPtr final: public mixr::graphics::Graphic
{
    DECLARE_SUBCLASS(TdElevPtr, mixr::graphics::Graphic)

public:
    TdElevPtr();

<<<<<<< HEAD
    bool event(const int event, mixr::base::IObject* const obj = nullptr) final;
    void draw() final;

    //event handler macro functions
    bool onUpdateValue(const mixr::base::INumber* const ouvobj);
=======
    bool event(const int event, mixr::base::Object* const obj = nullptr) final;
    void draw() final;

    //event handler macro functions
    bool onUpdateValue(const mixr::base::Number* const ouvobj);
>>>>>>> d91383e8

private:
    double elev {};
};

#endif
