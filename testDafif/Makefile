#
include ../makedefs

PGM = testDafif

OBJS =  \
<<<<<<< HEAD
	models/INavRadio.o \
	models/TacanRadio.o \
	models/IlsRadio.o \
=======
	models/NavRadios.o \
>>>>>>> d91383e8
	models/WorldModel.o \
	AirportTests.o \
	NavaidTests.o \
	WaypointTests.o \
	main.o
<<<<<<< HEAD

LDFLAGS += -lmixr_models_jsbsim -lmixr_models -lJSBSim
LDFLAGS += -lmixr_simulation -lmixr_dafif -lmixr_terrain -lmixr_base
=======
    
LDFLAGS += -lmixr_models -lmixr_simulation -lmixr_dafif -lmixr_terrain -lmixr_base 
>>>>>>> d91383e8
LDFLAGS += -lpthread -lrt

all: edl $(PGM)

$(PGM): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

edl:
	@echo "No input files to process"

clean:
	-rm models/*.o
	-rm -f *.o
	-rm -f *.edl
	-rm -f $(PGM)
