#include "inc\fun.h"
#include "unity\unity.h"
#include "unity\unity_internals.h"

void setUp(){}
void tearDown(){}



void test_sum(void)
{
TEST_ASSERT_EQUAL_FLOAT(2.0,sum(1,1));

}
void test_product(void)
{
TEST_ASSERT_EQUAL_FLOAT(2.0,product(2,1));
}
void test_division(void)
{
TEST_ASSERT_EQUAL_FLOAT(2.0,division(6,3));
}
void test_subtraction(void)
{
TEST_ASSERT_EQUAL_FLOAT(4.0,subtraction(6,2));
}
void test_fact(void)
{
TEST_ASSERT_EQUAL_INT(120,fact(5));
}
void test_square(void)
{
TEST_ASSERT_EQUAL_FLOAT(4.0,square(2));
}
void test_squareroot(void)
{
TEST_ASSERT_EQUAL_FLOAT(5,squareroot(25));
}
void test_qube(void)
{
TEST_ASSERT_EQUAL_FLOAT(8.0,qube(2));
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