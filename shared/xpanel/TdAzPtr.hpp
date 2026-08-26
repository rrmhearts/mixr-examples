
<<<<<<< HEAD
#ifndef __mixr_xpanel_TdAzPtr_HPP__
#define __mixr_xpanel_TdAzPtr_HPP__
=======
#ifndef __mixr_xpanel_TdAzPtr_H__
#define __mixr_xpanel_TdAzPtr_H__
>>>>>>> d91383e8

#include "mixr/graphics/Graphic.hpp"

namespace mixr {
<<<<<<< HEAD
namespace base { class INumber; }
=======
namespace base { class Number; }
>>>>>>> d91383e8
namespace xpanel {

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
// Events:
<<<<<<< HEAD
//    UPDATE_VALUE  <INumber>  ! azimuth angle (degs)
=======
//    UPDATE_VALUE  <Number>  ! azimuth angle (degs)
>>>>>>> d91383e8
//------------------------------------------------------------------------------
class TdAzPtr final: public graphics::Graphic
{
   DECLARE_SUBCLASS(TdAzPtr, graphics::Graphic)

public:
   TdAzPtr();

   double getAzimuth() const;       // degs
   bool setAzimuth(const double);   // degs

   void draw() final;
<<<<<<< HEAD
   bool event(const int event, base::IObject* const obj = nullptr) final;

private:
   bool onUpdateValue(const base::INumber* const msg);
=======
   bool event(const int event, base::Object* const obj = nullptr) final;

private:
   bool onUpdateValue(const base::Number* const msg);
>>>>>>> d91383e8

   double azimuth{};  // (degs)
};

}
}

#endif
