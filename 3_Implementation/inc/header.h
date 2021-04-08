#ifndef __header_h__
#define __header_h__

typedef struct calc_arthmetic
{
    float num_1;
    float num_2;
} calc_arthmetic;

typedef struct result
{
    float final_answer;
    
}result;

typedef struct calc_st
{
    float num_1;
}calc_st;

typedef enum error
{
    SUCCESS=1,
    FAIL=0,
    ERROR_DIV_ZERO=-1
}error;

enum naming_arthemetic
{
    /**
     * @brief giving values for variables using enum
     * 
     */

    ADD=1,
    MUL=2,
    SUB=3,
    DIV=4,
    EXIT=5
};

enum naming_scientific
{
    LOG=1,
    POWER=2,
    SQRT=3
};


void main_menu(void);
void arthmetic_menu(void);
void scientific_menu(void);
void trignometric_menu(void);
error add(calc_arthmetic n,result* answer);
error sub(calc_arthmetic n,result* answer);
error mul(calc_arthmetic n,result* answer);
error divv(calc_arthmetic n,result* answer);
error logg(calc_st n,result* answer);
error power(calc_arthmetic n,result* answer);
error sqrtt(calc_st n,result* answer);

#endif