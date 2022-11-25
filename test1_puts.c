//test

#include <stdio.h>

int main(){

    int grade;
    char message[] = "This is my last message for you";

    printf("\n\n\nPlease enter your grade : ");
    scanf("%d", &grade );

    if( grade >= 90 ){
        puts( "A" );
    }

    else{
        if(grade>=60){
            puts( "B" );


        }
        else{
            if( grade >= 30 ){
            puts( "C" );
            }
            else{
                if( grade < 30 ){
                    puts("D");
                }
            }
        }

    }

    puts( message );

    return 0;
}