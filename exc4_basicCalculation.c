#include <stdio.h>

int main(void)
{

    printf("\n\n\n\nThis program calculates sum,product,\n\n");
    printf("difference ,quotient and reminder of two number\n\n\n\n\n");

    int num1;
    int num2;

    printf("Please enter first number\n");
    scanf("%d", &num1 );

    printf("Please enter second number\n");
    scanf("%d", &num2 );


    int sum, dif1, dif2, pro, quo1, quo2, rem1, rem2;
    sum = num1 + num2;
    dif1 = num1 - num2;
    dif2 = num2 - num1;
    pro = num1 * num2;
    quo1 = num1 / num2;
    quo2 = num2 / num1;
    rem1 = num1 % num2;
    rem2 = num1 % num2;



    printf("\n\n\n\nSum is %d\n", sum );
    printf("First integer - Second integer is %d\n\n", dif1 );
    printf("Second integer - First integer is %d\n\n", dif2 );
    printf("Product of two integer is %d\n\n", pro );
    printf("First number over Second number is %d\n\n", quo1 );
    printf("Second number over first number is %d\n\n", quo2 );
    printf("Reminder of first to second is %d\n\n", rem1 );
    printf("Reminder of second to first is %d\n\n\n\n", rem2 );


    printf("The calculation is completed succesfully!\n");

    return 0;
    
}