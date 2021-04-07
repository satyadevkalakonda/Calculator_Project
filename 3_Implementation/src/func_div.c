#include<stdio.h>
#include "header.h"


error divv(calc_arthmetic n,result* answer)
{
    if(n.num_2==0 || n.num_2==0)
    {
       
        return ERROR_DIV_ZERO;
    }
    else
    {
    answer->final_answer=(int) n.num_1/n.num_2;
    return SUCCESS;
    }
}