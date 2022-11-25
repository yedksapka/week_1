

#include <stdio.h>
#include <math.h>

int main(){

    char operator;

    printf("\n\nPlease select the operator (+ - * / e (extraction) and p (power))!\n\n");
    scanf("%c", &operator);

    float num1, num2;
    float result = 0;
    float input;



    if( operator == 'e' ){
        printf("\nPlease enter an integer : ");
        scanf("%f", &num1);

        result = sqrt(num1);

        printf("Result is %.2f\n\n", result);

    }



    else if( operator == 'p' ){
        printf("\nPlease enter base : ");
        scanf("%f", &num1);

        printf("Please enter exponent : ");
        scanf("%f", &num2);

        result = pow(num1, num2);

        printf("Result is %.2f\n\n", result);

    }

    else if( operator == 'E' ){
        printf("\nPlease enter an integer : ");
        scanf("%f", &num1);

        result = sqrt(num1);

        printf("Result is %.2f\n\n", result);

    }



    else if( operator == 'P' ){
        printf("\nPlease enter base : ");
        scanf("%f", &num1);

        printf("Please enter exponent : ");
        scanf("%f", &num2);

        result = pow(num1, num2);

        printf("Result is %.2f\n\n", result);

    }

    else{


        switch (operator){

        case '+':
        while ( input != -1 ){
            input = 0;

            printf("\nPlease enter a value (Press \"-1\" to see the result) :  ");
            scanf("%f", &input);

            result = result + input;

        }

        result = result + 1;
        printf("%.2f\n\n", result);

        break;

        

        case '-':
        printf("\nPlease enter first integer : " );
        scanf("%f", &num1);

        printf("Please enter second integer : " );
        scanf("%f", &num2);

        result = num1 - num2;

        printf("Result is %.2f\n\n", result);
        break;




        case '*':
        result = 1;

        while ( input != -1 ){
            input = 0;

            printf("Please enter a value (Press \"-1\" to see the result) : ");
            scanf("%f", &input);

            result = result * input;

        }
        
        result = result * (-1);
        printf("Result is %.2f\n\n", result);

        break;




        case '/':
        printf("\nPlease enter first integer : ");
        scanf("%f", &num1);

        printf("Please enter second integer : ");
        scanf("%f", &num2);

        result = num1 / num2;

        printf("Result is %.2f\n\n", result);
        break;

        default:
        printf("\n\nPlease enter valid operator!\n\n");


    }
    }

    return 0;


}


