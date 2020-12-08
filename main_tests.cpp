#ifndef MAIN_TESTS_CPP
#define MAIN_TESTS_CPP
#include "gtest/gtest.h"

#include "all_tests.hpp"

int main(int argc, char** argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}




#endif