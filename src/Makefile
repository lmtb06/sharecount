CCPP = g++
CFLAGS = -pedantic -Wall -Wextra

DIRS := comptes gestionnaires
SRCS := $(wildcard $(join $(DIRS), /*.cpp /*.cpp))
OBJ := $(SRCS:%.cpp=%.o)
BINS := main

.PHONY: all clean
.PRECIOUS: %.o

%.o: %.cpp
	@$(CCPP) -o $*.o -c $*.cpp

main:  $(OBJ)
	@$(CCPP) $(CFLAGS) -o $@ $(OBJ) $@.cpp
	@echo "Compilation finie"
	@echo "Début du programme"
	@./$@

clean:
	@echo "Suppression des fichiers objets :" $(OBJ) $(*.o)
	@rm -f $(OBJ) *.o
	@echo "Suppression des executables :" $(BINS)
	@rm -f $(BINS)