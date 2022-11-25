//BMI Calculator

#include <stdio.h>
int main(){

    float kg, m, bmi;

    printf("\n\n\nPlease enter your weight(kg)= ");
    scanf("%f", &kg );

    printf("\n\nPlease enter your height(m)= ");
    scanf("%f", &m );

    bmi=(kg)/(m*m);

    printf("\n\nBMI VALUES\n\nUnderweight: less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\nObese: 30 or greater\n\n\n");


    printf("Your BMI value is %f\n\n\n", bmi );


    if( bmi < 18.5 ){
        printf("You are underweight");

    }
    else{
        if ( bmi <= 24.9 ){
            printf("Your value is normal");
        }
        else{
            if ( bmi <= 29.9 ){
                printf("You are overweight");
            }
            else{
                printf("You are obese");
            }

        }
    }

    return 0;



}