#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief logg function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error logg(calc_st n,result* answer)
{
    answer->final_answer=log10(n.num_1);
    return SUCCESS;
}