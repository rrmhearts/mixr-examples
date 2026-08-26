
#include "factory.hpp"

<<<<<<< HEAD
#include "mixr/base/IObject.hpp"
=======
#include "mixr/base/Object.hpp"
>>>>>>> d91383e8

#include "DataRecordTest.hpp"
#include "PrintMyData.hpp"

#include "mixr/base/factory.hpp"
<<<<<<< HEAD
#include "mixr/recorder/protobuf_v2/factory.hpp"
#include "mixr/simulation/factory.hpp"
#include "mixr/models/factory.hpp"
#include "mixr/models/dynamics/jsbsim/factory.hpp"

#include <string>

mixr::base::IObject* factory(const std::string& name)
{
    mixr::base::IObject* obj {};
=======
#include "mixr/recorder/factory.hpp"
#include "mixr/simulation/factory.hpp"
#include "mixr/models/factory.hpp"

#include <string>

mixr::base::Object* factory(const std::string& name)
{
    mixr::base::Object* obj {};
>>>>>>> d91383e8

    if ( name == DataRecordTest::getFactoryName() ) {
        obj = new DataRecordTest();
    }
    else if ( name == PrintMyData::getFactoryName() ) {
        obj = new PrintMyData();
    }
    else {
        if (obj == nullptr) obj = mixr::simulation::factory(name);
        if (obj == nullptr) obj = mixr::models::factory(name);
<<<<<<< HEAD
        if (obj == nullptr) obj = mixr::models::jsbsim::factory(name);
        if (obj == nullptr) obj = mixr::base::factory(name);
        if (obj == nullptr) obj = mixr::recorder::protobuf_v2::factory(name);
=======
        if (obj == nullptr) obj = mixr::base::factory(name);
        if (obj == nullptr) obj = mixr::recorder::factory(name);
>>>>>>> d91383e8
    }

    return obj;
}
