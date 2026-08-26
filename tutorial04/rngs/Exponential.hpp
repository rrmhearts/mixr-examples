
<<<<<<< HEAD
#ifndef __Exponential_HPP__
#define __Exponential_HPP__
=======
#ifndef __Exponential_H__
#define __Exponential_H__
>>>>>>> d91383e8

#include "AbstractRng.hpp"

namespace mixr {
<<<<<<< HEAD
namespace base { class INumber; }
=======
namespace base { class Number; }
>>>>>>> d91383e8
}

//------------------------------------------------------------------------------
// Class: Exponential
//------------------------------------------------------------------------------
class Exponential final: public AbstractRng
{
   DECLARE_SUBCLASS(Exponential, AbstractRng)

public:
   Exponential();

   double num() final;

   bool setMean(const double x)            { mean = x; return true; }
   double getMean() const                  { return mean; }

private:
   double mean {1.0};  // mean of distribution

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotMean(const mixr::base::INumber* const);
=======
   bool setSlotMean(const mixr::base::Number* const);
>>>>>>> d91383e8
};

#endif
