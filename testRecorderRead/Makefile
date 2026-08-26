include ../makedefs

PGM = testRecorderRead

OBJS = main.o DataRecordTest.o factory.o PrintMyData.o

<<<<<<< HEAD
LDFLAGS += -lmixr_models_jsbsim -lmixr_models -lJSBSim
LDFLAGS += -lxrecorder
LDFLAGS += -lmixr_recorder_protobuf_v2 -lmixr_simulation
=======
LDFLAGS += -lmixr_models -lJSBSim
LDFLAGS += -lxrecorder
LDFLAGS += -lmixr_recorder -lmixr_simulation
>>>>>>> d91383e8
LDFLAGS += -lmixr_terrain -lmixr_base
LDFLAGS += -lprotobuf
LDFLAGS += -lrt -lpthread

CPPFLAGS += -I/usr/local/include

EPPFLAGS +=  -I.

all: edl $(PGM)

edl:
	cpp configs/test.epp >test.edl   $(EPPFLAGS)

$(PGM): $(OBJS)
<<<<<<< HEAD
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)
=======
	$(CXX) -o $@ $(OBJS) $(LDFLAGS) 
>>>>>>> d91383e8

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
