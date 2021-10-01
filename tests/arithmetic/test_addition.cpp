#include <iostream>
#include "test_addition.hpp"

bool test_addition_uint8(){
    using namespace simd_vec;
    uint8_vec x({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32});
    uint8_vec y(5);
    auto z = x+y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint8_t j = static_cast<uint8_t>(i);
        if(z_arr[i] != 5 + 1 + j) return false;
    }
    return true;
}

bool test_addition_int8(){
    using namespace simd_vec;
    int8_vec x({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32});
    int8_vec y(-5);
    auto z = x+y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int8_t j = static_cast<int8_t>(i);
        if(z_arr[i] != -5 + 1 + j) return false;
    }
    return true;
}

bool test_addition_uint16(){
    using namespace simd_vec;
    uint16_vec x({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16});
    uint16_vec y(5);
    auto z = x+y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint16_t j = static_cast<uint16_t>(i);
        if(z_arr[i] != 5 + 1 + j) return false;
    }
    return true;
}

bool test_addition_int16(){
    using namespace simd_vec;
    int16_vec x({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16});
    int16_vec y(-5);
    auto z = x+y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int16_t j = static_cast<int16_t>(i);
        if(z_arr[i] != -5 + 1 + j) return false;
    }
    return true;
}


bool test_addition_uint32(){
    using namespace simd_vec;
    uint32_vec x({1,2,3,4,5,6,7,8});
    uint32_vec y(5);
    auto z = x+y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint32_t j = static_cast<uint32_t>(i);
        if(z_arr[i] != 5 + 1 + j) return false;
    }
    return true;
}

bool test_addition_int32(){
    using namespace simd_vec;
    int32_vec x({1,2,3,4,5,6,7,8});
    int32_vec y(-5);
    auto z = x+y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int32_t j = static_cast<int32_t>(i);
        if(z_arr[i] != -5 + 1 + j) return false;
    }
    return true;
}

bool test_addition_uint64(){
    using namespace simd_vec;
    uint64_vec x({1,2,3,4});
    uint64_vec y(5);
    auto z = x+y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint64_t j = static_cast<uint64_t>(i);
        if(z_arr[i] != 5 + 1 + j) return false;
    }
    return true;
}

bool test_addition_int64(){
    using namespace simd_vec;
    int64_vec x({1,2,3,4});
    int64_vec y(-5);
    auto z = x+y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int64_t j = static_cast<int64_t>(i);
        if(z_arr[i] != -5 + 1 + j) return false;
    }
    return true;
}

bool test_addition_float(){
    using namespace simd_vec;
    float_vec x({1.5f, 2.5f, 3.5f, 4.5f, 5.5f, 6.5f, 7.5f, 8.5f});
    float_vec y(5.25f);
    auto z = x+y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        float j = static_cast<float>(i);
        if(z_arr[i] != 5.25f + 1.5f + j) return false;
    }
    return true;
}

bool test_addition_double(){
    using namespace simd_vec;
    double_vec x({1.5, 2.5, 3.5, 4.5});
    double_vec y(5.25);
    auto z = x+y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        double j = static_cast<double>(i);
        if(z_arr[i] != 5.25 + 1.5 + j) return false;
    }
    return true;
}



bool test_addition(){
    int fails = 0;
    int tests = 0;
    
    bool result = true;
    
    result = test_addition_uint8();
    tests++;
    if(!result){
        std::cout << "failed test_addition_uint8\n";
        fails++;
    }
    
    result = test_addition_int8();
    tests++;
    if(!result){
        std::cout << "failed test_addition_int8\n";
        fails++;
    }
    
    result = test_addition_uint16();
    tests++;
    if(!result){
        std::cout << "failed test_addition_uint16\n";
        fails++;
    }
    
    result = test_addition_int16();
    tests++;
    if(!result){
        std::cout << "failed test_addition_int16\n";
        fails++;
    }
    
    result = test_addition_uint32();
    tests++;
    if(!result){
        std::cout << "failed test_addition_uint32\n";
        fails++;
    }
    
    result = test_addition_int32();
    tests++;
    if(!result){
        std::cout << "failed test_addition_int32\n";
        fails++;
    }
    
    result = test_addition_uint64();
    tests++;
    if(!result){
        std::cout << "failed test_addition_uint64\n";
        fails++;
    }
    
    result = test_addition_int64();
    tests++;
    if(!result){
        std::cout << "failed test_addition_int64\n";
        fails++;
    }
    
    result = test_addition_float();
    tests++;
    if(!result){
        std::cout << "failed test_addition_float\n";
        fails++;
    }
    
    result = test_addition_double();
    tests++;
    if(!result){
        std::cout << "failed test_addition_double\n";
        fails++;
    }
    
    
    std::cout << "test addition done " << tests << " tests, " << fails << " failures\n";
    return fails == 0;
}








