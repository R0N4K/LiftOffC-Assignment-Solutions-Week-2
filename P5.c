//Write a program to print given patterns using loops

#include<stdio.h>

int main()

{
    for (int R = 1; R <= 5; R ++)

    {

        for (int O = 1; O <= 5; O ++)

        {

            if (R == O || (R + O == 6))

                printf("*");

            else

                printf(" ");
        }
        
        printf("\n");
    }
}
