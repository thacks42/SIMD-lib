#include <iostream>
#include "test_multiplication.hpp"


bool test_multiplication_int16(){
    using namespace simd_vec;
    int16_vec x({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16});
    int16_vec y(-5);
    auto z = x*y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int16_t j = static_cast<int16_t>(i);
        int16_t res = (1 + j) * (-5);
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_multiplication_int32(){
    using namespace simd_vec;
    int32_vec x({1,2,3,4,5,6,7,8});
    int32_vec y(-5);
    auto z = x*y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int32_t j = static_cast<int32_t>(i);
        int32_t res = (1 + j) * (-5);
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_multiplication_float(){
    using namespace simd_vec;
    float_vec x({1.5f, 2.5f, 3.5f, 4.5f, 5.5f, 6.5f, 7.5f, 8.5f});
    float_vec y(5.25f);
    auto z = x*y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        float j = static_cast<float>(i);
        float res = (1.5f + j) * 5.25f;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_multiplication_double(){
    using namespace simd_vec;
    double_vec x({1.5, 2.5, 3.5, 4.5});
    double_vec y(5.25);
    auto z = x*y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        double j = static_cast<double>(i);
        double res = (1.5 + j) * 5.25;
        if(z_arr[i] != res) return false;
    }
    return true;
}



bool test_multiplication(){
    int fails = 0;
    int tests = 0;
    
    bool result = true;
    
    result = test_multiplication_int16();
    tests++;
    if(!result){
        std::cout << "failed test_multiplication_int16\n";
        fails++;
    }
    
    result = test_multiplication_int32();
    tests++;
    if(!result){
        std::cout << "failed test_multiplication_int32\n";
        fails++;
    }
    
    result = test_multiplication_float();
    tests++;
    if(!result){
        std::cout << "failed test_multiplication_float\n";
        fails++;
    }
    
    result = test_multiplication_double();
    tests++;
    if(!result){
        std::cout << "failed test_multiplication_double\n";
        fails++;
    }
    
    
    std::cout << "test multiplication done " << tests << " tests, " << fails << " failures\n";
    return fails == 0;
}








