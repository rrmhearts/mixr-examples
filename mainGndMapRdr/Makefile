#
include ../makedefs

PGM = mainGndMapRdr
OBJS = Display.o factory.o main.o RealBeamRadar.o TestStation.o

<<<<<<< HEAD
LDFLAGS += -lmixr_models_jsbsim -lmixr_models -lJSBSim
=======
LDFLAGS += -lmixr_models -lJSBSim
>>>>>>> d91383e8
LDFLAGS += -lmixr_terrain -lmixr_simulation
LDFLAGS += -lmixr_ui_glut -lmixr_graphics
LDFLAGS += -lmixr_base
LDFLAGS += -lftgl -lfreetype -lglut -lGLU -lGL -lX11 -lpthread
#LDFLAGS += -lXi -lXmu
LDFLAGS += -lrt

all: edl $(PGM)

edl:
	cpp configs/test.epp >test.edl $(EPPFLAGS)

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
