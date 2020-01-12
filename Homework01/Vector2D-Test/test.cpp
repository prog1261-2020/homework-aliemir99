#include "gtest/gtest.h"
#include "Vector2D.h"


TEST(Vector2DTestSuite, constructorTest01) {
    Vector2D v1(1, 1);

    std::string expectedResult = "(1, 1)";
    std::string result = v1.toString();

    EXPECT_EQ(expectedResult, result);
}


TEST(Vector2DTestSuite, equalsTest01) {
    Vector2D v1(1, 1);
    Vector2D v2(1, 1);

    EXPECT_TRUE(v1 == v2);
}

TEST(Vector2DTestSuite, equalsTest02) {
    Vector2D v1(1, 1);
    Vector2D v2(2, 1);

    EXPECT_FALSE(v1 == v2);
}

TEST(Vector2DTestSuite, notEqualsTest01) {
    Vector2D v1(5, 1);
    Vector2D v2(1, 1);

    EXPECT_TRUE(v1 != v2);
}

TEST(Vector2DTestSuite, notEqualsTest02) {
    Vector2D v1(1, 1);
    Vector2D v2(1, 1);

    EXPECT_FALSE(v1 != v2);
}
/// LESS TJAN OPERATOR TEST "<"
TEST(Vector2DTestSuite, lessThanTest01) {
    Vector2D v1(3, 5);
    Vector2D v2(5, 5);

    EXPECT_TRUE(v1 < v2);
}
TEST(Vector2DTestSuite, lessThanTest02) {
    Vector2D v1(7, 14);
    Vector2D v2(5, 5);

    EXPECT_FALSE(v1 < v2);
}

// GREATER THAN OPERATOR TEST ">" 
TEST(Vector2DTestSuite, greaterThanTest01) {
    Vector2D v1(5, 5);
    Vector2D v2(3, 5);

    EXPECT_TRUE(v1 > v2);
}
TEST(Vector2DTestSuite, greaterThanTest02) {
    Vector2D v1(3, 9);
    Vector2D v2(6, 12);

    EXPECT_FALSE(v1 > v2);
}
// LESS THAN OR EQUAL TO TEST "<="

TEST(Vector2DTestSuite, lessThanOrEqualTest01) {
    Vector2D v1(5, 5);
    Vector2D v2(5, 5);

    EXPECT_TRUE(v1 <= v2);
}
TEST(Vector2DTestSuite, lessThanOrEqualTest02) {
    Vector2D v1(7, 14);
    Vector2D v2(5, 5);

    EXPECT_FALSE(v1 <= v2);
}
TEST(Vector2DTestSuite, lessThanOrEqualTest03) {
    Vector2D v1(3, 4);
    Vector2D v2(5, 5);

    EXPECT_TRUE(v1 <= v2);
}

// GREATER THAN OR EQUAL TO TEST ">="

TEST(Vector2DTestSuite, greaterThanOrEqualTest01) {
    Vector2D v1(5, 5);
    Vector2D v2(5, 5);

    EXPECT_TRUE(v1 >= v2);
}
TEST(Vector2DTestSuite, greaterThanOrEqualTest02) {
    Vector2D v1(7, 14);
    Vector2D v2(5, 5);

    EXPECT_TRUE(v1 >= v2);
}
TEST(Vector2DTestSuite, greaterThanOrEqualTest03) {
    Vector2D v1(3, 4);
    Vector2D v2(5, 5);

    EXPECT_FALSE(v1 >= v2);
}


