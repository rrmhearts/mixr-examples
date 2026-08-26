
#ifndef __Station_H__
#define __Station_H__

<<<<<<< HEAD
#include "mixr/simulation/IStation.hpp"
=======
#include "mixr/simulation/Station.hpp"
>>>>>>> d91383e8

class StnTimerObject;

//------------------------------------------------------------
// Class: StnTimerObject
// Description: create our window and startup any timers needed
//------------------------------------------------------------
<<<<<<< HEAD
class Station : public mixr::simulation::IStation
{
   DECLARE_SUBCLASS(Station, mixr::simulation::IStation)
=======
class Station : public mixr::simulation::Station
{
   DECLARE_SUBCLASS(Station, mixr::simulation::Station)
>>>>>>> d91383e8
public:
   Station();

   // create our top level windows
   virtual int createWindow(int argc, char *argv[]);

private:
   StnTimerObject* timerObj {};
};

#endif
