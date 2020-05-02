/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

/* Test isPalindrome */
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Ba");
    ASSERT_FALSE(actual);
}

/* Test sortDescending */
TEST(PracticeTest, simple_sort)
{
    Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
	obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}