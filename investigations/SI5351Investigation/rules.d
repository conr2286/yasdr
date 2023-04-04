Pi2c.o: Pi2c.cpp Pi2c.h
si5351a.o: si5351a.c Pi2c.h si5351a.h
test5351.o: test5351.c si5351a.h Pi2c.h
