#ifndef __ALL_TESTS_HPP_
#define __ALL_TESTS_HPP_

#include "visitor.hpp"
#include "discount.hpp"
#include "Order.hpp"
#include "Items.hpp"
#include "Base.hpp"

TEST(OrderTest, OrderCountTest){
    Base* window = new Items("Window", 60.00);
    Order* order = new Order();

    //nothing in order
    EXPECT_EQ(order->count(), 0);

    order->add(window);
    EXPECT_EQ(order->count(), 1);
}

TEST(OrderTest, OrderCostTest){
    Base* window = new Items("Window", 60.00);
    Order* order = new Order();

    order->add(window);
    EXPECT_EQ(order->cost(), 60.00);
    order->add(window);
    EXPECT_EQ(order->cost(), 120.00);
}

TEST(ItemsTest, ItemCostTest){
    Base* window = new Items("Window", 60.00);
    EXPECT_EQ(window->cost(), 60.00);
}

TEST(ItemsTest, ItemCountTest){
    Base* window = new Items("Window", 60.00);
    EXPECT_EQ(window->count(), 1);

}

TEST(VisitorTest, VisitorTotalTest){
    Visitor* visitor = new Visitor();  
    Base* window = new Items("Window", 60.00);
    Order* order = new Order();

    order->add(window);
    order->accept(visitor);
    EXPECT_EQ(visitor->getTotal(), 60.00);
}

TEST(VisitorTest, VisitorDiscountTest){
    Discount* discount = new Discount();
    Visitor* visitor = new Visitor();  

    discount->accept(visitor, 6);
    EXPECT_EQ(visitor->getDiscount(),0);

}

TEST(VisitorTest, VisitorDiscountTest2){
    Discount* discount = new Discount();
    Visitor* visitor = new Visitor();  
    Order* order = new Order();
    Base* realignment = new Items("Realignment", 250.00);
    order->add(realignment);
    order->add(realignment);
    order->accept(visitor);
    discount->accept(visitor, 6);
    EXPECT_EQ(visitor->getDiscount(), 10);
    EXPECT_EQ(visitor->getRawDiscount(), .10);
}
#endif