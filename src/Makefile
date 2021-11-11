CCPP = g++
CFLAGS = -pedantic -Wall -Wextra


SRCS := $(wildcard *.cpp)
OBJ := $(SRCS:%.cpp=%.o)
BINS := main

.PHONY: all clean
.PRECIOUS: %.o

%.o: %.cpp
	@$(CCPP) $(CFLAGS) -o $*.o -c $*.cpp

main:  $(OBJ)
	@$(CCPP) $(CFLAGS) -o $@ $^
	@echo "Compilation finie"
	@echo "Début du programme"
	@./$@

clean:
	@rm -f $(OBJ) $(BINS)
	@echo "Suppression des fichiers objets :" $(OBJ)
	@echo "Suppression des executables :" $(BINS)