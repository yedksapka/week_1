//multiple numbers

#include <stdio.h>
int main()
{
    printf("\n\n\nPlease enter two int");

    int num1, num2;
    printf("\n\nFirst int=");
    scanf("%d", &num1 );

    printf("\n\nSecond int=");
    scanf("%d", &num2 );

    if ( num1%num2==0){
        printf("\n\nFirst int is multiple of second");
    }
    else{
        printf("\n\nFirst int is not multiple of second");
    }

    if ( num2%num1==0 ){
        printf("\n\nSecond int is multiple of first");
    }
    else{
        printf("\n\nSecond int is not multiple of first");
    }

    return 0;

}