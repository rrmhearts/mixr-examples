#
include ../makedefs

PGM = demoEfis

OBJS = TestElectronic.o TestMechanical.o main.o

<<<<<<< HEAD
LDFLAGS += -lmixr_ui_glut -lmixr_instruments -lmixr_graphics -lmixr_graphics_ftgl -lmixr_base
=======
LDFLAGS += -lmixr_ui_glut -lmixr_instruments -lmixr_graphics -lmixr_base
>>>>>>> d91383e8
LDFLAGS += -lftgl -lfreetype -lglut -lGLU -lGL -lX11 -lpthread
#LDFLAGS += -lXi -lXmu
LDFLAGS += -lrt

<<<<<<< HEAD
all: edl $(PGM)

run: all
	./$(PGM) -f glutdisplay.edl
=======
all: edl $(PGM) 
>>>>>>> d91383e8

edl:
	cpp configs/glutdisplay.epp > glutdisplay.edl   $(EPPFLAGS)

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
