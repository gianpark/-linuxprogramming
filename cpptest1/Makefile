CX = g++
CXFLAGS = -g -Wall
OBJS = main.o
TARGET = adder

$(TARGET): $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

main.o: main.cpp mylib.h
	$(CX) $(CXFLAGS) -c main.cpp

.PHONY: clean
clean:
	rm $(TARGET) $(OBJS)


