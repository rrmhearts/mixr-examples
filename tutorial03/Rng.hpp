
<<<<<<< HEAD
#ifndef __Rng_HPP__
#define __Rng_HPP__

#include "mixr/base/IObject.hpp"
=======
#ifndef __Rng_H__
#define __Rng_H__

#include "mixr/base/Object.hpp"
>>>>>>> d91383e8

#include <random>

namespace mixr {
<<<<<<< HEAD
   namespace base { class Integer; }
=======
   namespace base { class Number; }
>>>>>>> d91383e8
}

//------------------------------------------------------------------------------
// Class: Rng
// Description: Generates random numbers
//------------------------------------------------------------------------------
<<<<<<< HEAD
class Rng final: public mixr::base::IObject
{
   DECLARE_SUBCLASS(Rng, mixr::base::IObject)
=======
class Rng final: public mixr::base::Object
{
   DECLARE_SUBCLASS(Rng, mixr::base::Object)
>>>>>>> d91383e8

public:
   Rng();

   double num();

<<<<<<< HEAD
   void setSeed(const int);

private:
   // mersenne twister algoithm used to produce random integer
   // values, uniformly distributed from [min(), max()]
=======
   void setSeed(const unsigned int);

private:
   // mersenne twister algoithm used to produce random integer
   // values, uniformly distributed from [min(), max()] 
>>>>>>> d91383e8
   std::mt19937 engine;
   std::uniform_real_distribution<> dist;

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotSeed(const mixr::base::Integer* const);
=======
   bool setSlotSeed(const mixr::base::Number* const);
>>>>>>> d91383e8
};

#endif
