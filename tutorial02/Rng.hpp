
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

   void setSeed(const unsigned int);

private:
   // mersenne twister algoithm used to produce random integer
<<<<<<< HEAD
   // values, uniformly distributed from [min(), max()]
=======
   // values, uniformly distributed from [min(), max()] 
>>>>>>> d91383e8
   std::mt19937 engine;
   std::uniform_real_distribution<> dist;
};

#endif
