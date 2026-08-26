
#include "factory.hpp"

<<<<<<< HEAD
#include "mixr/base/IObject.hpp"
=======
#include "mixr/base/Object.hpp"
>>>>>>> d91383e8

#include "Display.hpp"

#include "mixr/terrain/factory.hpp"
#include "mixr/graphics/factory.hpp"
#include "mixr/ui/glut/factory.hpp"
#include "mixr/base/factory.hpp"

#include <string>

<<<<<<< HEAD
mixr::base::IObject* factory(const std::string& name)
{
    mixr::base::IObject* obj {};
=======
mixr::base::Object* factory(const std::string& name)
{
    mixr::base::Object* obj {};
>>>>>>> d91383e8

    if ( name == Display::getFactoryName() ) {
        obj = new Display();
    }

    if (obj == nullptr) obj = mixr::terrain::factory(name);
    if (obj == nullptr) obj = mixr::graphics::factory(name);
    if (obj == nullptr) obj = mixr::glut::factory(name);
    if (obj == nullptr) obj = mixr::base::factory(name);

    return obj;
}
