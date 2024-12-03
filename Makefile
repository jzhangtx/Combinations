Combinations: Combinations.o
	g++ -g -o Combinations.exe Combinations.o -pthread    

Combinations.o: Combinations/Combinations.cpp
	g++ -g  -c -pthread Combinations/Combinations.cpp
