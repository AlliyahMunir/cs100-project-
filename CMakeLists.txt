CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(logo
logo.cpp
)
ADD_EXECUTABLE(shop
	CReviewmain.cpp
	Shop.cpp
	ReviewStrategy.cpp
)

ADD_EXECUTABLE(test
	main_tests.cpp
	discount.cpp
	Order.cpp
	Items.cpp
	visitor.cpp
)

ADD_EXECUTABLE(orderdetails
	Order.cpp
	Items.cpp
	OrderDetailsMain.cpp
	visitor.cpp
	discount.cpp
)
TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
