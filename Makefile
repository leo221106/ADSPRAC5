COMPILER = g++ -w
OBJECTS= main.o FilterForTwoDigitPositive.o FilterGeneric.o FilterNonPositive.o FilterOdd.o MapAbsoluteValue.o MapGeneric.o MapSquare.o MapTriple.o ReduceGCD.o ReduceGeneric.o ReduceMinimum.o 

TARGET=main

$(TARGET): $(OBJECTS)
	$(COMPILER) -o $@ $^ 
$(OBJECTS):%.o:%.cpp
	$(COMPILER) -o $@ -c $<

.PHONY: all clean

all: main

clean: 
	rm $(wildcard *.o) main

