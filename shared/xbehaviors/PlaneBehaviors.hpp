//------------------------------------------------------------------------------
// Classes: PlaneBehaviorBase
//          PlaneBehaviorBase -> PlaneFire
//          PlaneBehaviorBase -> PlaneFlyStraight
//          PlaneBehaviorBase -> PlaneFollowEnemy
//          PlaneBehaviorBase -> PlaneTurn
//          PlaneBehaviorBase -> PlaneSlowTurn
//          PlaneBehaviorBase -> PlaneClimb
//          PlaneBehaviorBase -> PlaneDive
//          PlaneBehaviorBase -> PlaneTrim
//          PlaneBehaviorBase -> PlaneRoll
//          PlaneBehaviorBase -> PlaneBarrelRoll
//          PlaneBehaviorBase -> PlaneLoop
//------------------------------------------------------------------------------
<<<<<<< HEAD
#ifndef __mixr_xbehaviors_PlaneBehaviors_HPP__
#define __mixr_xbehaviors_PlaneBehaviors_HPP__

#include "mixr/base/ubf/IBehavior.hpp"

namespace mixr {
namespace base { class Integer; class ILength; class State; }
namespace base {
namespace ubf { class IState; class IAction; }
=======
#ifndef __mixr_xbehaviors_PlaneBehaviors_H__
#define __mixr_xbehaviors_PlaneBehaviors_H__

#include "mixr/base/ubf/AbstractBehavior.hpp"

namespace mixr {
namespace base { class Distance; class State; }
namespace base {
namespace ubf { class AbstractState; class AbstractAction; }
>>>>>>> d91383e8
}
namespace xbehaviors {

//------------------------------------------------------------------------------
// Class: PlaneBehavior
<<<<<<< HEAD
// Description: Base class for concrete plane behaviors
//------------------------------------------------------------------------------
class PlaneBehavior : public base::ubf::IBehavior
{
  DECLARE_SUBCLASS(PlaneBehavior, base::ubf::IBehavior)
=======
// Description: Abstract base class for concrete plane behaviors
//------------------------------------------------------------------------------
class PlaneBehavior : public base::ubf::AbstractBehavior
{
  DECLARE_SUBCLASS(PlaneBehavior, base::ubf::AbstractBehavior)
>>>>>>> d91383e8

public:
   PlaneBehavior();

protected:
   int voteOnIncomingMissile{};
   int voteOnCriticalAltitude{};
   double criticalAltitude{3500.0};

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotCriticalAltitude(const base::ILength* const);
   bool setSlotVoteOnCriticalAltitude(const base::Integer* const);
   bool setSlotVoteOnIncomingMissile(const base::Integer* const);
=======
   bool setSlotCriticalAltitude(const base::Distance* const);
   bool setSlotVoteOnCriticalAltitude(const base::Number* const);
   bool setSlotVoteOnIncomingMissile(const base::Number* const);
>>>>>>> d91383e8
};

//------------------------------------------------------------------------------
// Class: PlaneFire
//
// Description: Behavior class that shoots missiles at enemy planes
//------------------------------------------------------------------------------
class PlaneFire final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneFire, PlaneBehavior)

public:
   PlaneFire();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8

private:
   double maxDistance{15500.0};

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotMaxDistance(const base::ILength* const);
=======
   bool setSlotMaxDistance(const base::Distance* const);
>>>>>>> d91383e8
};

class PlaneFlyStraight final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneFlyStraight, PlaneBehavior)

public:
   PlaneFlyStraight();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8

private:
   double holdingAltitude{4500.0};
};

class PlaneFollowEnemy final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneFollowEnemy, PlaneBehavior)

public:
   PlaneFollowEnemy();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8
};

class PlaneTurn final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneTurn, PlaneBehavior)

public:
   PlaneTurn();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8
};

class PlaneSlowTurn final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneSlowTurn, PlaneBehavior)

public:
   PlaneSlowTurn();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8
};

class PlaneClimb final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneClimb, PlaneBehavior)

public:
   PlaneClimb();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8
};

class PlaneDive final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneDive, PlaneBehavior)

public:
   PlaneDive();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8
};

class PlaneTrim final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneTrim, PlaneBehavior)

public:
   PlaneTrim();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8

private:
   double holdingAltitude{4500.0};
   int count{};
};

class PlaneRoll final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneRoll, PlaneBehavior)

public:
   PlaneRoll();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8
};

class PlaneBarrelRoll final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneBarrelRoll, PlaneBehavior)

public:
   PlaneBarrelRoll();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8
};

class PlaneLoop final: public PlaneBehavior
{
   DECLARE_SUBCLASS(PlaneLoop, PlaneBehavior)

public:
   PlaneLoop();
<<<<<<< HEAD
   base::ubf::IAction* genAction(const base::ubf::IState* const state, const double dt) final;
=======
   base::ubf::AbstractAction* genAction(const base::ubf::AbstractState* const state, const double dt) final;
>>>>>>> d91383e8

private:
   bool keepGoing{};
};

}
}

#endif
