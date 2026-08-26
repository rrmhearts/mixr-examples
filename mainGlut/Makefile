#
include ../makedefs

PGM = mainGlut

OBJS = main.o

<<<<<<< HEAD
EDLS = alignmentPattern.edl
EDLS += textDisplay.edl

LDFLAGS += -lmixr_ui_glut -lmixr_graphics_ftgl -lmixr_graphics -lmixr_base
=======
LDFLAGS += -lmixr_ui_glut -lmixr_graphics -lmixr_base
>>>>>>> d91383e8
LDFLAGS += -lftgl -lfreetype -lglut -lGLU -lGL -lX11 -lpthread
#LDFLAGS += -lXi -lXmu
LDFLAGS += -lrt

<<<<<<< HEAD
all: $(EDLS) $(PGM)

run: all
	echo "mainGlut -f alignmentPattern.edl"
	./$(PGM) -f alignmentPattern.edl
	echo "mainGlut -f textDisplay.edl"
	./$(PGM) -f textDisplay.edl

$(EDLS):
	cpp configs/$(basename $@).epp > $@ $(EPPFLAGS)
=======
all: edl $(PGM)

edl:
	cpp configs/glutdisplay.epp > glutdisplay.edl $(EPPFLAGS)

>>>>>>> d91383e8

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)

