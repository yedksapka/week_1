#include <stdio.h>

int main(){

    int num;

    printf("\n\nPlease enter an integer : ");
    scanf("%d", &num);

    puts( num%2 == 0 ? "\n\nThis is even integer" : "\n\nThis is odd integer");

    return 0;
}