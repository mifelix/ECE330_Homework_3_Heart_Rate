output: main.o THRCalc.o
	g++ main.o THRCalc.o -o output
	
main.o: main.cpp
	g++ -c main.cpp

THRCalc.o: THRCalc.cpp THRCalc.h
	g++ -c THRCalc.cpp

clean:
	rm *.o output