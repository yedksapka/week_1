//test2

#include <stdio.h>
int main(){

    printf("\n\n\nPlease enter your grade : ");

    int g;

    scanf("%d", &g );

    if(g>=90){
        puts("A");
    }
    else if(g>=70){
        puts("B");
    }
    else if(g>=40){
        puts("C");
    }
    else if(g<40){
        puts("D");

    }

    return 0;
    

}