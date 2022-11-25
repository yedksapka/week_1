#include <stdio.h>

int main(){


    int x = 5;
    int y = 2;

    int a,s,d,g,h,j;
    float f;

    a = x+y;
    s = x-y;
    d = x*y;
    f = x/(float)y;
    g = x%y;
    h = x++;
    j = y--;


    printf("\n%d\t%d\t%d\t%.2f\t%d\t%d\t%d\t", a, s, d, f, g, h, j);

    return 0;

}