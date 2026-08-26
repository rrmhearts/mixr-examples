
<<<<<<< HEAD
#ifndef __Table_HPP__
#define __Table_HPP__

#include "mixr/graphics/readouts/IReadout.hpp"

namespace mixr {
namespace base { class Integer; class PairStream; }
=======
#ifndef __Table_H__
#define __Table_H__

#include "mixr/graphics/readouts/AbstractField.hpp"

namespace mixr {
namespace base { class Number; class PairStream; }
>>>>>>> d91383e8
}

//------------------------------------------------------------------------------
// Class: Table
// Description: Manages a table
//
// Factory name: Table
// Slots:
<<<<<<< HEAD
//    rows     <Integer>     ! Number of rows (default: 1)
//    spacing  <Integer>     ! Spacing between rows (default: 1)
//    columns  <PairStream>  ! Column descriptions: list of items in each row
//------------------------------------------------------------------------------
class Table final: public mixr::graphics::IReadout
{
   DECLARE_SUBCLASS(Table, mixr::graphics::IReadout)
=======
//    rows     <Number>     ! Number of rows (default: 1)
//    spacing  <Number>     ! Spacing between rows (default: 1)
//    columns  <PairStream> ! Column descriptions: list of items in each row
//------------------------------------------------------------------------------
class Table final: public mixr::graphics::AbstractField
{
   DECLARE_SUBCLASS(Table, mixr::graphics::AbstractField)
>>>>>>> d91383e8

public:
   Table();

   const mixr::base::PairStream* getColumns() const;
   int getNumberOfRows() const;

<<<<<<< HEAD
   // graphics::Readout interface
   int line() const final;
   void line(const int ll) final;
   int column() const final;
   void column(const int cc) final;
=======
   // graphics::AbstractField interface
   int line() const final;
   int line(const int ll) final;
   int column() const final;
   int column(const int cc) final;
>>>>>>> d91383e8

   // base::Component interface
   void reset() final;

private:
   static const int DEFAULT_ROW{1};
   static const int DEFAULT_SPACING{1};

   void build();        // Builds the table into our components
   void position();     // Positions the table

   int rows{DEFAULT_ROW};                    // Number of rows in table
   int spacing{DEFAULT_SPACING};             // Spacing between rows (default: 1)
   const mixr::base::PairStream* columns{};  // columns items

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotRows(mixr::base::Integer* const);
   bool setSlotSpacing(mixr::base::Integer* const);
=======
   bool setSlotRows(mixr::base::Number* const);
   bool setSlotSpacing(mixr::base::Number* const);
>>>>>>> d91383e8
   bool setSlotColumns(mixr::base::PairStream* const);
};

#endif
