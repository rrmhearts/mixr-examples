
#include "Derived.hpp"

<<<<<<< HEAD
#include "mixr/base/numeric/INumber.hpp"
=======
#include "mixr/base/numeric/Number.hpp"
>>>>>>> d91383e8

#include <iostream>

IMPLEMENT_SUBCLASS(Derived, "Derived")
EMPTY_DELETEDATA(Derived)
EMPTY_COPYDATA(Derived)

BEGIN_SLOTTABLE(Derived)
   "seed",
END_SLOTTABLE(Derived)

BEGIN_SLOT_MAP(Derived)
<<<<<<< HEAD
   ON_SLOT(1, setSlotSeed, mixr::base::INumber)
=======
   ON_SLOT(1, setSlotSeed, mixr::base::Number)
>>>>>>> d91383e8
END_SLOT_MAP()

Derived::Derived()
{
   STANDARD_CONSTRUCTOR()
   std::cout << "Derived::Derived() called\n";
}

<<<<<<< HEAD
bool Derived::setSlotSeed(const mixr::base::INumber* const)
=======
bool Derived::setSlotSeed(const mixr::base::Number* const)
>>>>>>> d91383e8
{
   std::cout << "Derived seed being set\n";
   return true;
}

