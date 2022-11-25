//Car fee calculator

#include <stdio.h>
#include <math.h>

int main(){

    printf("\n\n\nWelcome to car fee calculator!\n");

    float urb, hgw, fuel, urbc, hgwc, urb1, hgw1, c1, c2, totc;



    printf("\n\nPlease enter urban consumption : ");
    scanf("%f", &urb );

    printf("\nPlease enter highway consumption : ");
    scanf("%f", &hgw );


    printf("\nWhat is current cost of fuel (1 L) : ");
    scanf("%f", &fuel );

    float urbkm, hgwkm;

    printf("\n\nHow many km in urban? : ");
    scanf("%f", &urbkm );
    c1=urb*(urbkm/100)*fuel;

    printf("\nHow many km in highway? : ");
    scanf("%f", &hgwkm );
    c2=(hgwkm/100)*hgw*fuel;

    totc=c1+c2;

    char ask;
    getchar();

    printf("\n\n\nIs there any tollway? (Y/N) : ");
    scanf("%c", &ask );

    float toll, totc1;

    if ( ask == 'Y' ){
        printf("\n\nWhat is cost? : ");
        scanf("%f", &toll );

        totc1=totc+toll;

        printf("\n\nThis trip costs about %f Turkish Lira\n\n", totc1 );

    }


    if ( ask == 'y' ){
        printf("\n\nWhat is cost? : ");
        scanf("%f", &toll );

        totc1=totc+toll;

        printf("\n\nThis trip costs about %f Turkish Lira\n\n", totc1 );

    }
 


    else{
        printf("\n\nThis trip costs about %f Turkish Lira\n\n", totc );
    }

}