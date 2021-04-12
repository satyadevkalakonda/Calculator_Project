#include<stdio.h>
#include<stdlib.h>
#include"header.h"

static result_t ans={0};

void trignometric_menu()
{
    calc_st value;
    int choice=-1;
    int local_value1;
    printf("\n1. Sin\n2. Cos\n3. Tan\n4. Exit\n");
    scanf("%d",&choice);
    if(choice>=1 && choice<=4)
    {
        /**
         * @brief Construct a new if object
         * 
         */
        if(choice==4)
        {
            exit(0);
        }
        printf("\nEnter the value \n");
        scanf("%d",&local_value1);
        value.num_1=local_value1;
        switch(choice)
        {
            /**
             * @brief switch case for the performing required operation
             * 
             */
            case SIN:
            sinn(value,&ans);
            printf("\nThe Sin value is : %.2f",ans.final_answer);
            printf("\n");
            break;

            case COS:
            coss(value,&ans);
            printf("\nThe cos value is: %.2f",ans.final_answer);
            printf("\n");
            break;

            case TAN:
            tann(value,&ans);
            printf("\nThe tan value is: %.2f",ans.final_answer);
            printf("\n");
            break;

            case EXIT:
            printf("\nClosing the application...");
            exit(0);
            break;

            default:
            exit(0);

        }
    }
    else
    {
        printf("\n Wrong choice, Try again\n");
    }
}
