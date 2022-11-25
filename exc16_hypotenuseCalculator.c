#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;

    printf("\n\nPlease enter first value : ");
    scanf("%f", &a);

    printf("\n\nPlease enter second value : ");
    scanf("%f", &b);

    c = sqrt(a*a+b*b);

    printf("\n\n\nHypotenuse is %f", c);
}