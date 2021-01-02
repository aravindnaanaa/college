#include <stdio.h>

int main (void)
{
    int a;
    
    //get the year 
    printf("To find the leap year\nEnter the year = ");
    scanf("%d",&a);


    // divide by 4 and cannot divide by 100
    if ( ((a % 4) == 0) && ((a % 100) != 0))
    {
        printf("The given year %d is a leap year\n",a);

    }

    // if the year can divisible by 100 then check it is also divisible by 400 
    else if( ((a % 100) == 0) && ((a % 400) == 0) )
    {
        printf("The given year %d is a leap year\n",a);
    }

    // if those condition fails print its not a leap year
    else   
    {
         printf("The given year %d is NOT a leap year\n",a);
    }
    

}