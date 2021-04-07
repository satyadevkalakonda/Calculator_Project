#include<stdio.h>
#include "header.h"


error sub(calc_arthmetic n,result* answer)
{
    answer->final_answer=n.num_1-n.num_2;
    return SUCCESS;
}