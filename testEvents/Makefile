#
include ../makedefs

PGM = testEvents

<<<<<<< HEAD
OBJS = EventDisplay.o ObjectHandler.o TestObject.o main.o

LDFLAGS += -lmixr_instruments -lmixr_ui_glut
LDFLAGS += -lmixr_graphics -lmixr_graphics_ftgl -lmixr_base
=======
OBJS = Display.o ObjectHandler.o TestObject.o main.o

LDFLAGS += -lmixr_instruments -lmixr_ui_glut -lmixr_graphics -lmixr_base
>>>>>>> d91383e8
LDFLAGS += -lftgl -lfreetype -lglut -lGLU -lGL -lX11 -lpthread
#LDFLAGS += -lXi -lXmu
LDFLAGS += -lrt

all: edl $(PGM)

edl:
<<<<<<< HEAD
	cpp configs/testEvents.epp > testEvents.edl   $(EPPFLAGS)
=======
	cpp configs/test.epp >test.edl   $(EPPFLAGS)
>>>>>>> d91383e8

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
