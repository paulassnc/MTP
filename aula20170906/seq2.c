#include<stdio.h>
int main(){
    float b,h,areatriangulo;
    printf("Entre com a base do triangulo:");
    scanf("%f",&b);getchar();
    printf("Entre com a altura do triangulo:");
    scanf("%f",&h);getchar();
    printf("%.3f\n", areatriangulo);
    areatriangulo = (b*h)/2;
    printf("Area do triangulo: %.3f\n", areatriangulo);



return 0;
}


