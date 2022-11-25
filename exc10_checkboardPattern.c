//checkboard pattern


/* 
Display the following checkerboard 
pattern with six printf statements and then 
display the same pattern with as few 
printf statements as possible.
*/

#include <stdio.h>
int main(){

    char pat1[1000], pat2[1000], pat3[1000], pat4[1000], pat5[1000], pat6[1000];

    printf("\n\nPlease enter your patter in 6 string\n\n\n\n");

    gets( pat1 );
    gets( pat2 );
    gets( pat3 );
    gets( pat4 );
    gets( pat5 );
    gets( pat6 );

    printf("\n\n\n\n\n%s\n", pat1 );
    printf("%s\n", pat2 );
    printf("%s\n", pat3 );
    printf("%s\n", pat4 );
    printf("%s\n", pat5 );
    printf("%s\n", pat6 );
    
    return 0;

}