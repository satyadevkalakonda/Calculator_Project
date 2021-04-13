#include<stdio.h>
#include "header.h"
#include "unity.h"
#include<math.h>
#include<stdlib.h>

calc_arthmetic value;
static result ans={0};
calc_st valuee;
static result_t anss={0};

void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_add(void)
{
    /**
     * @brief Requirement based test case for addition
     * 
     */
    value.num_1=200;
    value.num_2=100;
    add(value,&ans);
	TEST_ASSERT_EQUAL(300,ans.final_answer);

  /**
   * @brief scenario based test case for addition
   * 
   */
    value.num_1=20*2;
    value.num_2=-9+5;
    add(value,&ans);
    TEST_ASSERT_EQUAL(36,ans.final_answer);
   
   /**
   * @brief boundary based test case for addition
   * 
   */
    value.num_1=-99999;
    value.num_2= 99999;
    add(value,&ans);
    TEST_ASSERT_EQUAL(0,ans.final_answer);

}
void test_sub(void)
{
    /**
     * @brief Requirment based test case for substraction
     * 
     */
    value.num_1=15;
    value.num_2=5;
    sub(value,&ans);
	TEST_ASSERT_EQUAL(10,ans.final_answer);


    /**
     * @brief Scenario based test case for substraction
     * 
     */
    value.num_1=15*82;
    value.num_2=-5+28;
    sub(value,&ans);
	TEST_ASSERT_EQUAL(1207,ans.final_answer);

    /**
     * @brief Boundary based test case for substraction
     * 
     */
    value.num_1=88889;
    value.num_2=77778;
    sub(value,&ans);
	TEST_ASSERT_EQUAL(11111,ans.final_answer);


}
void test_mul(void)
{
    /**
     * @brief Requirment Based test case for multiplication
     * 
     */
    value.num_1=159;
    value.num_2=286;
    mul(value,&ans);
	TEST_ASSERT_EQUAL(45474,ans.final_answer);

    /**
     * @brief Scenario Based test case for multiplication
     * 
     */
    value.num_1=-15;
    value.num_2=-26;
    mul(value,&ans);
	TEST_ASSERT_EQUAL(390,ans.final_answer);

    /**
     * @brief Boundary Based test case for multiplication
     * 
     */
    value.num_1=9999;
    value.num_2=6666;
    mul(value,&ans);
	TEST_ASSERT_EQUAL(66653336,ans.final_answer);


}
void test_div(void)
{
    /**
     * @brief requirment based test case for divison
     * 
     */
    
    value.num_1=3888;
    value.num_2=24;
    divv(value,&ans);
	TEST_ASSERT_EQUAL(162,ans.final_answer);


    /**
     * @brief Boundary based test case for divison
     * 
     */
    
    value.num_1=9999;
    value.num_2=3;
    divv(value,&ans);
	TEST_ASSERT_EQUAL(3333,ans.final_answer);


}

void test_log(void)
{
    /**
     * @brief requirment based test case.
     * 
     */
     valuee.num_1=8869;
     logg(valuee,&ans);
     TEST_ASSERT_EQUAL(3.95,ans.final_answer);

     /**
      * @brief scenario based test case.
      * 
      */
     valuee.num_1=124;
     logg(valuee,&ans);
     TEST_ASSERT_EQUAL(2.09,ans.final_answer);

}

void test_sqrt(void)
{
    /**
     * @brief requirment based
     * 
     */
    valuee.num_1=24;
    sqrtt(valuee,&ans);
    TEST_ASSERT_EQUAL(4.90,ans.final_answer);
    /**
     * @brief scenario based
     * 
     */
    valuee.num_1=45*32;
    sqrtt(valuee,&ans);
    TEST_ASSERT_EQUAL(37.95,ans.final_answer);
    /**
     * @brief boundary based
     * 
     */
    valuee.num_1=9999;
    sqrtt(valuee,&ans);
    TEST_ASSERT_EQUAL(99,ans.final_answer);
}

void test_power(void)
{
    /**
     * @brief Requirment based
     * 
     */
    value.num_1=5;
    value.num_2=20;
    power(value,&ans);
    TEST_ASSERT_EQUAL(95367433551872,ans.final_answer);

    /**
     * @brief Scenario based
     * 
     */
    value.num_1=2*2;
    value.num_2=4;
    power(value,&ans);
    TEST_ASSERT_EQUAL(256,ans.final_answer);
}

void test_sin(void)
{
    /**
     * @brief requirment based
     * 
     */
    valuee.num_1=10;
    sinn(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);
    /**
     * @brief Boundary based
     * 
     */
    valuee.num_1=1000;
    sinn(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);
}
void test_cos(void)
{
    /**
     * @brief requirement based
     * 
     */
    valuee.num_1=9;
    coss(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);
    /**
     * @brief boundary based
     * 
     */
    valuee.num_1=8888;
    coss(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);

}

void test_tan(void)
{
    /**
     * @brief requirment based
     * 
     */
    valuee.num_1=6;
    tann(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);
    /**
     * @brief Boundary based
     * 
     */
    valuee.num_1=5555;
    coss(valuee,&anss);
    TEST_ASSERT_EQUAL(99,ans.final_answer);

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
    RUN_TEST(test_log);
    RUN_TEST(test_sqrt);
    RUN_TEST(test_sin);
    RUN_TEST(test_cos);
    RUN_TEST(test_tan);
	return UNITY_END();
}
