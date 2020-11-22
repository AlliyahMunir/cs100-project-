#include "c-echo.h"
#include "gtest/gtest.h"
#include "ReviewStrategy.hpp"
#include "Shop.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
