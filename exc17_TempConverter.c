#include <stdio.h>

int main(){

    float celcius, fahrenheit;
    char choice;

    printf("\n\nMake a choice!\n");
    printf("1) C -> F\n");
    printf("2) F -> C\n\n\n");
    scanf("%c", &choice);

    switch(choice){
        case '1':
        printf("\nPlease enter a Celcius Temp : ");
        scanf("%f", &celcius);
        fahrenheit = (celcius*(9/5)) + 32;

        printf("\n%.2f Celcius equals %.2f Fahrenheit", celcius, fahrenheit);
        break;




        case '2':
        printf("\nPlease enter a Fahrenheit Temp : ");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit-32)*5/9;

        printf("\n%.2f Fahrenheit equals %.2f Celcius", fahrenheit, celcius);
        break;



        default:
        printf("Please enter valid value");

    }


    return 0 ;


}