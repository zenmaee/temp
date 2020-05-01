# Variables for compilation
CXX = g++
CXXFLAGS = -g -std=c++11

main: Q2.o Q2main.o
	$(CXX) $(CXXFLAGS) -o Q2.out Q2.o Q2main.o

Q2.o:
	$(CXX) $(CXXFLAGS) -c Q2.cpp

Q2main.o:
	$(CXX) $(CXXFLAGS) -c Q2main.cpp

clean:
	find . -type f -name '*.out' -delete
	find . -type f -name '*.o' -delete
	find . -type f -name 'core.*' -delete


