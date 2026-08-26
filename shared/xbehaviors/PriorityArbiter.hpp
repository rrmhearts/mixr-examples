
<<<<<<< HEAD
#ifndef __mixr_xbehaviors_PriorityArbiter_HPP__
#define __mixr_xbehaviors_PriorityArbiter_HPP__
=======
#ifndef __mixr_xbehaviors_PriorityArbiter_H__
#define __mixr_xbehaviors_PriorityArbiter_H__
>>>>>>> d91383e8

#include "mixr/base/ubf/Arbiter.hpp"

namespace mixr {
<<<<<<< HEAD
namespace base { class IList; class IAction; }
=======
namespace base { class List; class AbstractAction; }
>>>>>>> d91383e8
namespace xbehaviors {

//------------------------------------------------------------------------------
// Class: PriorityArbiter
//------------------------------------------------------------------------------
class PriorityArbiter final: public base::ubf::Arbiter
{
   DECLARE_SUBCLASS(PriorityArbiter, base::ubf::Arbiter)

public:
   PriorityArbiter();

<<<<<<< HEAD
   base::ubf::IAction* genComplexAction(base::IList* const actionSet) final;
=======
   base::ubf::AbstractAction* genComplexAction(base::List* const actionSet) final;
>>>>>>> d91383e8

private:

   // Trim change might not be valid if the plane is in the middle of a maneuver
   // and the change would go against the intended control stick action.  If so,
   // invalidate the trim change.
   // Returns nothing, but modifies what the action object points to
<<<<<<< HEAD
   void trimChangeValidation(base::ubf::IAction* const);
=======
   void trimChangeValidation(base::ubf::AbstractAction* const);
>>>>>>> d91383e8
};

}
}

#endif
