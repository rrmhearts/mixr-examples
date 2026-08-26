
#include "factory.hpp"

<<<<<<< HEAD
#include "mixr/base/IObject.hpp"
=======
#include "mixr/base/Object.hpp"
>>>>>>> d91383e8

#include "ZeroMQContext.hpp"
#include "ZeroMQHandler.hpp"

#include <string>

namespace mixr {
namespace xzmq {

<<<<<<< HEAD
base::IObject* factory(const std::string& name)
{
    base::IObject* obj{};
=======
base::Object* factory(const std::string& name)
{
    base::Object* obj{};
>>>>>>> d91383e8

    if ( name == ZeroMQContext::getFactoryName() ) {
        obj = new ZeroMQContext;
    }
    else if ( name == ZeroMQHandler::getFactoryName() ) {
        obj = new ZeroMQHandler;
    }

    return obj;
}

}
}

