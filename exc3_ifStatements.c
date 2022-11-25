//if statements

#include <stdio.h>
int main(void){

    printf("Please enter first integar\n");

    int num1;
    int num2;

    scanf("%d", &num1 );
    
    printf("Please enter second integar\n");
    scanf("%d", &num2 );



    if ( num1 == num2 ) {
        printf("%d equals %d\n", num1, num2 ); //num2 ve ) arası boşluk burakılmalı

    }



    if ( num1 != num2 ){
        printf("%d not equeal %d\n", num1, num2 );

    }



    if ( num1 > num2 ){
        printf("%d greater than %d\n", num1, num2 );

    }


    if ( num1 < num2 ){
        printf("%d greater than %d\n", num2 ,num1 );

    }
    


    return 0;
}