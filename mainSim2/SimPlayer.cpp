
#include "SimPlayer.hpp"
<<<<<<< HEAD
=======
#include "mixr/base/List.hpp"
#include "mixr/base/units/Angles.hpp"
>>>>>>> d91383e8

IMPLEMENT_SUBCLASS(SimPlayer, "SimPlayer")
EMPTY_DELETEDATA(SimPlayer)
EMPTY_COPYDATA(SimPlayer)
EMPTY_SLOTTABLE(SimPlayer)

SimPlayer::SimPlayer()
{
    STANDARD_CONSTRUCTOR()

    static mixr::base::String generic("Sim");
<<<<<<< HEAD
    setType_old(&generic);
=======
    setType(&generic);
>>>>>>> d91383e8
}

void SimPlayer::reset()
{
    BaseClass::reset();
}

