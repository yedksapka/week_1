//arithmatichal value

#include <stdio.h>
int main(){

    int n1, n2, n3;
    printf("sayı gir");
    scanf("%d %d %d", &n1, &n2, &n3 );

    int sum, avg, pro, smallest, largest;
    sum = n1+n2+n3;
    avg = sum/3;
    pro = n1*n2*n3;

    printf("\n\n\nthe sum%d \navg%d\npro %d\n", sum , avg ,pro );

    int big, smal;

    if ( n1 > n2 ){
        if ( n1 > n3 ){
            big = n1;
            if ( n2 > n3 ){
                smal = n3;
            }
            else{
                smal = n2;
            }
        
        }
        else{ 
            big = n3;
            smal = n2;
           }

    }
    else {
        if ( n2 > n3 ){
            big = n2;
            if ( n1 > n3 ){
                smal = n3;

            }
            else{
                smal = n1;
            }
        }

        else{
            big = n3;
            smal = n1;

        }

    
    }

    printf("\n\n\n%d %d", big, smal );


    return 0;


}