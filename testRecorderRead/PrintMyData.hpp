
<<<<<<< HEAD
#ifndef __PrintMyData_HPP__
#define __PrintMyData_HPP__

#include "mixr/recorder/protobuf_v2/IPrintHandler.hpp"
=======
#ifndef __PrintMyData_H__
#define __PrintMyData_H__

#include "mixr/recorder/PrintHandler.hpp"
>>>>>>> d91383e8

//------------------------------------------------------------------------------
// Class: PrintMyData
// Description: Print my extended recorder data
//
// Factory name: PrintMyData
//------------------------------------------------------------------------------
<<<<<<< HEAD
class PrintMyData final: public mixr::recorder::protobuf_v2::IPrintHandler
{
   DECLARE_SUBCLASS(PrintMyData, mixr::recorder::protobuf_v2::IPrintHandler)
=======
class PrintMyData final: public mixr::recorder::PrintHandler
{
   DECLARE_SUBCLASS(PrintMyData, mixr::recorder::PrintHandler)
>>>>>>> d91383e8

public:
   PrintMyData();

protected:
<<<<<<< HEAD
   void processRecordImp(const mixr::recorder::protobuf_v2::DataRecordHandle* const handle) final;
=======
   void processRecordImp(const mixr::recorder::DataRecordHandle* const handle) final;
>>>>>>> d91383e8
};

#endif
