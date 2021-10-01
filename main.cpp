#include "simd_lib.hpp"
#include "tests/test_all.hpp"
using namespace simd_vec;

void addition_example(){
    int8_vec a(66);
    int8_vec b(33);
    auto c = a+b;
    print(a);
    print(b);
    print(c);
    std::cout << "\n";
}

void multiplication_example(){
    int16_vec a(22);
    int16_vec b(3);
    auto c = a*b;
    print(a);
    print(b);
    print(c);
    std::cout << "\n";
}

void sqrt_example(){
    float_vec a(36.0f);
    auto b = sqrt(a);
    print(a);
    print(b);
    std::cout << "\n";
}

void inv_sqrt_example(){
    float_vec a(36.0f);
    auto b = inv_sqrt(a);
    print(a);
    print(b);
    std::cout << "\n";
}

void cmp_eq_example(){
    uint64_vec a({4,5,6,7});
    uint64_vec b({5,5,5,5});
    auto c = a!=b;
    print(a);
    print(b);
    print_hex(c);
    std::cout << "\n";
}

int main(){
    test_all();
    return 0;
    addition_example();
    multiplication_example();
    sqrt_example();
    inv_sqrt_example();
    cmp_eq_example();
}
