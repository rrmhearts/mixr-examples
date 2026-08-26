
#include "factory.hpp"

<<<<<<< HEAD
#include "mixr/base/IObject.hpp"
=======
#include "mixr/base/Object.hpp"
>>>>>>> d91383e8

#include "Display.hpp"
#include "RealBeamRadar.hpp"
#include "TestStation.hpp"

// factories
#include "mixr/simulation/factory.hpp"
#include "mixr/models/factory.hpp"
<<<<<<< HEAD
#include "mixr/models/dynamics/jsbsim/factory.hpp"
=======
>>>>>>> d91383e8
#include "mixr/terrain/factory.hpp"
#include "mixr/graphics/factory.hpp"
#include "mixr/ui/glut/factory.hpp"
#include "mixr/base/factory.hpp"

#include <string>

<<<<<<< HEAD
mixr::base::IObject* factory(const std::string& name)
{
    mixr::base::IObject* obj{};
=======
mixr::base::Object* factory(const std::string& name)
{
    mixr::base::Object* obj{};
>>>>>>> d91383e8

    if ( name == Display::getFactoryName() ) {
        obj = new Display();
    }
    else if ( name == RealBeamRadar::getFactoryName() ) {
        obj = new RealBeamRadar();
    }
    else if ( name == TestStation::getFactoryName() ) {
        obj = new TestStation();
    }

    if (obj == nullptr) obj = mixr::simulation::factory(name);
    if (obj == nullptr) obj = mixr::models::factory(name);
<<<<<<< HEAD
    if (obj == nullptr) obj = mixr::models::jsbsim::factory(name);
=======
>>>>>>> d91383e8
    if (obj == nullptr) obj = mixr::terrain::factory(name);
    if (obj == nullptr) obj = mixr::graphics::factory(name);
    if (obj == nullptr) obj = mixr::glut::factory(name);
    if (obj == nullptr) obj = mixr::base::factory(name);

    return obj;
}
