#include <iostream>
#include "test_greater_or_equal.hpp"



bool test_greater_or_equal_uint8(){
    using namespace simd_vec;
    uint8_vec x({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32});
    uint8_vec y(5);
    auto z = x>=y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint8_t j = static_cast<uint8_t>(i);
        uint8_t res = 1 + j >= 5 ? 0xff : 0;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_greater_or_equal_int8(){
    using namespace simd_vec;
    int8_vec x({-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15,-16,-17,-18,-19,-20,-21,-22,-23,-24,-25,-26,-27,-28,-29,-30,-31,-32});
    int8_vec y(-5);
    auto z = x>=y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int8_t j = static_cast<int8_t>(i);
        int8_t res = -(1 + j) >= (-5) ? 0xff : 0;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_greater_or_equal_uint16(){
    using namespace simd_vec;
    uint16_vec x({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16});
    uint16_vec y(5);
    auto z = x>=y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint16_t j = static_cast<uint16_t>(i);
        uint16_t res = 1 + j >= 5 ? 0xffff : 0;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_greater_or_equal_int16(){
    using namespace simd_vec;
    int16_vec x({-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15,-16});
    int16_vec y(-5);
    auto z = x>=y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int16_t j = static_cast<int16_t>(i);
        int16_t res = -(1 + j) >= (-5) ? 0xffff : 0;
        if(z_arr[i] != res) return false;
    }
    return true;
}


bool test_greater_or_equal_uint32(){
    using namespace simd_vec;
    uint32_vec x({1,2,3,4,5,6,7,8});
    uint32_vec y(5);
    auto z = x>=y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint32_t j = static_cast<uint32_t>(i);
        uint32_t res = 1 + j >= 5 ? 0xffffffff : 0;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_greater_or_equal_int32(){
    using namespace simd_vec;
    int32_vec x({-1,-2,-3,-4,-5,-6,-7,-8});
    int32_vec y(-5);
    auto z = x>=y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int32_t j = static_cast<int32_t>(i);
        int32_t res = -(1 + j) >= (-5) ? 0xffffffff : 0;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_greater_or_equal_float(){
    using namespace simd_vec;
    float_vec x({1.5f, 2.5f, 3.5f, 4.5f, 5.5f, 6.5f, 7.5f, 8.5f});
    float_vec y(5.5f);
    auto z = x>=y;
    auto z2 = vec_bit_cast<float_vec, uint32_vec>(z);
    auto z_arr = z2.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        float j = static_cast<float>(i);
        uint32_t res = 1.5f + j >= 5.5f ? 0xffffffff : 0;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_greater_or_equal_double(){
    using namespace simd_vec;
    double_vec x({1.5, 2.5, 3.5, 4.5});
    double_vec y(3.5);
    auto z = x>=y;
    auto z2 = vec_bit_cast<double_vec, uint64_vec>(z);
    auto z_arr = z2.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        double j = static_cast<double>(i);
        uint64_t res = 1.5 + j >= 3.5 ? 0xffffffffffffffffull : 0;
        if(z_arr[i] != res) return false;
    }
    return true;
}



bool test_greater_or_equal(){
    int fails = 0;
    int tests = 0;
    
    bool result = true;
    
    result = test_greater_or_equal_uint8();
    tests++;
    if(!result){
        std::cout << "failed test_greater_or_equal_uint8\n";
        fails++;
    }
    
    result = test_greater_or_equal_int8();
    tests++;
    if(!result){
        std::cout << "failed test_greater_or_equal_int8\n";
        fails++;
    }
    
    result = test_greater_or_equal_uint16();
    tests++;
    if(!result){
        std::cout << "failed test_greater_or_equal_uint16\n";
        fails++;
    }
    
    result = test_greater_or_equal_int16();
    tests++;
    if(!result){
        std::cout << "failed test_greater_or_equal_int16\n";
        fails++;
    }
    
    result = test_greater_or_equal_uint32();
    tests++;
    if(!result){
        std::cout << "failed test_greater_or_equal_uint32\n";
        fails++;
    }
    
    result = test_greater_or_equal_int32();
    tests++;
    if(!result){
        std::cout << "failed test_greater_or_equal_int32\n";
        fails++;
    }
    
    result = test_greater_or_equal_float();
    tests++;
    if(!result){
        std::cout << "failed test_greater_or_equal_float\n";
        fails++;
    }
    
    result = test_greater_or_equal_double();
    tests++;
    if(!result){
        std::cout << "failed test_greater_or_equal_double\n";
        fails++;
    }
    
    
    std::cout << "test greater-or-equal done " << tests << " tests, " << fails << " failures\n";
    return fails == 0;
}








