
#include <iostream>

#include "Lognormal.hpp"

<<<<<<< HEAD
#include "mixr/base/numeric/INumber.hpp"
=======
#include "mixr/base/numeric/Number.hpp"

using mixr::base::Number;
>>>>>>> d91383e8

IMPLEMENT_SUBCLASS(Lognormal, "Lognormal")
EMPTY_DELETEDATA(Lognormal)

// slot table for this class type
BEGIN_SLOTTABLE(Lognormal)
  "mean",              // 1
  "stddev",            // 2
END_SLOTTABLE(Lognormal)
//  map slot table to handles
BEGIN_SLOT_MAP(Lognormal)
<<<<<<< HEAD
  ON_SLOT(1, setSlotMean, mixr::base::INumber)
  ON_SLOT(2, setSlotStdDev, mixr::base::INumber)
=======
  ON_SLOT(1, setSlotMean, Number)
  ON_SLOT(2, setSlotStdDev, Number)
>>>>>>> d91383e8
END_SLOT_MAP()

Lognormal::Lognormal()
{
   STANDARD_CONSTRUCTOR()
}

void Lognormal::copyData(const Lognormal& org, const bool)
{
   BaseClass::copyData(org);
   mean = org.mean;
   stddev = org.stddev;
}

double Lognormal::num()
{
   std::lognormal_distribution<double> dist(mean, stddev);
   return dist(engine);
}

<<<<<<< HEAD
bool Lognormal::setSlotMean(const mixr::base::INumber* const x)
{
   bool ok = false;
   if (x != nullptr)
      ok = setMean(x->asDouble());
   return ok;
}

bool Lognormal::setSlotStdDev(const mixr::base::INumber* const x)
{
   bool ok = false;
   if (x != nullptr)
      ok = setStdDev(x->asDouble());
=======
bool Lognormal::setSlotMean(const Number* const x)
{
   bool ok = false;
   if (x != nullptr)
      ok = setMean(x->getDouble());
   return ok;
}

bool Lognormal::setSlotStdDev(const Number* const x)
{
   bool ok = false;
   if (x != nullptr)
      ok = setStdDev(x->getDouble());
>>>>>>> d91383e8
   return ok;
}


