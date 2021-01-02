#include <stdio.h>

int main (void)
{
    int a, b;

    //intro and get first number 
    printf("To find the biggest amoung two number\nEnter first number = ");
    scanf("%d",&a);

    //get the second number 
    printf("Enter second number = ");
    scanf("%d",&b);

    //finding the biggest number and print the value
    if (a > b)
    {
        printf("The biggest number is %d\n",a);

    }
    else
    {
        printf("The biggest number is %d\n",b);
    }
    
}