#include <stdio.h>
#include <math.h>

int main(){

    const float PI = 3.14159;
    float r, circum, area;

    printf("\n\nPlease enter r : ");
    scanf("%f", &r );

    circum = 2*PI*r;
    area = PI*r*r;

    printf("\n\nCircumference of circle is : %f", circum );
    printf("\n\nArea of circle is : %f", area );

    return 0 ;


}