#
include ../../makedefs

<<<<<<< HEAD
LIB = $(MIXR_SHARED_LIB_PATH)/libxzmq.a
=======
LIB = $(MIXR_EXAMPLES_LIB_PATH)/libxzmq.a
>>>>>>> d91383e8

OBJS += \
	factory.o \
	ZeroMQContext.o \
	ZeroMQHandler.o

.PHONY: all clean

all: $(LIB)

$(LIB) : $(OBJS)
	ar rs $@ $(OBJS)

clean:
	-rm -f *.o
	-rm -f $(LIB)
	-rm -f *~
