#
include ../makedefs

PGM = mainLaero

<<<<<<< HEAD
EDLS = test.edl

=======
>>>>>>> d91383e8
OBJS =  \
	main.o \
	AdiDisplay.o \
	factory.o \
	MapDisplay.o \
	MapPage.o \
	TestStation.o

<<<<<<< HEAD
LDFLAGS += -lmixr_interop_dis -lmixr_interop -lmixr_ighost_flightgear -lmixr_ighost_pov
LDFLAGS += -lmixr_simulation -lmixr_terrain
LDFLAGS += -lmixr_models_jsbsim -lmixr_models -lJSBSim
LDFLAGS += -lxzmq -l:libzmq.a
LDFLAGS += -lmixr_ui_glut -lmixr_instruments -lmixr_graphics -lmixr_graphics_ftgl -lmixr_base
LDFLAGS += -lftgl -lfreetype -lglut -lGLU -lGL -lX11 -lpthread
LDFLAGS += -lrt

all: $(EDLS) $(PGM)

run: all
	./$(PGM) -f test.edl

$(EDLS):
	cpp configs/$(basename $@).epp > $@ $(EPPFLAGS)
=======
LDFLAGS += -lmixr_interop_dis -lmixr_interop
LDFLAGS += -lmixr_models -lJSBSim
LDFLAGS += -lxzmq -l:libzmq.a
LDFLAGS += -lmixr_simulation -lmixr_models -lmixr_terrain
LDFLAGS += -lmixr_ui_glut -lmixr_instruments -lmixr_graphics -lmixr_base
LDFLAGS += -lftgl -lfreetype -lglut -lGLU -lGL -lX11 -lpthread
LDFLAGS += -lrt

all: edl $(PGM)

edl:
	cpp configs/test.epp >test.edl $(EPPFLAGS)
>>>>>>> d91383e8

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
