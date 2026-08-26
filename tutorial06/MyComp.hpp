
<<<<<<< HEAD
#ifndef __MyComp_HPP__
#define __MyComp_HPP__

#include "mixr/base/IComponent.hpp"
=======
#ifndef __MyComp_H__
#define __MyComp_H__

#include "mixr/base/Component.hpp"
>>>>>>> d91383e8

namespace mixr {
namespace base { class String; }
}

//------------------------------------------------------------------------------
// Class: MyComp
// Description: example class
//------------------------------------------------------------------------------
<<<<<<< HEAD
class MyComp final: public mixr::base::IComponent
{
   DECLARE_SUBCLASS(MyComp, mixr::base::IComponent)
=======
class MyComp final: public mixr::base::Component
{
   DECLARE_SUBCLASS(MyComp, mixr::base::Component)
>>>>>>> d91383e8

public:
   MyComp();

   // data access functions
   bool setStr(const mixr::base::String* const);
   const mixr::base::String* getStr() const;

   void reset() final;
   void updateTC(const double dt = 0.0) final;
   void updateData(const double dt = 0.0) final;

private:
   const mixr::base::String* str{};

private:
   // slot table helper methods
   bool setSlotStr(const mixr::base::String* const);
};

#endif
