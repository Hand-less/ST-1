// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include "alg.h"

TEST(CheckPrimeTest, HandlesOne) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, HandlesTwo) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrimeTest, HandlesFour) {
    EXPECT_FALSE(checkPrime(4));
}

TEST(CheckPrimeTest, HandlesLargePrime) {
    EXPECT_TRUE(checkPrime(7919));
}

TEST(CheckPrimeTest, HandlesLargeNonPrime) {
    EXPECT_FALSE(checkPrime(8000));
}


TEST(NPrimeTest, FirstPrime) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, FifthPrime) {
    EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, TenthPrime) {
    EXPECT_EQ(nPrime(10), 29);
}


TEST(NextPrimeTest, AfterFour) {
    EXPECT_EQ(nextPrime(4), 5);
}

TEST(NextPrimeTest, AfterEleven) {
    EXPECT_EQ(nextPrime(11), 13);
}


TEST(SumPrimeTest, SumPrimesBelowTen) {
    EXPECT_EQ(sumPrime(10), 17);  // 2 + 3 + 5 + 7 = 17
}

TEST(SumPrimeTest, SumPrimesBelowTwenty) {
    EXPECT_EQ(sumPrime(20), 77);  // 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19 = 77
}

TEST(SumPrimeTest, SumPrimesBelowOneHundred) {
    EXPECT_EQ(sumPrime(100), 1060);
}
