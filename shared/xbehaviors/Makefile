#
include ../../makedefs

<<<<<<< HEAD
LIB = $(MIXR_SHARED_LIB_PATH)/libxbehaviors.a
=======
LIB = $(MIXR_EXAMPLES_LIB_PATH)/libxbehaviors.a
>>>>>>> d91383e8

OBJS += \
	factory.o \
	PlaneAction.o \
	PlaneBehaviors.o \
	PriorityArbiter.o \
	PlaneState.o

.PHONY: all clean

all: $(LIB)

$(LIB) : $(OBJS)
	ar rs $@ $(OBJS)

clean:
	-rm -f *.o
	-rm -f $(LIB)
