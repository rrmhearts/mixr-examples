#
include ../makedefs

PGM = mainCockpit

<<<<<<< HEAD
EDLS  = test1.edl

=======
>>>>>>> d91383e8
OBJS  = SimStation.o TestDisplay.o
OBJS += TestIoHandler.o
OBJS += factory.o main.o

LDFLAGS += -lmixr_interop_dis -lmixr_interop
<<<<<<< HEAD
LDFLAGS += -lxzmq -l:libzmq.a
LDFLAGS += -lxpanel
LDFLAGS += -lmixr_models_jsbsim -lmixr_models -lJSBSim
LDFLAGS += -lmixr_simulation -lmixr_instruments
LDFLAGS += -lmixr_linkage
LDFLAGS += -lmixr_ighost_cigi -l:libcigicl.a -lmixr_ighost_flightgear -lmixr_ighost_pov
LDFLAGS += -lmixr_terrain
LDFLAGS += -lmixr_ui_glut -lmixr_graphics -lmixr_graphics_ftgl -lmixr_base
LDFLAGS += -lprotobuf
=======
LDFLAGS += -lmixr_models -lJSBSim
LDFLAGS += -lxzmq -l:libzmq.a
LDFLAGS += -lxpanel
LDFLAGS += -lmixr_recorder -lmixr_models
LDFLAGS += -lmixr_simulation -lmixr_instruments
LDFLAGS += -lmixr_linkage
LDFLAGS += -lmixr_ighost_cigi -lmixr_ighost_pov
LDFLAGS += -lmixr_terrain
LDFLAGS += -lmixr_ui_glut -lmixr_graphics -lmixr_base
LDFLAGS += -lprotobuf -lJSBSim
>>>>>>> d91383e8
LDFLAGS += -lftgl -lfreetype -lcigicl
LDFLAGS += -lglut -lGLU -lGL -lX11
LDFLAGS += -lpthread -lrt

CPPFLAGS += -I/usr/local/include

EPPFLAGS += -I.

<<<<<<< HEAD
all: $(EDLS) $(PGM)

run: all
	./$(PGM) -f test1.edl
=======
all: edl $(PGM)
>>>>>>> d91383e8

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

<<<<<<< HEAD
$(EDLS):
	cpp configs/$(basename $@).epp > $@ $(EPPFLAGS)
=======
edl:
	cpp configs/test1.epp >test1.edl $(EPPFLAGS)
>>>>>>> d91383e8

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
