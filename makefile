CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11
SRCS = $(wildcard *.cpp)
TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f *.o $(TARGET)
