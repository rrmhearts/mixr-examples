
<<<<<<< HEAD
#ifndef __TdElevPtr_HPP__
#define __TdElevPtr_HPP__
=======
#ifndef __TdElevPtr_H__
#define __TdElevPtr_H__
>>>>>>> d91383e8

#include "mixr/graphics/Graphic.hpp"

//------------------------------------------------------------------------------
// Class: TdElevPtr
// Description: Display an elevation pointer.  Before drawing, we position the
//              pointer based our received elevation angle.  The shape of the
//              pointer is defined by our graphic subcomponents.
//
// Notes:
//    1) Elevation is in degrees.
//    2) Movement is limited to +/- 30 degrees, which is scaled to +/- 1.0 in
//       world coordinates.
//
// Factory name: TdElevPtr
// Events:
//    UPDATE_VALUE  <Number>  ! elevation angle (degs)
//------------------------------------------------------------------------------
namespace mixr {
<<<<<<< HEAD
namespace base { class INumber; }
=======
namespace base { class Number; }
>>>>>>> d91383e8
}

class TdElevPtr final: public mixr::graphics::Graphic
{
   DECLARE_SUBCLASS(TdElevPtr, mixr::graphics::Graphic)

public:
   TdElevPtr();

   double getElevation() const;     // degs
   bool setElevation(const double); // degs

   void draw() final;

<<<<<<< HEAD
   bool event(const int event, mixr::base::IObject* const obj = nullptr) final;

private:
   bool onUpdateValue(const mixr::base::INumber* const);
=======
   bool event(const int event, mixr::base::Object* const obj = nullptr) final;

private:
   bool onUpdateValue(const mixr::base::Number* const);
>>>>>>> d91383e8

   double elev{};  // (degs)
};

#endif
