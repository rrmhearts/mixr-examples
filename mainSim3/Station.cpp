
#include "Station.hpp"

<<<<<<< HEAD
#include "mixr/ui/glut/IGlutDisplay.hpp"

IMPLEMENT_SUBCLASS(Station, "MapTestStation")
EMPTY_DELETEDATA(Station)
=======
#include "mixr/ui/glut/GlutDisplay.hpp"

IMPLEMENT_SUBCLASS(Station, "MapTestStation")
>>>>>>> d91383e8

BEGIN_SLOTTABLE(Station)
    "display",          // 1) sets our display
END_SLOTTABLE(Station)

BEGIN_SLOT_MAP(Station)
<<<<<<< HEAD
    ON_SLOT(1, setSlotDisplay, mixr::glut::IGlutDisplay)
=======
    ON_SLOT(1, setSlotDisplay, mixr::glut::GlutDisplay)
>>>>>>> d91383e8
END_SLOT_MAP()

Station::Station()
{
    STANDARD_CONSTRUCTOR()
}

void Station::copyData(const Station& org, const bool)
{
    BaseClass::copyData(org);

<<<<<<< HEAD
    display = org.display->clone();
=======
    if (display != nullptr) {
        display->unref();
        display = nullptr;
    }

    if (org.display != nullptr) {
        display = org.display;
        display->ref();
    }

>>>>>>> d91383e8
    displayInit = org.displayInit;
}

//------------------------------------------------------------------------------
<<<<<<< HEAD
=======
// deleteData() -- delete member data
//------------------------------------------------------------------------------
void Station::deleteData()
{
    if (display != nullptr) {
        display->unref();
        display = nullptr;
    }
}

//------------------------------------------------------------------------------
>>>>>>> d91383e8
// reset() - this is our reset event, which will be called from the mainline
// by sending the base::Component::RESET_EVENT token.  Here we will set up
// our display
//------------------------------------------------------------------------------
void Station::reset()
{
    if (display != nullptr && !displayInit) {
        display->createWindow();
        display->focus(display);
        displayInit = true;
    }

<<<<<<< HEAD
    // this calls our Baseclass (simulation::IStation -> reset)
=======
    // this calls our Baseclass (simulation::Station -> reset)
>>>>>>> d91383e8
    BaseClass::reset();
}


//------------------------------------------------------------------------------
// setSlotDisplay() - sets our display
//------------------------------------------------------------------------------
<<<<<<< HEAD
bool Station::setSlotDisplay(mixr::glut::IGlutDisplay* x)
{
    bool ok{};
    if (x != nullptr) {
        display = x;
=======
bool Station::setSlotDisplay(mixr::glut::GlutDisplay* dis)
{
    bool ok{};
    // clear out our old display first
    if (display != nullptr) {
        display->unref();
        display = nullptr;
    }

    if (dis != nullptr) {
        display = dis;
        display->ref();
>>>>>>> d91383e8
        display->container(this);
        ok = true;
    }

    return ok;
}

