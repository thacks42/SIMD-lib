# SIMD lib

## Quick start:

compile `main.cpp` using `make` to run tests and examples.

## How it works

This library implements a subset of AVX2 intrinsics via C++ operator overloading to allow for manual vectorization without having to deal with unwieldy intrinsics.

## Example

```cpp
int16_vec a({10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25}); //create a 256 bit vector of 16 bit signed integers and initialize them
int16_vec b(33); //create a 256 bit vector of 16 bit signed integers and initialize them all to 33
auto c = a+b; //invokes `_mm256_add_epi16` behind the scenes to add the two 256 bit vectors. (type deduction works as expected)

## Scope

The library currently supports 8, 16, 32 and 64 bit signed and unsigned types as well as floats and doubles.

All basic arithmetic operators are supported as well as bitwise operators for integer types and square roots for floating point types.

Comparisons and masking are supported as well, but shuffling as well as other selections based on comparison results still need to be implemented
