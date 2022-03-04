#include "unity.h"
#include "problem.h"
void setUp()
{
   
}
void tearDown()
{

} 
void test_BinarytoDecimal(void){
    
    TEST_ASSERT_EQUAL_INT32(5,BinarytoDecimal(101));
    TEST_ASSERT_EQUAL_INT32(12,BinarytoDecimal(1100));
    TEST_ASSERT_EQUAL_INT32(15 ,BinarytoDecimal(1111));

}
void test_HextoDecimal(void){
    
    TEST_ASSERT_EQUAL_INT32(5,HextoDecimal("5"));
    TEST_ASSERT_EQUAL_INT32(12,HextoDecimal("C"));
    TEST_ASSERT_EQUAL_INT32(15,HextoDecimal("F"));

}

int test_main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_BinarytoDecimal);
  RUN_TEST(test_HextoDecimal);
  return UNITY_END();
}