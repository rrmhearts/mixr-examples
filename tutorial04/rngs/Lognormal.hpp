
<<<<<<< HEAD
#ifndef __Lognormal_HPP__
#define __Lognormal_HPP__
=======
#ifndef __Lognormal_H__
#define __Lognormal_H__
>>>>>>> d91383e8

#include "AbstractRng.hpp"

namespace mixr {
<<<<<<< HEAD
  namespace base { class INumber; }
}

=======
  namespace base { class Number; }
}
  
>>>>>>> d91383e8
//------------------------------------------------------------------------------
// Lognormal - this class returns a random variate from the lognormal distribution.
// Input parameters:
//     sigma : continuous parameter
//     mu    : continuous parameter
//     gamma : continuous location parameter (gamma = 0 for 2 parameter lognormal)
//------------------------------------------------------------------------------
class Lognormal final: public AbstractRng
{
   DECLARE_SUBCLASS(Lognormal, AbstractRng)

public:
   Lognormal();

   double num() final;
<<<<<<< HEAD

=======
  
>>>>>>> d91383e8
   bool setMean(const double x)       { mean = x; return true; }
   double getMean() const             { return mean; }

   bool setStdDev(const double x)     { stddev = x; return true; }
   double getStdDev() const           { return stddev; }

private:
   double mean{};
   double stddev{};

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotMean(const mixr::base::INumber* const);
   bool setSlotStdDev(const mixr::base::INumber* const);
=======
   bool setSlotMean(const mixr::base::Number* const);
   bool setSlotStdDev(const mixr::base::Number* const);
>>>>>>> d91383e8
};

#endif
