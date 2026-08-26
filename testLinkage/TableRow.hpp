
<<<<<<< HEAD
#ifndef __TableRow_HPP__
#define __TableRow_HPP__

#include "mixr/graphics/readouts/IReadout.hpp"
=======
#ifndef __TableRow_H__
#define __TableRow_H__

#include "mixr/graphics/readouts/AbstractField.hpp"
>>>>>>> d91383e8

namespace mixr {
namespace base { class Pair; }
}

//-----------------------------------------------------------------------
// Class: TableRow
// Description: One row of in the table (used by Table only)
//-----------------------------------------------------------------------
<<<<<<< HEAD
class TableRow final: public mixr::graphics::IReadout
{
   DECLARE_SUBCLASS(TableRow, mixr::graphics::IReadout)
=======
class TableRow final: public mixr::graphics::AbstractField
{
   DECLARE_SUBCLASS(TableRow, mixr::graphics::AbstractField)
>>>>>>> d91383e8

public:
   TableRow();

   void put(mixr::base::Pair* const);

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

private:
   void position();
};

#endif
