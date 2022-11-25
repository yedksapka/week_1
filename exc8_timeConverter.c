//time converter

#include <stdio.h>
int main ()
{
    int sec1, sec2, sec3, min1, min2, hr;

    printf("\n\n\nPlease enter elapsed time with second\n\n");
    scanf("%d", &sec1 );

    hr = sec1 / 3600;
    min2 = sec1 %3600;
    min1 = min2 /60;
    sec3 = min2 %60;

    printf("%d :%d: %d", hr, min1, sec3 );
    return 0;


}