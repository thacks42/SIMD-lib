#pragma once

#include <immintrin.h>
#include <iostream>
#include <array>

namespace simd_vec{

struct uint8_vec{
    __m256i v;
    using scalar_t = uint8_t;
    uint8_vec() = default;
    uint8_vec(scalar_t x){
        v = _mm256_set1_epi8(x);
    }
    uint8_vec(std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr){
        v = _mm256_loadu_si256(reinterpret_cast<__m256i*>(arr.data()));
    }
    std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr(){
        std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> result;
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(result.data()), v);
        return result;
    }
};

struct uint16_vec{
    __m256i v;
    using scalar_t = uint16_t;
    uint16_vec() = default;
    uint16_vec(scalar_t x){
        v = _mm256_set1_epi16(x);
    }
    uint16_vec(std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr){
        v = _mm256_loadu_si256(reinterpret_cast<__m256i*>(arr.data()));
    }
    std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr(){
        std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> result;
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(result.data()), v);
        return result;
    }
};

struct uint32_vec{
    __m256i v;
    using scalar_t = uint32_t;
    uint32_vec() = default;
    uint32_vec(scalar_t x){
        v = _mm256_set1_epi32(x);
    }
    uint32_vec(std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr){
        v = _mm256_loadu_si256(reinterpret_cast<__m256i*>(arr.data()));
    }
    std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr(){
        std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> result;
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(result.data()), v);
        return result;
    }
};

struct uint64_vec{
    __m256i v;
    using scalar_t = uint64_t;
    uint64_vec() = default;
    uint64_vec(scalar_t x){
        v = _mm256_set1_epi64x(x);
    }
    uint64_vec(std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr){
        v = _mm256_loadu_si256(reinterpret_cast<__m256i*>(arr.data()));
    }
    std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr(){
        std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> result;
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(result.data()), v);
        return result;
    }
};

struct int8_vec{
    __m256i v;
    using scalar_t = int8_t;
    int8_vec() = default;
    int8_vec(scalar_t x){
        v = _mm256_set1_epi8(x);
    }
    int8_vec(std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr){
        v = _mm256_loadu_si256(reinterpret_cast<__m256i*>(arr.data()));
    }
    std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr(){
        std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> result;
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(result.data()), v);
        return result;
    }
};

struct int16_vec{
    __m256i v;
    using scalar_t = int16_t;
    int16_vec() = default;
    int16_vec(scalar_t x){
        v = _mm256_set1_epi16(x);
    }
    int16_vec(std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr){
        v = _mm256_loadu_si256(reinterpret_cast<__m256i*>(arr.data()));
    }
    std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr(){
        std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> result;
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(result.data()), v);
        return result;
    }
};

struct int32_vec{
    __m256i v;
    using scalar_t = int32_t;
    int32_vec() = default;
    int32_vec(scalar_t x){
        v = _mm256_set1_epi32(x);
    }
    int32_vec(std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr){
        v = _mm256_loadu_si256(reinterpret_cast<__m256i*>(arr.data()));
    }
    std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr(){
        std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> result;
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(result.data()), v);
        return result;
    }
};

struct int64_vec{
    __m256i v;
    using scalar_t = int64_t;
    int64_vec(){}
    int64_vec(scalar_t x){
        v = _mm256_set1_epi64x(x);
    }
    int64_vec(std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr){
        v = _mm256_loadu_si256(reinterpret_cast<__m256i*>(arr.data()));
    }
    std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr(){
        std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> result;
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(result.data()), v);
        return result;
    }
};

struct float_vec{
    __m256 v;
    using scalar_t = float;
    float_vec() = default;
    float_vec(scalar_t x){
        v = _mm256_set1_ps(x);
    }
    float_vec(std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr){
        v = _mm256_loadu_ps(arr.data());
    }
    std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr(){
        std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> result;
        _mm256_storeu_ps(result.data(), v);
        return result;
    }
};

struct double_vec{
    __m256d v;
    using scalar_t = double;
    double_vec() = default;
    double_vec(scalar_t x){
        v = _mm256_set1_pd(x);
    }
    double_vec(std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr){
        v = _mm256_loadu_pd(arr.data());
    }
    std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> arr(){
        std::array<scalar_t, sizeof(v)/sizeof(scalar_t)> result;
        _mm256_storeu_pd(result.data(), v);
        return result;
    }
};

template<typename T>
constexpr bool always_false(){
    return !std::is_same_v<T, T>;
}

template<typename vec_t>
void print(const vec_t& x){
    using scalar_t = typename vec_t::scalar_t;
    
    if constexpr(std::is_same_v<scalar_t, float>){
        std::array<scalar_t, sizeof(vec_t::v)/sizeof(scalar_t)> arr;
        _mm256_storeu_ps(arr.data(), x.v);
        for(auto i : arr){
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    else if constexpr(std::is_same_v<scalar_t, double>){
        std::array<scalar_t, sizeof(vec_t::v)/sizeof(scalar_t)> arr;
        _mm256_storeu_pd(arr.data(), x.v);
        for(auto i : arr){
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    else{
        std::array<scalar_t, sizeof(vec_t::v)/sizeof(scalar_t)> arr;
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(arr.data()), x.v);
        for(auto i : arr){
            if constexpr(sizeof(scalar_t) == 1){
                std::cout << static_cast<int>(i) << " ";
            }
            else{
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
    }
}

template<typename vec_t>
void print_hex(const vec_t& x){
    using scalar_t = typename vec_t::scalar_t;
    if constexpr(std::is_same_v<scalar_t, float>){
        std::array<scalar_t, sizeof(vec_t::v)/sizeof(scalar_t)> arr;
        _mm256_storeu_ps(arr.data(), x.v);
        for(auto i : arr){
            std::cout << std::hex << i << " ";
        }
        std::cout << std::endl;
    }
    else if constexpr(std::is_same_v<scalar_t, double>){
        std::array<scalar_t, sizeof(vec_t::v)/sizeof(scalar_t)> arr;
        _mm256_storeu_pd(arr.data(), x.v);
        for(auto i : arr){
            std::cout << std::hex<< i << " ";
        }
        std::cout << std::endl;
    }
    else{
        std::array<scalar_t, sizeof(vec_t::v)/sizeof(scalar_t)> arr;
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(arr.data()), x.v);
        for(auto i : arr){
            if constexpr(sizeof(scalar_t) == 1){
                std::cout << std::hex<< static_cast<int>(i) << " ";
            }
            else{
                std::cout << std::hex << i << " ";
            }
        }
        std::cout << std::endl;
    }
}



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-attributes"
template<typename from_vec_t, typename to_vec_t>
to_vec_t inline vec_bit_cast(const from_vec_t& a){
    to_vec_t result;
    
    if      constexpr(std::is_same_v<decltype(from_vec_t::v), decltype(to_vec_t::v)>){
        result.v = a.v;
    }
    
    else if constexpr(std::is_same_v<decltype(from_vec_t::v), __m256i> and std::is_same_v<decltype(to_vec_t::v), __m256>){ //casting from int vec to float vec
        result.v = _mm256_castsi256_ps(a.v);
    }
    else if constexpr(std::is_same_v<decltype(from_vec_t::v), __m256i> and std::is_same_v<decltype(to_vec_t::v), __m256d>){ //casting from int vec to double vec
        result.v = _mm256_castsi256_pd(a.v);
    }
    else if constexpr(std::is_same_v<decltype(from_vec_t::v), __m256> and std::is_same_v<decltype(to_vec_t::v), __m256i>){ //casting from float vec to int vec
        result.v = _mm256_castps_si256(a.v);
    }
    else if constexpr(std::is_same_v<decltype(from_vec_t::v), __m256d> and std::is_same_v<decltype(to_vec_t::v), __m256i>){ //casting from double vec to int vec
        result.v = _mm256_castpd_si256(a.v);
    }
    
    else if constexpr(std::is_same_v<decltype(from_vec_t::v), __m256> and std::is_same_v<decltype(to_vec_t::v), __m256d>){ //casting from float vec to double vec
        result.v = _mm256_castps_pd(a.v);
    }
    else if constexpr(std::is_same_v<decltype(from_vec_t::v), __m256> and std::is_same_v<decltype(to_vec_t::v), __m256d>){ //casting from double vec to float vec
        result.v = _mm256_castpd_ps(a.v);
    }
    else{
        static_assert(always_false<from_vec_t>(), "bad cast");
    }
    return result;
}
#pragma GCC diagnostic pop



template<typename vec_t>
vec_t inline operator+(const vec_t& a, const vec_t& b){
    vec_t result;
    if constexpr     (std::is_same_v<vec_t, uint8_vec> or std::is_same_v<vec_t, int8_vec>){
        result.v = _mm256_add_epi8(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec> or std::is_same_v<vec_t, int16_vec>){
        result.v = _mm256_add_epi16(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec> or std::is_same_v<vec_t, int32_vec>){
        result.v = _mm256_add_epi32(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec> or std::is_same_v<vec_t, int64_vec>){
        result.v = _mm256_add_epi64(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_add_ps(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_add_pd(a.v, b.v);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}



template<typename vec_t>
vec_t inline operator-(const vec_t& a, const vec_t& b){
    vec_t result;
    if constexpr     (std::is_same_v<vec_t, uint8_vec> or std::is_same_v<vec_t, int8_vec>){
        result.v = _mm256_sub_epi8(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec> or std::is_same_v<vec_t, int16_vec>){
        result.v = _mm256_sub_epi16(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec> or std::is_same_v<vec_t, int32_vec>){
        result.v = _mm256_sub_epi32(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec> or std::is_same_v<vec_t, int64_vec>){
        result.v = _mm256_sub_epi64(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_sub_ps(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_sub_pd(a.v, b.v);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}


template<typename vec_t>
vec_t inline operator*(const vec_t& a, const vec_t& b){
    vec_t result;
    if constexpr     (std::is_same_v<vec_t, uint8_vec> or std::is_same_v<vec_t, int8_vec>){
        static_assert(always_false<vec_t>(), "no multiply for 8 bit ints, sorry");
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec>){
        static_assert(always_false<vec_t>(), "no multiply for unsigned ints, sorry");
    }
    else if constexpr(std::is_same_v<vec_t, int16_vec>){
        result.v = _mm256_mullo_epi16(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec>){
        static_assert(always_false<vec_t>(), "no multiply for unsigned ints, sorry");
    }
    else if constexpr(std::is_same_v<vec_t, int32_vec>){
        result.v = _mm256_mullo_epi32(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec> or std::is_same_v<vec_t, int64_vec>){
        static_assert(always_false<vec_t>(), "no multiply for 64 bit ints, sorry");
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_mul_ps(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_mul_pd(a.v, b.v);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}


template<typename vec_t>
vec_t inline operator/(const vec_t& a, const vec_t& b){
    vec_t result;
    using scalar_t = typename vec_t::scalar_t;
    if constexpr(!std::is_floating_point_v<scalar_t>){
        static_assert(always_false<vec_t>(), "no division for ints, sorry");
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_div_ps(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_div_pd(a.v, b.v);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}

template<typename vec_t>
vec_t inline sqrt(const vec_t& a){
    vec_t result;
    using scalar_t = typename vec_t::scalar_t;
    if constexpr(!std::is_floating_point_v<scalar_t>){
        static_assert(always_false<vec_t>(), "square root only supported for floats");
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_sqrt_ps(a.v);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_sqrt_pd(a.v);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}

template<typename vec_t>
vec_t inline inv_sqrt(const vec_t& a){
    vec_t result;
    if constexpr(!std::is_same_v<vec_t, float_vec>){
        static_assert(always_false<vec_t>(), "square root only supported for 32 bit floats");
    }
    else{
        result.v = _mm256_rsqrt_ps(a.v);
    }
    return result;
}

template<typename vec_t>
vec_t inline operator&(const vec_t& a, const vec_t& b){
    vec_t result;
    using scalar_t = typename vec_t::scalar_t;
    if constexpr(std::is_floating_point_v<scalar_t>){
        static_assert(always_false<vec_t>(), "no bitwise operations for floats");
    }
    else{
        result.v = _mm256_and_si256(a.v, b.v);
    }
    return result;
}

template<typename vec_t>
vec_t inline operator|(const vec_t& a, const vec_t& b){
    vec_t result;
    using scalar_t = typename vec_t::scalar_t;
    if constexpr(std::is_floating_point_v<scalar_t>){
        static_assert(always_false<vec_t>(), "no bitwise operations for floats");
    }
    else{
        result.v = _mm256_or_si256(a.v, b.v);
    }
    return result;
}

template<typename vec_t>
vec_t inline operator^(const vec_t& a, const vec_t& b){
    vec_t result;
    using scalar_t = typename vec_t::scalar_t;
    if constexpr(std::is_floating_point_v<scalar_t>){
        static_assert(always_false<vec_t>(), "no bitwise operations for floats");
    }
    else{
        result.v = _mm256_xor_si256(a.v, b.v);
    }
    return result;
}


template<typename vec_t>
vec_t inline operator<<(const vec_t& a, const int b){
    vec_t result;
    using scalar_t = typename vec_t::scalar_t;
    if constexpr(std::is_floating_point_v<scalar_t>){
        static_assert(always_false<vec_t>(), "no bitwise operations for floats");
    }
    else if constexpr(std::is_same_v<vec_t, uint8_vec> or std::is_same_v<vec_t, int8_vec>){
        static_assert(always_false<vec_t>(), "no shift operation for 8 bit ints");
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec> or std::is_same_v<vec_t, int16_vec>){
        result.v = _mm256_slli_epi16(a.v, b);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec> or std::is_same_v<vec_t, int32_vec>){
        result.v = _mm256_slli_epi32(a.v, b);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec> or std::is_same_v<vec_t, int64_vec>){
        result.v = _mm256_slli_epi64(a.v, b);
    }
    else{
        static_assert(!std::is_same_v<vec_t, vec_t>, "wrong type");
    }
    return result;
}


template<typename vec_t>
vec_t inline operator<<(const vec_t& a, const vec_t& b){
    vec_t result;
    using scalar_t = typename vec_t::scalar_t;
    if constexpr(std::is_floating_point_v<scalar_t>){
        static_assert(always_false<vec_t>(), "no bitwise operations for floats");
    }
    else if constexpr(std::is_same_v<vec_t, uint8_vec> or std::is_same_v<vec_t, int8_vec>){
        static_assert(always_false<vec_t>(), "no shift operation for 8 bit ints");
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec> or std::is_same_v<vec_t, int16_vec>){
        static_assert(always_false<vec_t>(), "no element-specific shift operation for 16 bit ints");
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec> or std::is_same_v<vec_t, int32_vec>){
        result.v = _mm256_sllv_epi32(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec> or std::is_same_v<vec_t, int64_vec>){
        result.v = _mm256_sllv_epi64(a.v, b.v);
    }
    else{
        static_assert(!std::is_same_v<vec_t, vec_t>, "wrong type");
    }
    return result;
}


template<typename vec_t>
vec_t inline operator>>(const vec_t& a, const int b){
    vec_t result;
    using scalar_t = typename vec_t::scalar_t;
    if constexpr(std::is_floating_point_v<scalar_t>){
        static_assert(always_false<vec_t>(), "no bitwise operations for floats");
    }
    else if constexpr(std::is_same_v<vec_t, uint8_vec> or std::is_same_v<vec_t, int8_vec>){
        static_assert(always_false<vec_t>(), "no shift operation for 8 bit ints");
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec>){
        result.v = _mm256_srli_epi16(a.v, b);
    }
    else if constexpr(std::is_same_v<vec_t, int16_vec>){
        result.v = _mm256_srai_epi16(a.v, b);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec>){
        result.v = _mm256_srli_epi32(a.v, b);
    }
    else if constexpr(std::is_same_v<vec_t, int32_vec>){
        result.v = _mm256_srai_epi32(a.v, b);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec>){
        result.v = _mm256_srli_epi64(a.v, b);
    }
    else if constexpr(std::is_same_v<vec_t, int64_vec>){
        static_assert(always_false<vec_t>(), "no arithmetic right shift operation for 64 bit ints");
    }
    else{
        static_assert(!std::is_same_v<vec_t, vec_t>, "wrong type");
    }
    return result;
}



template<typename vec_t>
vec_t inline operator>>(const vec_t& a, const vec_t& b){
    vec_t result;
    using scalar_t = typename vec_t::scalar_t;
    if constexpr(std::is_floating_point_v<scalar_t>){
        static_assert(always_false<vec_t>(), "no bitwise operations for floats");
    }
    else if constexpr(std::is_same_v<vec_t, uint8_vec> or std::is_same_v<vec_t, int8_vec>){
        static_assert(always_false<vec_t>(), "no shift operation for 8 bit ints");
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec> or std::is_same_v<vec_t, int16_vec>){
        static_assert(always_false<vec_t>(), "no element-specific shift operation for 16 bit ints");
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec>){
        result.v = _mm256_srlv_epi32(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, int32_vec>){
        result.v = _mm256_srav_epi32(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec>){
        result.v = _mm256_srlv_epi64(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, int64_vec>){
        static_assert(always_false<vec_t>(), "no element-specific arithmetic right shift operation for 64 bit ints");
    }
    else{
        static_assert(!std::is_same_v<vec_t, vec_t>, "wrong type");
    }
    return result;
}





template<typename vec_t>
vec_t inline operator==(const vec_t& a, const vec_t& b){
    vec_t result;
    if constexpr     (std::is_same_v<vec_t, uint8_vec> or std::is_same_v<vec_t, int8_vec>){
        result.v = _mm256_cmpeq_epi8(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec> or std::is_same_v<vec_t, int16_vec>){
        result.v = _mm256_cmpeq_epi16(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec> or std::is_same_v<vec_t, int32_vec>){
        result.v = _mm256_cmpeq_epi32(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec> or std::is_same_v<vec_t, int64_vec>){
        result.v = _mm256_cmpeq_epi64(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_cmp_ps(a.v, b.v, _CMP_EQ_OQ);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_cmp_pd(a.v, b.v, _CMP_EQ_OQ);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}



template<typename vec_t>
vec_t inline operator!=(const vec_t& a, const vec_t& b){
    vec_t result;
    if constexpr     (std::is_same_v<vec_t, uint8_vec> or std::is_same_v<vec_t, int8_vec>){
        result.v = ~_mm256_cmpeq_epi8(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec> or std::is_same_v<vec_t, int16_vec>){
        result.v = ~_mm256_cmpeq_epi16(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec> or std::is_same_v<vec_t, int32_vec>){
        result.v = ~_mm256_cmpeq_epi32(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec> or std::is_same_v<vec_t, int64_vec>){
        result.v = ~_mm256_cmpeq_epi64(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_cmp_ps(a.v, b.v, _CMP_NEQ_OQ);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_cmp_pd(a.v, b.v, _CMP_NEQ_OQ);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}


template<typename vec_t>
vec_t inline operator<(const vec_t& a, const vec_t& b){
    vec_t result;
    if constexpr     (std::is_same_v<vec_t, int8_vec>){
        result.v = _mm256_cmpgt_epi8(b.v, a.v);
    }
    else if constexpr(std::is_same_v<vec_t, int16_vec>){
        result.v = _mm256_cmpgt_epi16(b.v, a.v);
    }
    else if constexpr(std::is_same_v<vec_t, int32_vec>){
        result.v = _mm256_cmpgt_epi32(b.v, a.v);
    }
    else if constexpr(std::is_same_v<vec_t, int64_vec>){
        result.v = _mm256_cmpgt_epi64(b.v, a.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint8_vec>){
        __m256i tmp = _mm256_max_epu8(a.v, b.v);
        result.v = ~_mm256_cmpeq_epi8(a.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec>){
        __m256i tmp = _mm256_max_epu16(a.v, b.v);
        result.v = ~_mm256_cmpeq_epi16(a.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec>){
        __m256i tmp = _mm256_max_epu32(a.v, b.v);
        result.v = ~_mm256_cmpeq_epi32(a.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec>){
        static_assert(always_false<vec_t>(), "no good way to implement less-than for unsigned 64 bit values. Sorry");
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_cmp_ps(a.v, b.v, _CMP_LT_OQ);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_cmp_pd(a.v, b.v, _CMP_LT_OQ);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}



template<typename vec_t>
vec_t inline operator>(const vec_t& a, const vec_t& b){
    vec_t result;
    if constexpr     (std::is_same_v<vec_t, int8_vec>){
        result.v = _mm256_cmpgt_epi8(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, int16_vec>){
        result.v = _mm256_cmpgt_epi16(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, int32_vec>){
        result.v = _mm256_cmpgt_epi32(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, int64_vec>){
        result.v = _mm256_cmpgt_epi64(a.v, b.v);
    }
    else if constexpr(std::is_same_v<vec_t, uint8_vec>){
        __m256i tmp = _mm256_max_epu8(a.v, b.v);
        result.v = ~_mm256_cmpeq_epi8(b.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec>){
        __m256i tmp = _mm256_max_epu16(a.v, b.v);
        result.v = ~_mm256_cmpeq_epi16(b.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec>){
        __m256i tmp = _mm256_max_epu32(a.v, b.v);
        result.v = ~_mm256_cmpeq_epi32(b.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec>){
        static_assert(always_false<vec_t>(), "no good way to implement greater-than for unsigned 64 bit values. Sorry");
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_cmp_ps(a.v, b.v, _CMP_GT_OQ);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_cmp_pd(a.v, b.v, _CMP_GT_OQ);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}


template<typename vec_t>
vec_t inline operator<=(const vec_t& a, const vec_t& b){
    vec_t result;
    if constexpr     (std::is_same_v<vec_t, int8_vec>){
        __m256i tmp = _mm256_min_epi8(a.v, b.v);
        result.v = _mm256_cmpeq_epi8(a.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, int16_vec>){
        __m256i tmp = _mm256_min_epi16(a.v, b.v);
        result.v = _mm256_cmpeq_epi16(a.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, int32_vec>){
        __m256i tmp = _mm256_min_epi32(a.v, b.v);
        result.v = _mm256_cmpeq_epi32(a.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, int64_vec>){
        static_assert(always_false<vec_t>(), "no good way to implement less-or-equal for signed 64 bit values. Sorry");
    }
    else if constexpr(std::is_same_v<vec_t, uint8_vec>){
        __m256i tmp = _mm256_min_epu8(a.v, b.v);
        result.v = _mm256_cmpeq_epi8(a.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec>){
        __m256i tmp = _mm256_min_epu16(a.v, b.v);
        result.v = _mm256_cmpeq_epi16(a.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec>){
        __m256i tmp = _mm256_min_epu32(a.v, b.v);
        result.v = _mm256_cmpeq_epi32(a.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec>){
        static_assert(always_false<vec_t>(), "no good way to implement less-or-equal for unsigned 64 bit values. Sorry");
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_cmp_ps(a.v, b.v, _CMP_LE_OQ);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_cmp_pd(a.v, b.v, _CMP_LE_OQ);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}




template<typename vec_t>
vec_t inline operator>=(const vec_t& a, const vec_t& b){
    vec_t result;
    if constexpr     (std::is_same_v<vec_t, int8_vec>){
        __m256i tmp = _mm256_min_epi8(a.v, b.v);
        result.v = _mm256_cmpeq_epi8(b.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, int16_vec>){
        __m256i tmp = _mm256_min_epi16(a.v, b.v);
        result.v = _mm256_cmpeq_epi16(b.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, int32_vec>){
        __m256i tmp = _mm256_min_epi32(a.v, b.v);
        result.v = _mm256_cmpeq_epi32(b.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, int64_vec>){
        static_assert(always_false<vec_t>(), "no good way to implement greater-or-equal for signed 64 bit values. Sorry");
    }
    else if constexpr(std::is_same_v<vec_t, uint8_vec>){
        __m256i tmp = _mm256_min_epu8(a.v, b.v);
        result.v = _mm256_cmpeq_epi8(b.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint16_vec>){
        __m256i tmp = _mm256_min_epu16(a.v, b.v);
        result.v = _mm256_cmpeq_epi16(b.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint32_vec>){
        __m256i tmp = _mm256_min_epu32(a.v, b.v);
        result.v = _mm256_cmpeq_epi32(b.v, tmp);
    }
    else if constexpr(std::is_same_v<vec_t, uint64_vec>){
        static_assert(always_false<vec_t>(), "no good way to implement greater-or-equal for unsigned 64 bit values. Sorry");
    }
    else if constexpr(std::is_same_v<vec_t, float_vec>){
        result.v = _mm256_cmp_ps(a.v, b.v, _CMP_GE_OQ);
    }
    else if constexpr(std::is_same_v<vec_t, double_vec>){
        result.v = _mm256_cmp_pd(a.v, b.v, _CMP_GE_OQ);
    }
    else{
        static_assert(always_false<vec_t>(), "wrong type");
    }
    return result;
}



}; //namespace simd_vec







