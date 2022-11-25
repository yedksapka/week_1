//final velocity
//total travelled distance

#include <stdio.h>

int main()
{

    int u;
    int a;
    int t;


    printf("\n\n\nWelcome to final velocity and total travelled distance calculator\n\n");


    printf("Please enter initial velocity(m/s)=");
    scanf("%d", &u );

    printf("\n\nPlease enter acceleration(m/s^2)=");
    scanf("%d", &a );

    printf("\n\nPlease enter elapsed time(s)=");
    scanf("%d", &t );

    int v;
    int x;

    v = u+a*t;
    x = u*t+(a*t*t)/2;

    printf("\n\n\nFinal velocity is %d m/s\n\n", v );
    printf("Total distance travelled is %d meter\n\n", x );

    return 0;


}