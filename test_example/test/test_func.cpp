#include <gtest/gtest.h>

#include <func.hpp>

TEST(IsPrimeTest, NegativeAndSmallNumbers)
{
  EXPECT_FALSE(isPrime(-10));
  EXPECT_FALSE(isPrime(-1));
  EXPECT_FALSE(isPrime(0));
  EXPECT_FALSE(isPrime(1));
}

TEST(IsPrimeTest, SmallPrimes)
{
  EXPECT_TRUE(isPrime(2));
  EXPECT_TRUE(isPrime(3));
  EXPECT_TRUE(isPrime(5));
  EXPECT_TRUE(isPrime(7));
  EXPECT_TRUE(isPrime(11));
  EXPECT_TRUE(isPrime(13));
}

TEST(IsPrimeTest, SmallComposites)
{
  EXPECT_FALSE(isPrime(4));
  EXPECT_FALSE(isPrime(6));
  EXPECT_FALSE(isPrime(8));
  EXPECT_FALSE(isPrime(9));
  EXPECT_FALSE(isPrime(10));
  EXPECT_FALSE(isPrime(15));
}

TEST(IsPrimeTest, LargerNumbers)
{
  EXPECT_TRUE(isPrime(97));
  EXPECT_TRUE(isPrime(7919));
  EXPECT_FALSE(isPrime(100));
  EXPECT_FALSE(isPrime(7917));
}

TEST(IsPrimeTest, PerfectSquareIsNotPrime)
{
  EXPECT_FALSE(isPrime(49));
  EXPECT_FALSE(isPrime(121));
  EXPECT_FALSE(isPrime(169));
}
