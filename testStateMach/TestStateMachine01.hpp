
<<<<<<< HEAD
#ifndef __TestStateMachine01_HPP__
#define __TestStateMachine01_HPP__

#include "mixr/base/IStateMachine.hpp"
=======
#ifndef __TestStateMachine01_H__
#define __TestStateMachine01_H__

#include "mixr/base/StateMachine.hpp"
>>>>>>> d91383e8

//------------------------------------------------------------------------------
// Class: TestStateMachine01
// Description: State Machine Test #1 --
//
//    Tests the standard state transition functions (e.g., next(), goTo(), call(),
//    and rtn()), as well as arguments passed and returned.   There's one common
//    state function that's using the standard 'switch' and 'case' statements to
//    select each state's specific code.
//
//------------------------------------------------------------------------------
<<<<<<< HEAD
class TestStateMachine01 final: public mixr::base::IStateMachine
{
   DECLARE_SUBCLASS(TestStateMachine01, mixr::base::IStateMachine)
=======
class TestStateMachine01 final: public mixr::base::StateMachine
{
   DECLARE_SUBCLASS(TestStateMachine01, mixr::base::StateMachine)
>>>>>>> d91383e8

public:
   enum { CALL_01 = 11, CALL_02 = 22 };

public:
   TestStateMachine01();

protected:
   void preStateProc(const double dt) final;
   void postStateProc(const double dt) final;
   unsigned short stateTable(
         const unsigned short cstate,
         const StateTableCode code,
         const double dt=0
      ) final;

private:
   // state specific functions
   void anyStateFunc(const double dt);
};

#endif
