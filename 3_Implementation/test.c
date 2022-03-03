#include "fun.h"
#include "unity.h"
#include "unity_internals.h"

void setUp(){}
void tearDown(){}



void test_sum(void)
{
TEST_ASSERT_EQUAL_DOUBLE(2.0,sum(1.0,1.0));
}
void test_product(void)
{
TEST_ASSERT_EQUAL_DOUBLE(2.0,product(2.0,1.0));
}
void test_division(void)
{
TEST_ASSERT_EQUAL_DOUBLE(2.0,division(6.0,3.0));
}
void test_subtraction(void)
{
TEST_ASSERT_EQUAL_DOUBLE(4.0,subtraction(6.0,2.0));
}
void test_fact(void)
{
TEST_ASSERT_EQUAL_INT(120,fact(5));
}
void test_square(void)
{
TEST_ASSERT_EQUAL_DOUBLE(4.0,square(2.0));
}
void test_squareroot(void)
{
TEST_ASSERT_EQUAL_DOUBLE(5.0,squareroot(25.0));
}
void test_qube(void)
{
TEST_ASSERT_EQUAL_DOUBLE(8.0,qube(2.0));
}


int main()
{ UNITY_BEGIN();

  RUN_TEST(test_sum);
  RUN_TEST(test_product);
  RUN_TEST(test_division);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_fact);
  RUN_TEST(test_squareroot);
  RUN_TEST(test_square);
  RUN_TEST(test_qube);


 

  return UNITY_END();
}