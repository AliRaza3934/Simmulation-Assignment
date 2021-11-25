output: assignment_1.o
	g++ assignment_1.o -o output

assignment_1.o: assignment_1.cpp
	g++ -c assignment_1.cpp

clean:
	rm *.o output