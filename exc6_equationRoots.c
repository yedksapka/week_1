#include <stdio.h>
#include <math.h>

int main()
{
    printf("\n\nWelcome to root finder\n");
    printf("Plese enter your equation like ax^2+bx+c=0\n");

    float a, b, c;

    printf("\nWhat is a=");
    scanf("%f", &a );

    printf("\n\nWhat is b=");
    scanf("%f", &b );

    printf("\n\nWhat is c=");
    scanf("%f", &c );



    float D;
    float D2;

    float x1, x2;

    D = b*b - 4*a*c;
    D2 = sqrt(D);

    printf("\n\nThe discriminant is %f\n\n", D );



    if ( D > 0 ){

        printf("There are 2 root of equation\n\n");

        x1 = ( -b + D2 )/2*a;
        x2 = ( -b - D2 )/2*a;

        printf("Roots are %f and %f\n\n", x1, x2 );

    }



    if ( D == 0 ){

        printf("There is only 1 root of equation\n\n");

        x1 = ( -b + D2 )/2*a;

        printf("The root is %f\n", x1 );

    }


    if ( D < 0){

        printf("There is no root of equation\n\n");
    }

    return 0;

}