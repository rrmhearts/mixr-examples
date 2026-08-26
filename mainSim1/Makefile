
include ../makedefs

PGM = mainSim1

OBJS = main.o

<<<<<<< HEAD
EDLS = test0.edl
EDLS += test1.edl
EDLS += test2.edl
EDLS += test3.edl
EDLS += test4.edl

LDFLAGS += -lxzmq -l:libzmq.a
LDFLAGS += -lmixr_interop_dis -lmixr_interop
LDFLAGS += -lmixr_ighost_cigi -lmixr_ighost_flightgear
LDFLAGS += -lmixr_models_jsbsim -lmixr_models -lJSBSim
LDFLAGS += -lmixr_simulation
LDFLAGS += -lmixr_terrain -lmixr_base
LDFLAGS += -lcigicl
=======
LDFLAGS += -lxzmq -l:libzmq.a
LDFLAGS += -lmixr_interop_dis -lmixr_interop
LDFLAGS += -lmixr_ighost_cigi -lmixr_ighost_pov
LDFLAGS += -lmixr_models -lmixr_simulation
LDFLAGS += -lmixr_terrain -lmixr_base
LDFLAGS += -lcigicl -lJSBSim
>>>>>>> d91383e8
LDFLAGS += -lrt -lpthread

CPPFLAGS += -I/usr/local/include

EPPFLAGS +=  -I.

<<<<<<< HEAD
all: $(EDLS) $(PGM)

run: all
	echo "mainSim1 -f test0.edl"
	./$(PGM) -f test0.edl
	echo "mainSim1 -f test1.edl"
	./$(PGM) -f test1.edl
	echo "mainSim1 -f test2.edl"
	./$(PGM) -f test2.edl
	echo "mainSim1 -f test3.edl"
	./$(PGM) -f test3.edl
	echo "mainSim1 -f test4.edl"
	./$(PGM) -f test4.edl

$(EDLS):
	cpp configs/$(basename $@).epp > $@ $(EPPFLAGS)
=======
all: edl $(PGM)

edl:
	cpp configs/test0.epp > test0.edl $(EPPFLAGS)
	cpp configs/test1.epp > test1.edl $(EPPFLAGS)
	cpp configs/test2.epp > test2.edl $(EPPFLAGS)
	cpp configs/test3.epp > test3.edl $(EPPFLAGS)
	cpp configs/test4.epp > test4.edl $(EPPFLAGS)
>>>>>>> d91383e8

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
