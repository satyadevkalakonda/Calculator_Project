#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"header.h"

error coss(calc_st n,result_t* answer)
{
     answer->final_answer=cos((n.num_1*3.14159)/180);
     return SUCCESS;
}