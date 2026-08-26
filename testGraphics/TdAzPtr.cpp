
#include "TdAzPtr.hpp"
<<<<<<< HEAD
#include "mixr/base/numeric/INumber.hpp"
=======
#include "mixr/base/numeric/Number.hpp"
>>>>>>> d91383e8
#include <iostream>

using namespace mixr;

IMPLEMENT_EMPTY_SLOTTABLE_SUBCLASS(TdAzPtr, "TdAzPtr")
EMPTY_DELETEDATA(TdAzPtr)

TdAzPtr::TdAzPtr()
{
    STANDARD_CONSTRUCTOR()
}

void TdAzPtr::copyData(const TdAzPtr& org, const bool)
{
    BaseClass::copyData(org);
    azimuth = 0.0;
}

//------------------------------------------------------------------------------
// event() -- default event handler
//------------------------------------------------------------------------------
<<<<<<< HEAD
bool TdAzPtr::event(const int event, base::IObject* const obj)
=======
bool TdAzPtr::event(const int event, base::Object* const obj)
>>>>>>> d91383e8
{
    bool used{};

    if (event == UPDATE_VALUE)
    {
<<<<<<< HEAD
        const auto num = dynamic_cast<const base::INumber*>(obj);
        if (num != nullptr) {
            azimuth = num->asDouble();
=======
        const auto num = dynamic_cast<const base::Number*>(obj);
        if (num != nullptr) {
            azimuth = num->getReal();
>>>>>>> d91383e8
            used = true;
        }
    }

    if (!used)
    {
        // Otherwise, pass key events up to our base class
<<<<<<< HEAD
        used = BaseClass::event(event, obj);
=======
        used = BaseClass::event(event,obj);
>>>>>>> d91383e8
    }

    return used;
}

void TdAzPtr::draw()
{
   if (isVisible())  {
       lcSaveMatrix();
       lcTranslate( azimuth, 0.0 );
       BaseClass::draw();
       lcRestoreMatrix();
   }
}
