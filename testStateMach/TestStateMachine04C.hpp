
<<<<<<< HEAD
#ifndef __TestStateMachine04C_HPP__
#define __TestStateMachine04C_HPP__

#include "mixr/base/IStateMachine.hpp"
=======
#ifndef __TestStateMachine04C_H__
#define __TestStateMachine04C_H__

#include "mixr/base/StateMachine.hpp"
>>>>>>> d91383e8

//------------------------------------------------------------------------------
// Class: TestStateMachine04C
//
//------------------------------------------------------------------------------
<<<<<<< HEAD
class TestStateMachine04C final: public mixr::base::IStateMachine
{
   DECLARE_SUBCLASS(TestStateMachine04C, mixr::base::IStateMachine)
=======
class TestStateMachine04C final: public mixr::base::StateMachine
{
   DECLARE_SUBCLASS(TestStateMachine04C, mixr::base::StateMachine)
>>>>>>> d91383e8

public:
   TestStateMachine04C();

protected:
   void preStateProc(const double dt) final;
   unsigned short stateTable(
         const unsigned short cstate,
         const StateTableCode code,
         const double dt=0
      ) final;

private:
   // State specific functions
   void stateFunc00(const double dt);
};

#endif
