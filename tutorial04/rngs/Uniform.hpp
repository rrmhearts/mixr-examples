
<<<<<<< HEAD
#ifndef __Uniform_HPP__
#define __Uniform_HPP__
=======
#ifndef __Uniform_H__
#define __Uniform_H__
>>>>>>> d91383e8

#include "AbstractRng.hpp"

namespace mixr {
<<<<<<< HEAD
namespace base { class INumber; }
=======
namespace base { class Number; }
>>>>>>> d91383e8
}

class Uniform final: public AbstractRng
{
   DECLARE_SUBCLASS(Uniform, AbstractRng)

public:
   Uniform();

   double num() final;
<<<<<<< HEAD

=======
  
>>>>>>> d91383e8
   bool setMin(const double x)  { min = x; return true; }
   double getMin() const        { return min; }

   bool setMax(const double x)  { max = x; return true; }
   double getMax() const        { return max; }

private:
   double min {};
   double max {};

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotMin(const mixr::base::INumber* const);
   bool setSlotMax(const mixr::base::INumber* const);
=======
   bool setSlotMin(const mixr::base::Number* const);
   bool setSlotMax(const mixr::base::Number* const);
>>>>>>> d91383e8
};

#endif
