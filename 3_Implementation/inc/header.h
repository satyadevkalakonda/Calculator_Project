#ifndef __header_h__
#define __header_h__

typedef struct calc_arthmetic
{
    /**
     * @brief structure for arthmetic operations
     * 
     */
    float num_1;
    float num_2;
} calc_arthmetic;

typedef struct result
{
    /**
     * @brief structure for result
     * 
     */
    float final_answer;
    
}result;

typedef struct calc_st
{
    /**
     * @brief strcture for calculating specific operations
     * 
     */
    float num_1;
}calc_st;

typedef enum error
{
    /**
     * @brief Enum for unit testing the functions
     * 
     */
    SUCCESS=1,
    FAIL=0,
    ERROR_DIV_ZERO=-1
}error;

enum naming_arthemetic
{
    /**
     * @brief Naming values to the variables
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
    /**
     * @brief Naming values to the variables
     * 
     */
    LOG=1,
    POWER=2,
    SQRT=3
};
enum naming_trigo
{
    /**
     * @brief Naming values to the variables
     * 
     */
    SIN=1,
    COS=2,
    TAN=3
};

typedef struct result_t
{
    double final_answer;
}result_t;

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
error sinn(calc_st n,result_t* answer);
error coss(calc_st n,result_t* answer);
error tann(calc_st n,result_t* answer);
#endif