
#include "factory.hpp"

<<<<<<< HEAD
#include "mixr/base/IObject.hpp"

#include "XDataRecorder.hpp"
=======
#include "mixr/base/Object.hpp"

#include "DataRecorder.hpp"
>>>>>>> d91383e8

#include <string>

namespace mixr {
namespace xrecorder {

<<<<<<< HEAD
base::IObject* factory(const std::string& name)
{
    base::IObject* obj{};

   if ( name == XDataRecorder::getFactoryName() ) {
      obj = new XDataRecorder();
=======
base::Object* factory(const std::string& name)
{
    base::Object* obj{};

   if ( name == DataRecorder::getFactoryName() ) {
      obj = new DataRecorder();
>>>>>>> d91383e8
   }

    return obj;
}

}
}
