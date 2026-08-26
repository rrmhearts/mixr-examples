
<<<<<<< HEAD
#ifndef __MyObj_HPP__
#define __MyObj_HPP__

#include "mixr/base/IObject.hpp"

namespace mixr {
namespace base { class Boolean; class PairStream; class IList; class String; class Identifier; }
=======
#ifndef __MyObj_H__
#define __MyObj_H__

#include "mixr/base/Object.hpp"

namespace mixr {
namespace base { class PairStream; class List; class String; class Number; class Identifier; }
>>>>>>> d91383e8
}

//------------------------------------------------------------------------------
// Class: MyObj
// Description: example class
//------------------------------------------------------------------------------
<<<<<<< HEAD
class MyObj final: public mixr::base::IObject
{
   DECLARE_SUBCLASS(MyObj, mixr::base::IObject)
=======
class MyObj final: public mixr::base::Object
{
   DECLARE_SUBCLASS(MyObj, mixr::base::Object)
>>>>>>> d91383e8

public:
   MyObj();

   // data access functions
   bool setColorTable(const mixr::base::PairStream* const);
   const mixr::base::PairStream* getColorTable() const;
   bool setTextColor(const mixr::base::Identifier* const);
   const mixr::base::Identifier* getTextColor() const;
   bool setBackColor(const mixr::base::Identifier* const);
   const mixr::base::Identifier* getBackColor() const;

<<<<<<< HEAD
   bool setVector(const mixr::base::IList* const);
   const mixr::base::IList* getVector() const;
=======
   bool setVector(const mixr::base::List* const);
   const mixr::base::List* getVector() const;
>>>>>>> d91383e8

   bool setVisible(bool);
   bool getVisible() const;

   bool setMessage(const mixr::base::String* const);
   const mixr::base::String* getMessage() const;

   void dumpContents() const;

   bool isValid() const final;

private:
   const mixr::base::PairStream* colorTable{};
   const mixr::base::Identifier* textColor{};
   const mixr::base::Identifier* backColor{};
<<<<<<< HEAD
   const mixr::base::IList* vector{};
=======
   const mixr::base::List* vector{};
>>>>>>> d91383e8
   const mixr::base::String* message{};
   bool visible{};

private:
   // slot table helper methods
   bool setSlotColorTable(const mixr::base::PairStream* const);
   bool setSlotTextColor(const mixr::base::Identifier* const);
   bool setSlotBackColor(const mixr::base::Identifier* const);
<<<<<<< HEAD
   bool setSlotVector(const mixr::base::IList* const);
   bool setSlotVisible(const mixr::base::Boolean* const);
=======
   bool setSlotVector(const mixr::base::List* const);
   bool setSlotVisible(const mixr::base::Number* const);
>>>>>>> d91383e8
   bool setSlotMessage(const mixr::base::String* const);
};

#endif
