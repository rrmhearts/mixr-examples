#
include ../makedefs

PGM = demoFlightDisplays1

OBJS =  \
	CrsPntr.o \
	Hsi.o \
	main.o \
	Pfd.o \
	RdrAlt.o \
	SituationalDisplay.o \
	SpdLines.o \
	TerrainFollower.o \
	TestPfd.o \
	TestSD.o

<<<<<<< HEAD
LDFLAGS += -lmixr_ui_glut -lmixr_instruments -lmixr_graphics -lmixr_graphics_ftgl -lmixr_base
=======
LDFLAGS += -lmixr_ui_glut -lmixr_instruments -lmixr_graphics -lmixr_base
>>>>>>> d91383e8
LDFLAGS += -lftgl -lfreetype -lglut -lGLU -lGL -lX11 -lpthread
#LDFLAGS += -lXi -lXmu
LDFLAGS += -lrt

all: edl $(PGM)

<<<<<<< HEAD
run: all
	./$(PGM) -f test.edl

edl:
	cpp configs/test.epp > test.edl $(EPPFLAGS)
=======
edl:
	cpp configs/test.epp >test.edl $(EPPFLAGS)
>>>>>>> d91383e8

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
