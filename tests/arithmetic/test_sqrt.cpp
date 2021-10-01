#include <iostream>
#include <cmath>
#include "test_division.hpp"

bool test_sqrt_float(){
    using namespace simd_vec;
    float_vec x({1.5f, 2.5f, 3.5f, 4.5f, 5.5f, 6.5f, 7.5f, 8.5f});
    auto z = sqrt(x);
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        float j = static_cast<float>(i);
        float res = std::sqrt(j + 1.5f);
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_sqrt_double(){
    using namespace simd_vec;
    double_vec x({1.5, 2.5, 3.5, 4.5});
    auto z = sqrt(x);
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        double j = static_cast<double>(i);
        double res = std::sqrt(j + 1.5);
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_invsqrt_float(){
    using namespace simd_vec;
    float_vec x({1.5f, 2.5f, 3.5f, 4.5f, 5.5f, 6.5f, 7.5f, 8.5f});
    auto z = inv_sqrt(x);
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        float j = static_cast<float>(i);
        float res = 1.0f/std::sqrt(j + 1.5f);
        float err = std::abs(z_arr[i] - res);
        if(err > 0.001f) return false;
    }
    return true;
}


bool test_sqrt(){
    int fails = 0;
    int tests = 0;
    
    bool result = true;
    
    
    result = test_sqrt_float();
    tests++;
    if(!result){
        std::cout << "failed test_sqrt_float\n";
        fails++;
    }
    
    result = test_sqrt_double();
    tests++;
    if(!result){
        std::cout << "failed test_sqrt_double\n";
        fails++;
    }
    
    result = test_invsqrt_float();
    tests++;
    if(!result){
        std::cout << "failed test_invsqrt_float\n";
        fails++;
    }
    
    std::cout << "test sqrt done " << tests << " tests, " << fails << " failures\n";
    return fails == 0;
}








