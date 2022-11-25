//Separating Digits in an Integer

/* 
Write a program that inputs one five-digit number,
separates the number into its individual digits and
prints the digits separated from one another by three
spaces each. [Hint: Use combinations of integer division
and the remainder operation] 
*/

#include <stdio.h>
int main()
{

    int n1, n2, n3, n4, n5, n6;

    printf("Please enter 5 digits number");

    scanf("%d", &n1 );

    while(1){
        if(n1<10000 || n1>99999){
            printf("Invalid data\n Please try again : ");
            scanf("%d", &n1);
        }
        else break;
    }

    n2 = (n1/1)%10;
    n3 = (n1/10)%10;
    n4 = (n1/100)%10;
    n5 = (n1/1000)%10;
    n6 = (n1/10000)%10;


    printf("%d   %d   %d   %d   %d", n6, n5, n4, n3, n2 );

    return 0;
}