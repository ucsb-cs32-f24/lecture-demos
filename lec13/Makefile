# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17

# Targets
all: pokemon demo

# Compile and run pokemon
pokemon: pokemon.o
	$(CXX) $(CXXFLAGS) -o pokemon pokemon.o
	./pokemon

pokemon.o: pokemon.cpp
	$(CXX) $(CXXFLAGS) -c pokemon.cpp

# Compile and run demo with warnings ignored
demo: demo.o
	$(CXX) -o demo demo.o
	./demo

demo.o: demo.cpp
	$(CXX) -w -c demo.cpp

# Clean up
clean:
	rm -f pokemon demo *.o
