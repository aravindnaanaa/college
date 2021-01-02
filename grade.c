#include <stdio.h>

int main (void)
{
    int a;

    // get mark
    printf("Enter the mark = ");
    scanf("%d",&a);

    // check for O grade
    if(a>90 && a<=100)
    {
        printf("Your grade is 'O'\n");
    }

    // check for A+ grade
    else if (a<=90 && a>80)
    {
        printf("Your grade is 'A+'\n");
    }

    // check for A grade
    else if (a<=80 && a>70)
    {
        printf("Your grade is 'A'\n");
    }

    // check for B+ grade
    else if (a<=70 && a>60)
    {
        printf("Your grade is 'B+'\n");
    }

    // check for B grade 
    else if (a<=60 && a>=50)
    {
        printf("Your grade is 'B'\n");
    }

    //not in those condition print U
    else
    {
        printf("Your grade is 'U'\n");
    }
    
}