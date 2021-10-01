CC=g++
CFLAGS=-g -c -O3 -Wall -Wpedantic -std=c++1z -march=native
LDFLAGS=
SOURCES=main.cpp tests/test_all.cpp tests/arithmetic/test_addition.cpp \
									tests/arithmetic/test_subtraction.cpp \
									tests/arithmetic/test_multiplication.cpp \
									tests/arithmetic/test_division.cpp \
									tests/arithmetic/test_sqrt.cpp \
									tests/bitwise/test_bitwise_and.cpp \
									tests/bitwise/test_bitwise_or.cpp \
									tests/bitwise/test_bitwise_xor.cpp \
									tests/bitwise/test_bitshift_left.cpp \
									tests/bitwise/test_bitshift_right.cpp \
									tests/comparison/test_equal.cpp \
									tests/comparison/test_not_equal.cpp \
									tests/comparison/test_less_than.cpp \
									tests/comparison/test_greater_than.cpp \
									tests/comparison/test_less_or_equal.cpp \
									tests/comparison/test_greater_or_equal.cpp \
									tests/shuffling/test_blend.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=simd_lib

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(OBJECTS)
