#include"impedance.h"
#include "unity.h"
#include<stdlib.h>
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_rs(void);
void test_rp(void);
void test_cs(void);
void test_cp(void);
void test_is(void);
void test_ip(void);
void test_rlcs(void);
void test_rlcp(void);
void test_rf(void);

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_rs);
  RUN_TEST(test_rp);
  RUN_TEST(test_cp);
  RUN_TEST(test_cs);
  RUN_TEST(test_is);
  RUN_TEST(test_ip);
  RUN_TEST(test_rlcs);
  RUN_TEST(test_rlcp);
  RUN_TEST(test_rf);
  /* Close the Unity Test Framework */
  return UNITY_END();
}
float a[5]={10,20,30,40,50};

void test_rs(void)
{
    TEST_ASSERT_EQUAL(150,riscp(5,a));
}
void test_rp(void)
{
    TEST_ASSERT_EQUAL(4.38,ripcs(5,a));
}
void test_cs(void)
{
    TEST_ASSERT_EQUAL(4.38,ripcs(5,a));
}
void test_cp(void)
{
    TEST_ASSERT_EQUAL(150,riscp(5,a));
}
void test_is(void)
{
    TEST_ASSERT_EQUAL(150,riscp(5,a));
}
void test_ip(void)
{
    TEST_ASSERT_EQUAL(4.38,ripcs(5,a));
}
void test_rlcs(void)
{
    TEST_ASSERT_EQUAL(628.3965,RLCS(10,10,10,10));
}
void test_rlcp(void)
{
    TEST_ASSERT_EQUAL(0.0016,RLCP(10,10,10,10));
}
void test_rf(void)
{
    TEST_ASSERT_EQUAL(0.015913,resfreq(10,10));
}