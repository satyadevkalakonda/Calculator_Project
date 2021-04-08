#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>

void main_menu()
{
    int n;
    printf("\n=======*** WELCOME TO THE SCIENTIFIC CALCULATOR APPLICATION ***======\n");
    printf("1.Arithmetic operations\n");
    printf("2.Scientific operations\n");
    printf("3.Trignometric operations\n");
    scanf("%d",&n);
    if(n==1)
    {
        arthmetic_menu();
    }
    else if(n==2)
    {
        scientific_menu();
    }
    else if(n==3)
    {
        trignometric_menu();
    }
    else
    {
      printf("Wrong choice\n");
      exit(0);
    }
}