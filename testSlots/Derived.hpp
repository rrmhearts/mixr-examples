
<<<<<<< HEAD
#ifndef __Derived_HPP__
#define __Derived_HPP__
=======
#ifndef __Derived_H__
#define __Derived_H__
>>>>>>> d91383e8

#include "Base.hpp"

namespace mixr {
<<<<<<< HEAD
   namespace base { class INumber; }
=======
   namespace base { class Number; }
>>>>>>> d91383e8
}

//------------------------------------------------------------------------------
// Class: Derived
// Description: Derived off Base class
//------------------------------------------------------------------------------
class Derived final: public Base
{
   DECLARE_SUBCLASS(Derived, Base)

public:
   Derived();

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotSeed(const mixr::base::INumber* const);
=======
   bool setSlotSeed(const mixr::base::Number* const);
>>>>>>> d91383e8
};

#endif
