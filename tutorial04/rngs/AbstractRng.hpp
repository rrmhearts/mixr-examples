
<<<<<<< HEAD
#ifndef __AbstractRng_HPP__
#define __AbstractRng_HPP__

#include "mixr/base/IObject.hpp"
=======
#ifndef __AbstractRng_H__
#define __AbstractRng_H__

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
// Class: AbstractRng
// Description: Provides base functionality to generate random values
//              for a specific distribution
//------------------------------------------------------------------------------
<<<<<<< HEAD
class AbstractRng : public mixr::base::IObject
{
   DECLARE_SUBCLASS(AbstractRng, mixr::base::IObject)
=======
class AbstractRng : public mixr::base::Object
{
   DECLARE_SUBCLASS(AbstractRng, mixr::base::Object)
>>>>>>> d91383e8

public:
   AbstractRng();

   virtual double num() =0;

<<<<<<< HEAD
   void setSeed(const int);
=======
   void setSeed(const unsigned int);
>>>>>>> d91383e8

protected:
   // mersenne twister algoithm
   std::mt19937 engine;

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotSeed(const mixr::base::Integer* const);
=======
   bool setSlotSeed(const mixr::base::Number* const);
>>>>>>> d91383e8
};

#endif
