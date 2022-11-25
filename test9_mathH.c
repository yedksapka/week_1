//    math.h

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = abs(-100);
    double G = log(3);
    double H = cos(60*(3.14159/180.0));  //radyan cinsinden girilien x sayısının kosinüs değerini hesaplar
    double I = sin(30*(3.14159/180.0));  //radyan cinsinden girilien x sayısının sinüs değerini hesaplar
    double J = tan(45*(3.14159/180.0));  //radyan cinsinden girilien x sayısının tanjant değerini hesaplar


    //trigonometrik fonksiyonların doğru değeri vermesi için (3.14159/180.0) ile çarpılmalıdır.


    printf("\n\n%lf\n", A);
    printf("%lf\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    printf("%lf\n", F);
    printf("%lf\n", G);
    printf("%lf\n", H);
    printf("%lf\n", I);
    printf("%lf\n", J);

    return 0;

}