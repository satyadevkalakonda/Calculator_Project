#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>



static result ans={0};
void arthmetic_menu()
{
    /**
     * @brief arthmetic function to perfrom required  operations
     * 
     */
     calc_arthmetic value;
    
    int choice=-1;
    int local_value1,local_value2;
    printf("\n1. Addition\n2. multiplication\n3. subtraction\n4. Divison\n5. Exit\n");
    scanf("%d",&choice);
    if(choice>=1 && choice<=5)
    {
        /**
         * @brief Construct a new if object
         * 
         */
        if(choice==5)
        {
            exit(0);
        }
        printf("\nEnter the values two values with space \n");
        scanf("%d %d",&local_value1,&local_value2);
        value.num_1=local_value1;
        value.num_2=local_value2;
        switch(choice)
        {
            /**
             * @brief switch case for the performing required operation
             * 
             */
            case ADD:
            add(value,&ans);
            printf("\nThe Sum is : %.2f",ans.final_answer);
            printf("\n");
            break;

            case MUL:
            mul(value,&ans);
            printf("\nThe Multiplication is: %.2f",ans.final_answer);
            printf("\n");
            break;

            case SUB:
            sub(value,&ans);
            printf("\nThe subtraction is: %.2f",ans.final_answer);
            printf("\n");
            break;

            case DIV:
            divv(value,&ans);
            printf("\nThe Divison is: %.2f",ans.final_answer);
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