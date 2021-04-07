#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void main_menu(void);
void arthmetic_menu(void);
void trignometric_menu(void);
enum naming
{
    ADD=1,
    MUL=2,
    SUB=3,
    DIV=4,
    EXIT=5
};
int main()
{
    while(1)
    {
        main_menu();
    }    
}

void main_menu()
{
    int n;
    printf("\n=======*** WELCOME TO THE CALCULATOR APPLICATION ***======\n");
    printf("1.Arthmetic operations\n");
    printf("2.Trignometric operations\n");
    scanf("%d",&n);
    if(n==1)
    {
        arthmetic_menu();
    }
    else if(n==2)
    {
        trignometric_menu();
    }
    else
    {
      printf("Wrong choice\n");
      exit(0);
    }
}
void arthmetic_menu()
{
    calc_arthmetic value;
    result ans={0};
    int choice=-1;
    int local_value1,local_value2;
    printf("\n1. Addition\n2. multiplication\n3. subtraction\n4. Divison\n5. Exit\n");
    scanf("%d",&choice);
    if(choice>=1 && choice<=5)
    {
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
            case ADD:
            add(value,&ans);
            printf("\nThe Sum is : %d",ans.final_answer);
            printf("\n");
            break;

            case MUL:
            mul(value,&ans);
            printf("\nThe Multiplication is: %d",ans.final_answer);
            printf("\n");
            break;

            case SUB:
            sub(value,&ans);
            printf("\nThe subtraction is: %d",ans.final_answer);
            printf("\n");
            break;

            case DIV:
            divv(value,&ans);
            printf("\nThe Divison is: %d",ans.final_answer);
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
        //system("clear");
    }

}
void trignometric_menu()
{
    //
}