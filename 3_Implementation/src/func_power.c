#include<stdio.h>
#include "header.h"
#include<math.h>

error power(calc_arthmetic n,result* answer)
{
    answer->final_answer=pow(n.num_1,n.num_2);
    return SUCCESS;
}