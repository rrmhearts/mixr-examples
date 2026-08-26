
#include "TdAzPtr.hpp"

<<<<<<< HEAD
#include "mixr/base/numeric/INumber.hpp"

#include "mixr/base/qty/util/angle_utils.hpp"
=======
#include "mixr/base/numeric/Number.hpp"

#include "mixr/base/units/angle_utils.hpp"
>>>>>>> d91383e8

using namespace mixr;

IMPLEMENT_EMPTY_SLOTTABLE_SUBCLASS(TdAzPtr, "TdAzPtr")
EMPTY_DELETEDATA(TdAzPtr)

BEGIN_EVENT_HANDLER(TdAzPtr)
<<<<<<< HEAD
    ON_EVENT_OBJ(UPDATE_VALUE, onUpdateValue, base::INumber)
=======
    ON_EVENT_OBJ(UPDATE_VALUE, onUpdateValue, base::Number)
>>>>>>> d91383e8
END_EVENT_HANDLER()

TdAzPtr::TdAzPtr()
{
    STANDARD_CONSTRUCTOR()
}

void TdAzPtr::copyData(const TdAzPtr& org, const bool)
{
    BaseClass::copyData(org);
    azimuth = org.azimuth;
}

//------------------------------------------------------------------------------
// Get & Set functions
//------------------------------------------------------------------------------
double TdAzPtr::getAzimuth() const
{
   return azimuth;
}

bool TdAzPtr::setAzimuth(const double v)
{
   azimuth = base::angle::aepcdDeg(v);
   return true;
}

//------------------------------------------------------------------------------
// Event handlers
//------------------------------------------------------------------------------
<<<<<<< HEAD
bool TdAzPtr::onUpdateValue(const base::INumber* const msg)
{
    bool ok{};
    if (msg != nullptr) {
      ok = setAzimuth(msg->asDouble());
=======
bool TdAzPtr::onUpdateValue(const base::Number* const msg)
{
    bool ok{};
    if (msg != nullptr) {
      ok = setAzimuth(msg->getReal());
>>>>>>> d91383e8
    }
    return ok;
}

//------------------------------------------------------------------------------
// Translate in X by the azimuth angle and draw.
//------------------------------------------------------------------------------
void TdAzPtr::draw()
{
   if (isVisible())  {
       lcSaveMatrix();
       lcTranslate( azimuth/30.0f, 0.0 );
       graphics::Graphic::draw();
       lcRestoreMatrix();
   }
}
