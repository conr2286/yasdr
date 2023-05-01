CFLAGS= -std=c17 
CXXFLAGS=-O -std=c++17 -Wall

PGM = vfo
OBJS= vfo.o DebugKit.o SI5351a.o Pi2CBlock.o Pi2C.o


.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
.c.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

#-----Build the *.d files before the product
all:  rules.d vfo

#-----Builds a debug version of the test program (*must* follow make clean)
debug: CFLAGS += -Og -g -DDEBUG
debug: rules.d vfo

#-----Rebuild the dependency (*.d) files from their sources
rules.d: Makefile $(wildcard *.c) $(wildcard *.h)
	gcc -MM $(wildcard *.c) >rules.d

#-----Include the header dependency rules into this Makefile
-include rules.d

#-----Rebuild the vfo program
vfo: $(OBJS) Makefile
	g++ $(CXXFLAGS) $(OBJS) -o $@

clean:
	rm -f *.o $(PGM)  *~ *.d

