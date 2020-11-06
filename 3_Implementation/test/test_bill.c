#include "unity.h"
#include "bill.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test1_bill(void)
{
  TEST_ASSERT_EQUAL(24, bill(8));
}
void test2_bill(void)
{
  TEST_ASSERT_EQUAL(175, bill(25));
}
void test3_bill(void)
{
  TEST_ASSERT_EQUAL(357, bill(42));
}
void test4_bill(void)
{
  TEST_ASSERT_EQUAL(800, bill(80));
}
void test5_bill(void)
{
  TEST_ASSERT_EQUAL(2134, bill(194));
}
void test6_bill(void)
{
  TEST_ASSERT_EQUAL(4272, bill(356));
}
void test7_bill(void)
{
  TEST_ASSERT_EQUAL(7059, bill(543));
}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test1_bill);
  RUN_TEST(test2_bill);
  RUN_TEST(test3_bill);
  RUN_TEST(test4_bill);
  RUN_TEST(test5_bill);
  RUN_TEST(test6_bill);
  RUN_TEST(test7_bill);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

