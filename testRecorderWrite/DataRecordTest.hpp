
<<<<<<< HEAD
#ifndef __DataRecordTest_HPP__
#define __DataRecordTest_HPP__

#include "mixr/recorder/protobuf_v2/IOutputHandler.hpp"

#include "mixr/recorder/protobuf_v2/PrintSelected.hpp"
=======
#ifndef __DataRecordTest_H__
#define __DataRecordTest_H__

#include "mixr/recorder/OutputHandler.hpp"

#include "mixr/recorder/PrintSelected.hpp"
>>>>>>> d91383e8
#include <string>
#include <array>

namespace mixr {
namespace base { class String; }
namespace recorder {
<<<<<<< HEAD
namespace protobuf_v2 {
=======
>>>>>>> d91383e8
class TabPrinter;
class FileWriter;
class FileReader;
class DataRecorder;
class PrintPlayer;
class DataRecordHandle;
}
}
<<<<<<< HEAD
}
=======
>>>>>>> d91383e8

//------------------------------------------------------------------------------
// Class: DataRecordTest
//------------------------------------------------------------------------------
<<<<<<< HEAD
class DataRecordTest final: public mixr::recorder::protobuf_v2::IOutputHandler
{
   DECLARE_SUBCLASS(DataRecordTest, mixr::recorder::protobuf_v2::IOutputHandler)
=======
class DataRecordTest final: public mixr::recorder::OutputHandler
{
   DECLARE_SUBCLASS(DataRecordTest, mixr::recorder::OutputHandler)
>>>>>>> d91383e8

public:
   DataRecordTest();

   // Select one of these in main.cpp
   bool testEvents();      // switch to test each possible event message
   bool testSerialize();   // Test to serialize and parse a set of messages

protected:
   void eventTestMenu();
   void readSerialFromFile();

   // all messages:
<<<<<<< HEAD
   mixr::recorder::protobuf_v2::DataRecordHandle* testFileIdMsg(int run);
   mixr::recorder::protobuf_v2::DataRecordHandle* testNewPlayerEventMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testPlayerRemovedEventMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testPlayerDataMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testPlayerDamagedEventMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testPlayerCollisionEventMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testPlayerCrashEventMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testPlayerKilledEventMsg(unsigned int type);
   mixr::recorder::protobuf_v2::DataRecordHandle* testWeaponReleaseEventMsg(unsigned int side);
   mixr::recorder::protobuf_v2::DataRecordHandle* testWeaponHungEventMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testWeaponDetonationEventMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testGunFiredEventMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testNewTrackEventMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testTrackRemovedEventMsg();
   mixr::recorder::protobuf_v2::DataRecordHandle* testTrackDataMsg();

   mixr::recorder::protobuf_v2::DataRecordHandle* testLastMsg();
=======
   mixr::recorder::DataRecordHandle* testFileIdMsg(int run);
   mixr::recorder::DataRecordHandle* testNewPlayerEventMsg();
   mixr::recorder::DataRecordHandle* testPlayerRemovedEventMsg();
   mixr::recorder::DataRecordHandle* testPlayerDataMsg();
   mixr::recorder::DataRecordHandle* testPlayerDamagedEventMsg();
   mixr::recorder::DataRecordHandle* testPlayerCollisionEventMsg();
   mixr::recorder::DataRecordHandle* testPlayerCrashEventMsg();
   mixr::recorder::DataRecordHandle* testPlayerKilledEventMsg(unsigned int type);
   mixr::recorder::DataRecordHandle* testWeaponReleaseEventMsg(unsigned int side);
   mixr::recorder::DataRecordHandle* testWeaponHungEventMsg();
   mixr::recorder::DataRecordHandle* testWeaponDetonationEventMsg();
   mixr::recorder::DataRecordHandle* testGunFiredEventMsg();
   mixr::recorder::DataRecordHandle* testNewTrackEventMsg();
   mixr::recorder::DataRecordHandle* testTrackRemovedEventMsg();
   mixr::recorder::DataRecordHandle* testTrackDataMsg();

   mixr::recorder::DataRecordHandle* testLastMsg();
>>>>>>> d91383e8

   // Recursive function to look at each embedded message
   bool processMessage(const google::protobuf::Message* const msg);

   // Set comparison criteria:
   bool setMsgToken(const unsigned int token);
   bool setFieldOfInterest(const std::string fieldName );
   bool setCompareToValue(const std::string strVal);
   bool setCompareToValue(const int numVal );
   bool setCompareToValue(const double dblVal );
<<<<<<< HEAD
   bool setCompareCondition(const mixr::recorder::protobuf_v2::PrintSelected::Condition cc);
=======
   bool setCompareCondition(const mixr::recorder::PrintSelected::Condition cc);
>>>>>>> d91383e8
   bool setTimeOnly(const bool flg );

   double getSimTime();
   double getExecTime();
   double getUtcTime();

private:
   std::string fileName;
<<<<<<< HEAD
   mixr::base::safe_ptr<mixr::recorder::protobuf_v2::PrintPlayer> myPrintPlayer;
   mixr::base::safe_ptr<mixr::recorder::protobuf_v2::PrintSelected> myPrintSelected;
   mixr::base::safe_ptr<mixr::recorder::protobuf_v2::PrintSelected> myPrintSelected2;
   mixr::base::safe_ptr<mixr::recorder::protobuf_v2::TabPrinter> myRecPrint;
   mixr::base::safe_ptr<mixr::recorder::protobuf_v2::FileWriter> myFileWrite;
   mixr::base::safe_ptr<mixr::recorder::protobuf_v2::FileReader> myFileRead;
   mixr::base::safe_ptr<mixr::recorder::protobuf_v2::DataRecorder> myDataRec;

   std::string fieldName;
   mixr::recorder::protobuf_v2::PrintSelected::Condition condition;
=======
   mixr::base::safe_ptr<mixr::recorder::PrintPlayer> myPrintPlayer;
   mixr::base::safe_ptr<mixr::recorder::PrintSelected> myPrintSelected;
   mixr::base::safe_ptr<mixr::recorder::PrintSelected> myPrintSelected2;
   mixr::base::safe_ptr<mixr::recorder::TabPrinter> myRecPrint;
   mixr::base::safe_ptr<mixr::recorder::FileWriter> myFileWrite;
   mixr::base::safe_ptr<mixr::recorder::FileReader> myFileRead;
   mixr::base::safe_ptr<mixr::recorder::DataRecorder> myDataRec;

   std::string fieldName;
   mixr::recorder::PrintSelected::Condition condition;
>>>>>>> d91383e8
   int compareI{};
   std::string compareS;
   double compareD{};
   std::string fullFieldName;
   bool fieldSelected{};
   unsigned int timesCalled{};

   // Struct and array for saving multiple sets of selection criteria
   unsigned int selectionNum{};
   struct SelectionCriteria {
      unsigned int msgToken{};
<<<<<<< HEAD
      std::string fieldName;
      double compareValD{};
      std::string compareValS;
      int compareValI{};
      mixr::recorder::protobuf_v2::PrintSelected::Condition condition{mixr::recorder::protobuf_v2::PrintSelected::Condition::EQ};
=======
      std::string fieldName = "";
      double compareValD{};
      std::string compareValS = "";
      int compareValI{};
      mixr::recorder::PrintSelected::Condition condition{mixr::recorder::PrintSelected::Condition::EQ};
>>>>>>> d91383e8
      bool timeOnly{};
   };
   std::array<SelectionCriteria, 20> selection;

private:
   // slot table helper methods
   bool setSlotFileName(mixr::base::String* const);
<<<<<<< HEAD
   bool setSlotTabPrinter(mixr::recorder::protobuf_v2::TabPrinter*);
   bool setSlotFileWriter(mixr::recorder::protobuf_v2::FileWriter*);
   bool setSlotFileReader(mixr::recorder::protobuf_v2::FileReader*);
   bool setSlotRecordData(mixr::recorder::protobuf_v2::DataRecorder* const);
   bool setSlotPrintPlayer(mixr::recorder::protobuf_v2::PrintPlayer*);
   bool setSlotPrintSelected(mixr::recorder::protobuf_v2::PrintSelected*);
   bool setSlotPrintSelected2(mixr::recorder::protobuf_v2::PrintSelected*);
=======
   bool setSlotTabPrinter(mixr::recorder::TabPrinter*);
   bool setSlotFileWriter(mixr::recorder::FileWriter*);
   bool setSlotFileReader(mixr::recorder::FileReader*);
   bool setSlotRecordData(mixr::recorder::DataRecorder* const);
   bool setSlotPrintPlayer(mixr::recorder::PrintPlayer*);
   bool setSlotPrintSelected(mixr::recorder::PrintSelected*);
   bool setSlotPrintSelected2(mixr::recorder::PrintSelected*);
>>>>>>> d91383e8
};

#endif
