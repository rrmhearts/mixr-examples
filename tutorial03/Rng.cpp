
#include "Rng.hpp"

<<<<<<< HEAD
#include "mixr/base/numeric/Integer.hpp"
=======
#include "mixr/base/numeric/Number.hpp"
>>>>>>> d91383e8

#include <iostream>
#include <random>

IMPLEMENT_SUBCLASS(Rng, "Rng")
EMPTY_DELETEDATA(Rng)

BEGIN_SLOTTABLE(Rng)
   "seed",
END_SLOTTABLE(Rng)

BEGIN_SLOT_MAP(Rng)
<<<<<<< HEAD
   ON_SLOT(1, setSlotSeed, mixr::base::Integer)
=======
   ON_SLOT(1, setSlotSeed, mixr::base::Number)
>>>>>>> d91383e8
END_SLOT_MAP()

Rng::Rng()
{
   STANDARD_CONSTRUCTOR()
   std::cout << "Rng::Rng() called\n";
}

void Rng::copyData(const Rng& org, const bool)
{
   BaseClass::copyData(org);
   std::cout << "Rng::copyData() called\n";
}

double Rng::num()
{
   return dist(engine);
}

<<<<<<< HEAD
void Rng::setSeed(const int seed)
=======
void Rng::setSeed(const unsigned int seed)
>>>>>>> d91383e8
{
   engine.seed(seed);
}

<<<<<<< HEAD
bool Rng::setSlotSeed(const mixr::base::Integer* const seed)
{
   bool ok{};
   if (seed != nullptr) {
      setSeed(seed->asInt());
=======
bool Rng::setSlotSeed(const mixr::base::Number* const seed)
{
   bool ok{};
   if (seed != nullptr) {
      setSeed(seed->getInt());
>>>>>>> d91383e8
      ok = true;
   }
   return ok;
}

