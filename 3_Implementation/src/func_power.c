#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief power function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */
error power(calc_arthmetic n,result* answer)
{
    answer->final_answer=pow(n.num_1,n.num_2);
    return SUCCESS;
}