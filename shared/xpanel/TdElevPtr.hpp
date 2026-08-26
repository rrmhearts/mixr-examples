
<<<<<<< HEAD
#ifndef __mixr_xpanel_TdElevPtr_HPP__
#define __mixr_xpanel_TdElevPtr_HPP__
=======
#ifndef __mixr_xpanel_TdElevPtr_H__
#define __mixr_xpanel_TdElevPtr_H__
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
<<<<<<< HEAD
//    UPDATE_VALUE  <INumber>  ! elevation angle (degs)
=======
//    UPDATE_VALUE  <Number>  ! elevation angle (degs)
>>>>>>> d91383e8
//------------------------------------------------------------------------------
class TdElevPtr final: public graphics::Graphic
{
   DECLARE_SUBCLASS(TdElevPtr, graphics::Graphic)

public:
   TdElevPtr();

   double getElevation() const;     // degs
   bool setElevation(const double); // degs

   void draw() final;
<<<<<<< HEAD
   bool event(const int event, base::IObject* const obj = nullptr) final;

private:
   bool onUpdateValue(const base::INumber* const);
=======
   bool event(const int event, base::Object* const obj = nullptr) final;

private:
   bool onUpdateValue(const base::Number* const);
>>>>>>> d91383e8

   double elev{};  // (degs)
};

}
}

#endif
