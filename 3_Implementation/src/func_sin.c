#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"header.h"

error sinn(calc_st n,result_t* answer)
{
     answer->final_answer=sin((n.num_1*3.14159)/180);
     return SUCCESS;
}