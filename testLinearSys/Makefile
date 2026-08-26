#
include ../makedefs

PGM = testLinearSys
OBJS = main.o

<<<<<<< HEAD
LDFLAGS += -lmixr_base
=======
LDFLAGS += -lmixr_linearsystem -lmixr_base
>>>>>>> d91383e8

all: edl $(PGM)

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

edl:
	@echo "No input files to process"

clean:
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
