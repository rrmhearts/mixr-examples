
#include "TestObject.hpp"

#include "mixr/base/util/str_utils.hpp"

<<<<<<< HEAD
IMPLEMENT_SUBCLASS(TestObject, "TestObject")
EMPTY_SLOTTABLE(TestObject);
EMPTY_DELETEDATA(TestObject)

=======
using namespace mixr;

IMPLEMENT_EMPTY_SLOTTABLE_SUBCLASS(TestObject, "TestObject")
EMPTY_DELETEDATA(TestObject)

TestObject::TestObject()
{
    STANDARD_CONSTRUCTOR()
}

>>>>>>> d91383e8
void TestObject::copyData(const TestObject& org, const bool)
{
    BaseClass::copyData(org);

    boolVal = org.boolVal;
    intVal = org.intVal;
    floatVal = org.floatVal;
    doubleVal = org.doubleVal;
<<<<<<< HEAD
=======
    realVal = org.realVal;
>>>>>>> d91383e8
    charVal = org.charVal;
}
