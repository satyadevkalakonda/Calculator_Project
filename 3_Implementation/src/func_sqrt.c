#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief sqrt function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */
error sqrtt(calc_st n,result* answer)
{
    answer->final_answer=sqrt(n.num_1);
    return SUCCESS;
}