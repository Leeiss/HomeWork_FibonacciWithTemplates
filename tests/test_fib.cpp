#include <gtest/gtest.h>
#include "template.hpp"


int fibon(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibon(x-1)+fibon(x-2));
   }
}


TEST(HelloTest, BasicAssertions0)
{
    EXPECT_EQ(Fibonacci<0>::value, fibon(0));
}
TEST(HelloTest, BasicAssertions1)
{
    EXPECT_EQ(Fibonacci<1>::value, fibon(1));
}
TEST(HelloTest, BasicAssertions2)
{
    EXPECT_EQ(Fibonacci<2>::value, fibon(2));
}
TEST(HelloTest, BasicAssertions3)
{
    EXPECT_EQ(Fibonacci<3>::value, fibon(3));
}
TEST(HelloTest, BasicAssertions10)
{
    EXPECT_EQ(Fibonacci<10>::value, fibon(10));
}
TEST(HelloTest, BasicAssertions35)
{
    EXPECT_EQ(Fibonacci<35>::value, fibon(35));
}
TEST(HelloTest, BasicAssertions30)
{
    EXPECT_EQ(Fibonacci<30>::value, fibon(30));
}

TEST(HelloTest, BasicAssertionsf0)
{
    EXPECT_EQ(fibonacci<0>(), fibon(0));
}
TEST(HelloTest, BasicAssertionsf1)
{
    EXPECT_EQ(fibonacci<1>(), fibon(1));
}
TEST(HelloTest, BasicAssertionsf2)
{
    EXPECT_EQ(fibonacci<2>(), fibon(2));
}
TEST(HelloTest, BasicAssertionsf3)
{
    EXPECT_EQ(fibonacci<3>(), fibon(3));
}
TEST(HelloTest, BasicAssertionsf10)
{
    EXPECT_EQ(fibonacci<10>(), fibon(10));
}
TEST(HelloTest, BasicAssertionsf35)
{
    EXPECT_EQ(fibonacci<35>(), fibon(35));
}
TEST(HelloTest, BasicAssertionsf30)
{
    EXPECT_EQ(fibonacci<30>(), fibon(30));
}