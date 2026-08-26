
#include <iostream>

#include "Uniform.hpp"
<<<<<<< HEAD
#include "mixr/base/numeric/INumber.hpp"
=======
#include "mixr/base/numeric/Number.hpp"

using mixr::base::Number;
>>>>>>> d91383e8

IMPLEMENT_SUBCLASS(Uniform,"Uniform")
EMPTY_DELETEDATA(Uniform)

// slot table for this class type
BEGIN_SLOTTABLE(Uniform)
  "min",            // 1
  "max",            // 2
END_SLOTTABLE(Uniform)
//  map slot table to handles
BEGIN_SLOT_MAP(Uniform)
<<<<<<< HEAD
  ON_SLOT(1, setSlotMin, mixr::base::INumber)
  ON_SLOT(2, setSlotMax, mixr::base::INumber)
=======
  ON_SLOT(1, setSlotMin, Number)
  ON_SLOT(2, setSlotMax, Number)
>>>>>>> d91383e8
END_SLOT_MAP()

Uniform::Uniform()
{
   STANDARD_CONSTRUCTOR()
}

void Uniform::copyData(const Uniform& org, const bool cc)
{
   BaseClass::copyData(org);

   min = org.min;
   max = org.max;
}

double Uniform::num()
{
   std::uniform_real_distribution<double> dist(min, max);
   return dist(engine);
}

<<<<<<< HEAD
bool Uniform::setSlotMin(const mixr::base::INumber* const x)
{
   bool ok = false;
   if (x != nullptr)
      ok = setMin(x->asDouble());
   return ok;
}

bool Uniform::setSlotMax(const mixr::base::INumber* const x)
{
   bool ok = false;
   if (x != nullptr)
      ok = setMax(x->asDouble());
=======
bool Uniform::setSlotMin(const Number* const x)
{
   bool ok = false;
   if (x != nullptr)
      ok = setMin(x->getDouble());
   return ok;
}

bool Uniform::setSlotMax(const Number* const x)
{
   bool ok = false;
   if (x != nullptr)
      ok = setMax(x->getDouble());
>>>>>>> d91383e8
   return ok;
}

