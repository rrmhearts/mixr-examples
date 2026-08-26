
#include "Base.hpp"

<<<<<<< HEAD
#include "mixr/base/numeric/INumber.hpp"
=======
#include "mixr/base/numeric/Number.hpp"
>>>>>>> d91383e8

#include <iostream>

IMPLEMENT_SUBCLASS(Base, "Base")
EMPTY_DELETEDATA(Base)
EMPTY_COPYDATA(Base)

BEGIN_SLOTTABLE(Base)
   "seed",
END_SLOTTABLE(Base)

BEGIN_SLOT_MAP(Base)
<<<<<<< HEAD
   ON_SLOT(1, setSlotSeed, mixr::base::INumber)
=======
   ON_SLOT(1, setSlotSeed, mixr::base::Number)
>>>>>>> d91383e8
END_SLOT_MAP()

Base::Base()
{
   STANDARD_CONSTRUCTOR()
   std::cout << "Base::Base() called\n";
}

<<<<<<< HEAD
bool Base::setSlotSeed(const mixr::base::INumber* const)
=======
bool Base::setSlotSeed(const mixr::base::Number* const)
>>>>>>> d91383e8
{
   std::cout << "Base seed being set\n";
   return true;
}
