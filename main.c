#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num1, num2, result;
    char option;
do {
    printf("\nwhat operation do you want to do?\n");
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    scanf("%d", &n);
    printf("Please enter a number\n");
    scanf("%d", &num1);
    printf("Please enter a second number\n");
    scanf("%d", &num2);
    switch(n)
    {
        case 1:result=num1+num2;
            printf("Addition of two numbers is %d", result);
            break;
        case 2:result=num1-num2;
            printf("Subtraction of two numbers is %d", result);
            break;
        case 3:result=num1*num2;
            printf("Multiplication of two numbers is %d", result);
            break;
        case 4:result=num1/num2;
            printf("Division of two numbers is %d", result);
            break;
        default:printf("Wrong input!");
    }
    printf("\n do you want to continue y/n?\n");
    option=getche();
} while(option=='y');
    return 0;
}
