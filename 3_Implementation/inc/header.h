#ifndef __header_h__
#define __header_h__

typedef struct calc_arthmetic
{
    int num_1;
    int num_2;
} calc_arthmetic;

typedef struct result
{
    int final_answer;
    
}result;

typedef enum error
{
    SUCCESS=1,
    FAIL=0,
    ERROR_DIV_ZERO=-1
}error;

error add(calc_arthmetic n,result* answer);
error sub(calc_arthmetic n,result* answer);
error mul(calc_arthmetic n,result* answer);
error divv(calc_arthmetic n,result* answer);
#endif