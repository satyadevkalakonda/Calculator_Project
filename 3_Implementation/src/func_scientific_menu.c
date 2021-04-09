#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"header.h"



static result ans={0};
void scientific_menu()
{
    /**
     * @brief 
     * 
     */
    calc_st value;
    calc_arthmetic valuee;
    int choice=-1;
    int local_value1;
    int local_value2;
    printf("\n1. Log10\n2. Power\n3. square-root\n4. Exit\n");
    scanf("%d",&choice);
    if(choice>=1 && choice<=4)
    {
        if(choice==4)
        {
            exit(0);
        }
       else if(choice==1 || choice==3)
        {
        printf("\nEnter the  value to calculate : \n");
        scanf("%d",&local_value1);
        value.num_1=local_value1;
        }
        else if(choice==2)
        {
            
             printf("\nEnter the  two values with space \n");
             scanf("%d %d",&local_value1,&local_value2);
             valuee.num_1=local_value1;
             valuee.num_2=local_value2;
        }
        switch(choice)
        {
            case LOG:
            logg(value,&ans);
            printf("%.2f",ans.final_answer);
            break;

            case POWER:
            power(valuee,&ans);
            printf("%.2f",ans.final_answer);
            break;
            
            case SQRT:
            sqrtt(value,&ans);
            printf("%.2f",ans.final_answer);

            default:
            exit(0);
        }
    }
    else
    {
        printf("\n Wrong choice, Try again\n");
    }

}