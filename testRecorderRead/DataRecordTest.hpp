
<<<<<<< HEAD
#ifndef __DataRecordTest_HPP__
#define __DataRecordTest_HPP__

#include "mixr/base/IComponent.hpp"

namespace mixr {
namespace recorder {
namespace protobuf_v2 {
   class IInputHandler; class IOutputHandler; }
}
=======
#ifndef __DataRecordTest_H__
#define __DataRecordTest_H__

#include "mixr/base/Component.hpp"

namespace mixr {
namespace recorder { class InputHandler; class OutputHandler; }
>>>>>>> d91383e8
}

//------------------------------------------------------------------------------
// Class: DataRecordTest
//------------------------------------------------------------------------------
<<<<<<< HEAD
class DataRecordTest final: public mixr::base::IComponent
{
   DECLARE_SUBCLASS(DataRecordTest, mixr::base::IComponent)
=======
class DataRecordTest final: public mixr::base::Component
{
   DECLARE_SUBCLASS(DataRecordTest, mixr::base::Component)
>>>>>>> d91383e8

public:
   DataRecordTest();

   // main test
   void runTest();

private:
<<<<<<< HEAD
   mixr::base::safe_ptr<mixr::recorder::protobuf_v2::IInputHandler> inputHandler;
   mixr::base::safe_ptr<mixr::recorder::protobuf_v2::IOutputHandler> outputHandler;

private:
   // slot table helper methods
   bool setSlotInputHandler(mixr::recorder::protobuf_v2::IInputHandler* const);
   bool setSlotOutputHandler(mixr::recorder::protobuf_v2::IOutputHandler* const);
=======
   mixr::base::safe_ptr<mixr::recorder::InputHandler> inputHandler;
   mixr::base::safe_ptr<mixr::recorder::OutputHandler> outputHandler;

private:
   // slot table helper methods
   bool setSlotInputHandler(mixr::recorder::InputHandler* const);
   bool setSlotOutputHandler(mixr::recorder::OutputHandler* const);
>>>>>>> d91383e8
};

#endif
