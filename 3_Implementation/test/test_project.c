#include<stdio.h>
#include "header.h"
#include "unity.h"
#include<math.h>
#include<stdlib.h>

calc_arthmetic value;
static result ans={0};

void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_sub(void)
{
    /**
     * @brief test case for substraction
     * 
     */
    value.num_1=15;
    value.num_1=5;
    sub(value,&ans);
	TEST_ASSERT_EQUAL(10,ans.final_answer);
}
void test_add(void)
{
    /**
     * @brief test case for substraction
     * 
     */
    value.num_1=200;
    value.num_1=100;
    add(value,&ans);
	TEST_ASSERT_EQUAL(300,ans.final_answer);
}
void test_mul(void)
{
    /**
     * @brief test case for multiplication
     * 
     */
    value.num_1=159;
    value.num_1=286;
    mul(value,&ans);
	TEST_ASSERT_EQUAL(45474,ans.final_answer);
}
void test_div(void)
{
    /**
     * @brief test case for divison
     * 
     */
    
    value.num_1=386;
    value.num_1=24;
    divv(value,&ans);
	TEST_ASSERT_EQUAL(15,ans.final_answer);
}


int main()
{
	/**
	 * @brief Construct a new unity begin object
	 * 
	 */
	UNITY_BEGIN();

    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    RUN_TEST(test_div);
	return UNITY_END();
}
