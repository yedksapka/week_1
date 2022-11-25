//      switch case

#include <stdio.h>
int main(){

    char grade;

    printf("\n\n\nPlease enter a grade : ");
    scanf("%c", &grade );

    switch(grade){
        case 'A':
        printf("Perfect");
        break;

        case 'B':
        printf("Good");
        break;

        case 'C':
        printf("OK");
        break;

        case 'D':
        printf("NOT F");
        break;

        case 'F':
        printf("F");
        break;

        default:
        printf("Please enter only valid grades");

    }

    return 0;

}