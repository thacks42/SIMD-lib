#include "test_all.hpp"
#include "arithmetic/test_addition.hpp"
#include "arithmetic/test_subtraction.hpp"
#include "arithmetic/test_multiplication.hpp"
#include "arithmetic/test_division.hpp"
#include "arithmetic/test_sqrt.hpp"
#include "bitwise/test_bitwise_and.hpp"
#include "bitwise/test_bitwise_or.hpp"
#include "bitwise/test_bitwise_xor.hpp"
#include "bitwise/test_bitshift_left.hpp"
#include "bitwise/test_bitshift_right.hpp"
#include "comparison/test_equal.hpp"
#include "comparison/test_not_equal.hpp"
#include "comparison/test_less_than.hpp"
#include "comparison/test_greater_than.hpp"
#include "comparison/test_less_or_equal.hpp"
#include "comparison/test_greater_or_equal.hpp"
#include "shuffling/test_blend.hpp"


bool test_all(){
    bool good = true;
    if(!test_addition()) good = false;
    if(!test_subtraction()) good = false;
    if(!test_multiplication()) good = false;
    if(!test_division()) good = false;
    if(!test_sqrt()) good = false;
    if(!test_bitwise_and()) good = false;
    if(!test_bitwise_or()) good = false;
    if(!test_bitwise_xor()) good = false;
    if(!test_bitshift_left()) good = false;
    if(!test_bitshift_right()) good = false;
    if(!test_equal()) good = false;
    if(!test_not_equal()) good = false;
    if(!test_less_than()) good = false;
    if(!test_greater_than()) good = false;
    if(!test_less_or_equal()) good = false;
    if(!test_greater_or_equal()) good = false;
    if(!test_blend()) good = false;
    
    
    if(good){
        std::cout << "all tests passed\n";
    }
    else{
        std::cout << "not all tests passed\n";
    }
    return good;
}
