
<<<<<<< HEAD
#ifndef __SimPlayer_HPP__
#define __SimPlayer_HPP__

#include "mixr/models/player/air/IAircraft.hpp"
=======
#ifndef __SimPlayer_H__
#define __SimPlayer_H__

#include "mixr/models/player/air/Aircraft.hpp"
>>>>>>> d91383e8

//------------------------------------------------------------------------------
// Class: SimPlayer
//
// Description: Simulation player
//------------------------------------------------------------------------------
<<<<<<< HEAD
class SimPlayer final: public mixr::models::IAircraft
{
    DECLARE_SUBCLASS(SimPlayer, mixr::models::IAircraft)
=======
class SimPlayer final: public mixr::models::Aircraft
{
    DECLARE_SUBCLASS(SimPlayer, mixr::models::Aircraft)
>>>>>>> d91383e8

public:
    SimPlayer();

    void reset() final;
};

#endif
