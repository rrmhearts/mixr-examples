
include ../makedefs

PGM = mainNonRT1

OBJS = main.o

<<<<<<< HEAD
EDLS  = test1.edl
EDLS += test2.edl

LDFLAGS += -lmixr_models_jsbsim -lmixr_models -lJSBSim
LDFLAGS += -lmixr_simulation
=======
LDFLAGS += -lmixr_models -lmixr_simulation -lJSBSim
>>>>>>> d91383e8
LDFLAGS += -lmixr_instruments -lmixr_terrain
LDFLAGS += -lmixr_base
LDFLAGS += -lrt -lX11
#LDFLAGS += -lXi -lXmu
LDFLAGS += -lpthread

CPPFLAGS += -I/usr/local/include

<<<<<<< HEAD
all: $(EDLS) $(PGM)

run: all
	./$(PGM) -f test1.edl
	./$(PGM) -f test2.edl

$(EDLS):
	cpp configs/$(basename $@).epp > $@ $(EPPFLAGS)
=======
all: edl $(PGM)

edl:
	cpp configs/test1.epp >test1.edl   $(EPPFLAGS)
	cpp configs/test2.epp >test2.edl   $(EPPFLAGS)
>>>>>>> d91383e8

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
