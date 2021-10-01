#include <iostream>
#include "test_bitwise_or.hpp"

bool test_bitshift_left_single_uint16(){
    using namespace simd_vec;
    uint16_vec x({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16});
    int y = 5;
    auto z = x<<y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint16_t j = static_cast<uint16_t>(i);
        uint16_t res = (j+1) << 5;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_bitshift_left_single_int16(){
    using namespace simd_vec;
    int16_vec x({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16});
    int y = 5;
    auto z = x<<y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int16_t j = static_cast<int16_t>(i);
        int16_t res = (j+1) << 5;
        if(z_arr[i] != res) return false;
    }
    return true;
}


bool test_bitshift_left_single_uint32(){
    using namespace simd_vec;
    uint32_vec x({1,2,3,4,5,6,7,8});
    int y = 5;
    auto z = x<<y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint32_t j = static_cast<uint32_t>(i);
        uint32_t res = (j+1) << 5;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_bitshift_left_single_int32(){
    using namespace simd_vec;
    int32_vec x({1,2,3,4,5,6,7,8});
    int y = 5;
    auto z = x<<y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int32_t j = static_cast<int32_t>(i);
        int32_t res = (j+1) << 5;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_bitshift_left_single_uint64(){
    using namespace simd_vec;
    uint64_vec x({1,2,3,4});
    int y = 5;
    auto z = x<<y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint64_t j = static_cast<uint64_t>(i);
        uint64_t res = (j+1) << 5;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_bitshift_left_single_int64(){
    using namespace simd_vec;
    int64_vec x({1,2,3,4});
    int y = 5;
    auto z = x<<y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int64_t j = static_cast<int64_t>(i);
        int64_t res = (j+1) << 5;
        if(z_arr[i] != res) return false;
    }
    return true;
}


bool test_bitshift_left_vec_uint32(){
    using namespace simd_vec;
    uint32_vec x({1,2,3,4,5,6,7,8});
    uint32_vec y(5);
    auto z = x<<y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint32_t j = static_cast<uint32_t>(i);
        uint32_t res = (j+1) << 5;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_bitshift_left_vec_int32(){
    using namespace simd_vec;
    int32_vec x({1,2,3,4,5,6,7,8});
    int32_vec y(5);
    auto z = x<<y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int32_t j = static_cast<int32_t>(i);
        int32_t res = (j+1) << 5;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_bitshift_left_vec_uint64(){
    using namespace simd_vec;
    uint64_vec x({1,2,3,4});
    uint64_vec y(5);
    auto z = x<<y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        uint64_t j = static_cast<uint64_t>(i);
        uint64_t res = (j+1) << 5;
        if(z_arr[i] != res) return false;
    }
    return true;
}

bool test_bitshift_left_vec_int64(){
    using namespace simd_vec;
    int64_vec x({1,2,3,4});
    int64_vec y(5);
    auto z = x<<y;
    auto z_arr = z.arr();
    for(size_t i = 0; i < z_arr.size(); i++){
        int64_t j = static_cast<int64_t>(i);
        int64_t res = (j+1) << 5;
        if(z_arr[i] != res) return false;
    }
    return true;
}





bool test_bitshift_left(){
    int fails = 0;
    int tests = 0;
    
    bool result = true;
    
    result = test_bitshift_left_single_uint16();
    tests++;
    if(!result){
        std::cout << "failed test_bitshift_left_single_uint16\n";
        fails++;
    }
    
    result = test_bitshift_left_single_int16();
    tests++;
    if(!result){
        std::cout << "failed test_bitshift_left_single_int16\n";
        fails++;
    }
    
    result = test_bitshift_left_single_uint32();
    tests++;
    if(!result){
        std::cout << "failed test_bitshift_left_single_uint32\n";
        fails++;
    }
    
    result = test_bitshift_left_single_int32();
    tests++;
    if(!result){
        std::cout << "failed test_bitshift_left_single_int32\n";
        fails++;
    }
    
    result = test_bitshift_left_single_uint64();
    tests++;
    if(!result){
        std::cout << "failed test_bitshift_left_single_uint64\n";
        fails++;
    }
    
    result = test_bitshift_left_single_int64();
    tests++;
    if(!result){
        std::cout << "failed test_bitshift_left_single_int64\n";
        fails++;
    }
    
    result = test_bitshift_left_vec_uint32();
    tests++;
    if(!result){
        std::cout << "failed test_bitshift_left_vec_uint32\n";
        fails++;
    }
    
    result = test_bitshift_left_vec_int32();
    tests++;
    if(!result){
        std::cout << "failed test_bitshift_left_vec_int32\n";
        fails++;
    }
    
    result = test_bitshift_left_vec_uint64();
    tests++;
    if(!result){
        std::cout << "failed test_bitshift_left_vec_uint64\n";
        fails++;
    }
    
    result = test_bitshift_left_vec_int64();
    tests++;
    if(!result){
        std::cout << "failed test_bitshift_left_vec_int64\n";
        fails++;
    }
    
    
    std::cout << "test bitshift left done " << tests << " tests, " << fails << " failures\n";
    return fails == 0;
}








