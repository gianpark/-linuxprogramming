CX = g++
CXFLAGS = -g -Wall
OBJS = main.o mylib.o
TARGET = adder

$(TARGET) :$(OBJS)
	$(CX) -o$(TARGET) $(OBJS)
main.o : main.cpp mylib.hpp
	$(CX) $(CXFLAGS) -c main.cpp
mylib.o : mylib.cpp mylib.hpp
	$(CX) $(CXFLAGS) -c mylib.cpp

.PHONY: clean
cealn:
	rm $(TARGET) $(OBJS)
