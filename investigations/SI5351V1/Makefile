CFLAGS = -Wall -std=c17
CPPFLAGS = -Wall -std=c++20
PGM = test5351
OBJS = test5351.o si5351a.o Pi2c.o



#-----Build make's *.d files before building the product
all:  rules.d $(PGM)

#-----Builds a debug version of the product (must follow make clean)
debug: CFLAGS += -O0 -g
debug: CPPFLAGS += -O0 -g
debug: rules.d $(PGM) 

#-----Rebuild the dependency (*.d) files from their sources
rules.d: Makefile $(wildcard *.cpp) $(wildcard *.c) $(wildcard *.h)
	gcc -MM $(wildcard *.cpp) $(wildcard *.c) >rules.d

#-----Include the header dependency rules into this Makefile
-include rules.d

#-----Rebuild the product
$(PGM): $(OBJS) Makefile
	gcc $(OBJS)  -o $@

clean:
	rm -f *.o $(PGM)  *~ *.d
