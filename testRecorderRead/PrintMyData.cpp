
#include "PrintMyData.hpp"

<<<<<<< HEAD
#include "xrecorder/proto/DataRecord.pb.h"
#include "xrecorder/dataRecorderTokens.hpp"

#include "mixr/recorder/protobuf_v2/DataRecordHandle.hpp"
=======
#include "xrecorder/protobuf/DataRecord.pb.h"
#include "xrecorder/dataRecorderTokens.hpp"
#include "mixr/recorder/DataRecordHandle.hpp"
>>>>>>> d91383e8

using namespace mixr;

IMPLEMENT_SUBCLASS(PrintMyData, "PrintMyData")
EMPTY_SLOTTABLE(PrintMyData)
EMPTY_CONSTRUCTOR(PrintMyData)
EMPTY_COPYDATA(PrintMyData)
EMPTY_DELETEDATA(PrintMyData)

// print the data
<<<<<<< HEAD
void PrintMyData::processRecordImp(const mixr::recorder::protobuf_v2::DataRecordHandle* const handle)
{
   if (handle == nullptr) return;  // cannot continue
   const mixr::recorder::protobuf_v2::proto::DataRecord* dataRecord{handle->getRecord()};
   if (dataRecord == nullptr) return;  // cannot continue

   // Get the time msg
   const mixr::recorder::protobuf_v2::proto::Time* timeMsg{};
=======
void PrintMyData::processRecordImp(const mixr::recorder::DataRecordHandle* const handle)
{
   if (handle == nullptr) return;  // cannot continue
   const mixr::recorder::pb::DataRecord* dataRecord{handle->getRecord()};
   if (dataRecord == nullptr) return;  // cannot continue

   // Get the time msg
   const mixr::recorder::pb::Time* timeMsg{};
>>>>>>> d91383e8
   if (dataRecord->has_time()) {
      timeMsg = &dataRecord->time();
   }

   // Get message id
   unsigned int messageId{dataRecord->id()};
   switch (messageId) {

      // Extended Marker event
      case REID_MARKER : {
         if (dataRecord->has_marker_msg()) {
            std::stringstream sout;

            sout << "MARKER " << "    ";
            if (timeMsg != nullptr) {
               if (timeMsg->has_exec_time()) {
                  sout << timeMsg->exec_time() << ";  ";
               }
            }

<<<<<<< HEAD
            const mixr::recorder::protobuf_v2::proto::MarkerMsg* msg{&dataRecord->marker_msg()};
=======
            const mixr::recorder::pb::MarkerMsg* msg{&dataRecord->marker_msg()};
>>>>>>> d91383e8

            if (msg->has_id()) sout << "id= " << msg->id() << ";  ";
            if (msg->has_source_id()) sout << "source_id= " << msg->source_id() << ";  ";

<<<<<<< HEAD
            if (msg->HasExtension( mixr::xrecorder::proto::foo )) sout << "foo= " << msg->GetExtension( mixr::xrecorder::proto::foo ) << ";  ";
=======
            if (msg->HasExtension( mixr::xrecorder::pb::foo )) sout << "foo= " << msg->GetExtension( mixr::xrecorder::pb::foo ) << ";  ";
>>>>>>> d91383e8

            printToOutput( sout.str().c_str() );
         }
         break;
      }

      // MyData message event
      case REID_MY_DATA_EVENT : {
<<<<<<< HEAD
         if (dataRecord->HasExtension(mixr::xrecorder::proto::my_data_msg)) {
=======
         if (dataRecord->HasExtension( mixr::xrecorder::pb::my_data_msg )) {
>>>>>>> d91383e8
            std::stringstream sout;

            sout << "MY_DATA " << "   ";
            if (timeMsg != nullptr) {
               if (timeMsg->has_exec_time()) {
                  sout << timeMsg->exec_time() << ";  ";
               }
            }

<<<<<<< HEAD
            const mixr::xrecorder::proto::MyDataMsg* msg = &dataRecord->GetExtension(mixr::xrecorder::proto::my_data_msg);
=======
            const mixr::xrecorder::pb::MyDataMsg* msg = &dataRecord->GetExtension( mixr::xrecorder::pb::my_data_msg );
>>>>>>> d91383e8

            if (msg->has_fee()) sout << "fee= " << msg->fee() << ";  ";
            if (msg->has_fi()) sout << "fi= " << msg->fi() << ";  ";
            if (msg->has_fo()) sout << "fo= " << msg->fo() << ";  ";

            printToOutput( sout.str().c_str() );
         }
         break;
      }

   }

}
