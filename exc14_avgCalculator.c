#include <stdio.h>

int main(){
    
    int counter = 1;
    int total = 0;
    int grade, student;
    float avg;

    printf("\n\nHow much student : ");
    scanf("%d", &student);


    if(student == 0 )
    {
         while (counter <= student){

        grade = 0;
        printf("\n\nPlease enter a grade : ");
        scanf("%d", &grade);
        total = total+ grade;
        counter = counter +1;         
        }

    }

    else{
        printf("No grades were entered");
        
    }

    avg = total /counter;

    printf("The average is %f\n\n", avg);


    

    return 0;

    
}