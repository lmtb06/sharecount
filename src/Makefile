CCPP = g++
CFLAGS = -pedantic -Wall -Wextra


SRCS := $(wildcard *.cpp)
OBJ := $(SRCS:%.cpp=%.o)
BINS := main

.PHONY: all clean
.PRECIOUS: %.o

%.o: %.cpp
	$(CCPP) $(CFLAGS) -o $*.o -c $*.cpp

main:  main.o
	$(CCPP) $(CFLAGS) -o $@ $^
	./$@

clean:
	rm -f $(OBJ) $(BINS)