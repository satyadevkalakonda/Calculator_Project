#include<stdio.h>
#include "header.h"

/**
 * @brief sub function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error sub(calc_arthmetic n,result* answer)
{
    answer->final_answer=n.num_1-n.num_2;
    return SUCCESS;
}