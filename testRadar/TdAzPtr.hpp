
<<<<<<< HEAD
#ifndef __TdAzPtr_HPP__
#define __TdAzPtr_HPP__
=======
#ifndef __TdAzPtr_H__
#define __TdAzPtr_H__
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
// Class: TdAzPtr
// Description: Display an azimuth pointer.  Before drawing, we position the
//              pointer based our received azimuth angle.  The shape of the
//              pointer is defined by our graphic subcomponents.
//
// Notes:
//    1) Azimuth is in degrees.
//    2) Movement is limited to +/- 30 degrees, which is scaled to +/- 1.0 in
//       world coordinates.
//
// Factory name: TdAzPtr
//
// Events:
<<<<<<< HEAD
//    UPDATE_VALUE  <INumber>  ! azimuth angle (degs)
=======
//    UPDATE_VALUE  <Number>  ! azimuth angle (degs)
>>>>>>> d91383e8
//------------------------------------------------------------------------------
class TdAzPtr final: public mixr::graphics::Graphic
{
   DECLARE_SUBCLASS(TdAzPtr, mixr::graphics::Graphic)

public:
   TdAzPtr();

   double getAzimuth() const;       // degs
   bool setAzimuth(const double);   // degs

   void draw() final;

<<<<<<< HEAD
   bool event(const int event, mixr::base::IObject* const obj = nullptr) final;

private:
   bool onUpdateValue(const mixr::base::INumber* const msg);
=======
   bool event(const int event, mixr::base::Object* const obj = nullptr) final;

private:
   bool onUpdateValue(const mixr::base::Number* const msg);
>>>>>>> d91383e8

   double azimuth{};  // (degs)
};

#endif
