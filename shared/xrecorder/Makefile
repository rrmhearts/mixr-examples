#
include ../../makedefs

<<<<<<< HEAD
LIB = $(MIXR_SHARED_LIB_PATH)/libxrecorder.a

OBJS += \
	proto/DataRecord.pb.o \
	XDataRecorder.o \
=======
LIB = $(MIXR_EXAMPLES_LIB_PATH)/libxrecorder.a

OBJS += \
	protobuf/DataRecord.pb.o \
	DataRecorder.o \
>>>>>>> d91383e8
	factory.o

.PHONY: all clean

all: $(LIB)

$(LIB) : $(OBJS)
	ar rs $@ $(OBJS)

clean:
<<<<<<< HEAD
	-rm -f proto/*.o
=======
	-rm -f protobuf/*.o
>>>>>>> d91383e8
	-rm -f *.o
	-rm -f $(LIB)
