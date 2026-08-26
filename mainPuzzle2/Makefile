#
include ../makedefs

PGM = mainPuzzle2
<<<<<<< HEAD

OBJS =  Blocks.o PuzzleBoard.o factory.o main.o Controller.o State.o

EDLS = puzzle.edl

=======
OBJS =  Blocks.o PuzzleBoard.o factory.o main.o Controller.o State.o

>>>>>>> d91383e8
LDFLAGS += -lmixr_ui_glut -lmixr_graphics -lmixr_base
LDFLAGS += -lftgl -lfreetype -lglut -lGLU -lGL -lX11 -lpthread
#LDFLAGS += -lXi -lXmu
LDFLAGS += -lrt

<<<<<<< HEAD
all: $(EDLS) $(PGM)

run: all
	echo "mainPuzzle2 -f puzzle.edl"
	./$(PGM) -f puzzle.edl

$(EDLS):
	cpp configs/$(basename $@).epp > $@ $(EPPFLAGS)
=======
all: edl $(PGM)
>>>>>>> d91383e8

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

<<<<<<< HEAD
=======
edl:
	cpp configs/puzzle.epp >puzzle.edl $(EPPFLAGS)

>>>>>>> d91383e8
clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
