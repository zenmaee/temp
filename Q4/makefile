# Variables for compilation
CXX = g++
CXXFLAGS = -std=c++11

main: Q4.o Q4main.o
	$(CXX) $(CXXFLAGS) -o Q4.out Q4main.o Q4.o

Q4main.o:
	$(CXX) $(CXXFLAGS) -c Q4main.cpp

Q4.o:
	$(CXX) $(CXXFLAGS) -c Q4.cpp

clean:
	find . -type f -name '.out' -delete
	find . -type f -name '.o' -delete
	find . -type f -name 'core.*' -delete

