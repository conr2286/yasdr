#Makefile for test5351

CXX=g++
CXXFLAGS=-O -std=c++17 -Wall

OBJS=test5351.o SI5351a.o Pi2C.o
HDRS=SI5351a.h Pi2C.h

all:	test5351
 
test5351: $(OBJS) $(HDRS) Makefile
	g++ $(OBJS) -o test5351

clean:
	rm -f $(OBJS) test5351
	