//scanf funtion
//addind two integer

#include <stdio.h>
int main(void)
{

    int integer1; //first number to be entered by user
    int integer2; //second number to be entered by user

    /*integer1 and integer2 is name of variable */
    /*we can use ((int integer1, integer 2;)) instead of this*/

    printf("Please enter first integer\n");
    scanf("%d", &integer1); //the letter d stands for “decimal integer”

    printf("Please enter second integer\n");
    scanf("%d", &integer2);

    int sum; //sum of two integer
    sum = integer1 + integer2;
    printf("Sum is %d\n", sum);

    return 0;
    
}