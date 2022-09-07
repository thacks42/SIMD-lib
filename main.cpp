#include "simd_lib.hpp"
#include "tests/test_all.hpp"
using namespace simd_vec;

void addition_example(){
    int16_vec a({10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25});
    int16_vec b(33);
    auto c = a+b;
    print(a);
    print(b);
    print(c);
    std::cout << "\n";
}

void multiplication_example(){
    int16_vec a({10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25});
    int16_vec b(3);
    auto c = a*b;
    print(a);
    print(b);
    print(c);
    std::cout << "\n";
}

void sqrt_example(){
    float_vec a({4.0f, 9.0f, 16.0f, 25.0f, 36.0f, 49.0f, 64.0f, 81.0f});
    auto b = sqrt(a);
    print(a);
    print(b);
    std::cout << "\n";
}

void inv_sqrt_example(){
    float_vec a({4.0f, 9.0f, 16.0f, 25.0f, 36.0f, 49.0f, 64.0f, 81.0f});
    auto b = inv_sqrt(a);
    print(a);
    print(b);
    std::cout << "\n";
}

void cmp_neq_example(){
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
    
    std::cout << "tests done, executing examples...\n\n\n";
    std::cout << "addition:\n";
    addition_example();
    std::cout << "\nmultiplication:\n";
    multiplication_example();
    std::cout << "\nsquare root:\n";
    sqrt_example();
    std::cout << "\ninverse square root:\n";
    inv_sqrt_example();
    std::cout << "\ncomparison for non-equaltiy:\n";
    cmp_neq_example();
}
