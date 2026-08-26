#
include ../../makedefs

<<<<<<< HEAD
LIB = $(MIXR_SHARED_LIB_PATH)/libxpanel.a
=======
LIB = $(MIXR_EXAMPLES_LIB_PATH)/libxpanel.a
>>>>>>> d91383e8

OBJS += \
	DspRadar.o \
	DspRwr.o \
	factory.o \
	Hsi.o \
	Pfd.o \
	SpdLines.o \
	TdAzPtr.o \
	TdElevPtr.o

.PHONY: all clean

all: $(LIB)

$(LIB) : $(OBJS)
	ar rs $@ $(OBJS)

clean:
	-rm -f *.o
	-rm -f $(LIB)
