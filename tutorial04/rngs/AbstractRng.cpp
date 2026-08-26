
#include "AbstractRng.hpp"

<<<<<<< HEAD
#include "mixr/base/numeric/Integer.hpp"
=======
#include "mixr/base/numeric/Number.hpp"
>>>>>>> d91383e8

#include <iostream>
#include <random>

IMPLEMENT_ABSTRACT_SUBCLASS(AbstractRng, "AbstractRng")
EMPTY_DELETEDATA(AbstractRng)
EMPTY_COPYDATA(AbstractRng)

BEGIN_SLOTTABLE(AbstractRng)
   "seed",
END_SLOTTABLE(AbstractRng)

BEGIN_SLOT_MAP(AbstractRng)
<<<<<<< HEAD
   ON_SLOT(1, setSlotSeed, mixr::base::Integer)
=======
   ON_SLOT(1, setSlotSeed, mixr::base::Number)
>>>>>>> d91383e8
END_SLOT_MAP()

AbstractRng::AbstractRng()
{
   STANDARD_CONSTRUCTOR()
}

<<<<<<< HEAD
void AbstractRng::setSeed(const int seed)
=======
void AbstractRng::setSeed(const unsigned int seed)
>>>>>>> d91383e8
{
   engine.seed(seed);
}

<<<<<<< HEAD
bool AbstractRng::setSlotSeed(const mixr::base::Integer* const seed)
{
   bool ok = false;
   if (seed != nullptr) {
      setSeed(seed->asInt());
=======
bool AbstractRng::setSlotSeed(const mixr::base::Number* const seed)
{
   bool ok = false;
   if (seed != nullptr) {
      setSeed(seed->getInt());
>>>>>>> d91383e8
      ok = true;
   }
   return ok;
}

