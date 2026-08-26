#
include ../makedefs

PGM = demoFlightDisplays2

OBJS =  \
	main.o \
	Pfd.o \
	SpdLines.o \
	TestPfd.o

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

=======
>>>>>>> d91383e8
edl:
	cpp configs/test.epp >test.edl $(EPPFLAGS)

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
