
#include "factory.hpp"

<<<<<<< HEAD
#include "mixr/base/IObject.hpp"
=======
#include "mixr/base/Object.hpp"
>>>>>>> d91383e8

#include "DspRadar.hpp"
#include "DspRwr.hpp"
#include "Hsi.hpp"
#include "TdAzPtr.hpp"
#include "TdElevPtr.hpp"
#include "Pfd.hpp"
#include "SpdLines.hpp"
#include <string>

namespace mixr {
namespace xpanel {

<<<<<<< HEAD
base::IObject* factory(const std::string& name)
{
    base::IObject* obj{};
=======
base::Object* factory(const std::string& name)
{
    base::Object* obj{};
>>>>>>> d91383e8

    if ( name == DspRadar::getFactoryName() ) {
        obj = new DspRadar();
    }
    else if ( name == DspRwr::getFactoryName() ) {
        obj = new DspRwr();
    }
    else if ( name == TdAzPtr::getFactoryName() ) {
        obj = new TdAzPtr();
    }
    else if ( name == TdElevPtr::getFactoryName() ) {
        obj = new TdElevPtr();
    }

    // Pfd/Hsi
    else if ( name == Pfd::getFactoryName() ) {
        obj = new Pfd();
    }
    else if ( name == Hsi::getFactoryName() ) {
        obj = new Hsi();
    }
    else if ( name == SpdLines::getFactoryName() ) {
        obj = new SpdLines();
    }

    return obj;
}

}
}
