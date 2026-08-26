
<<<<<<< HEAD
#ifndef __Base_HPP__
#define __Base_HPP__

#include "mixr/base/IObject.hpp"

namespace mixr {
   namespace base { class INumber; }
=======
#ifndef __Base_H__
#define __Base_H__

#include "mixr/base/Object.hpp"

namespace mixr {
   namespace base { class Number; }
>>>>>>> d91383e8
}

//------------------------------------------------------------------------------
// Class: Base
// Description: Base class that processes slot inputs
//------------------------------------------------------------------------------
<<<<<<< HEAD
class Base : public mixr::base::IObject
{
   DECLARE_SUBCLASS(Base, mixr::base::IObject)
=======
class Base : public mixr::base::Object
{
   DECLARE_SUBCLASS(Base, mixr::base::Object)
>>>>>>> d91383e8

public:
   Base();

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotSeed(const mixr::base::INumber* const);
=======
   bool setSlotSeed(const mixr::base::Number* const);
>>>>>>> d91383e8
};

#endif
