#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
   float b,c,d,y1,y2,a;
   printf("Entre com o valor de 2 lados do triangulo e o angulo que eles formam:");
   scanf("%f,%f,%f", &b, &c, &d);
   a= sqrt(pow(b,2)+pow(c,2)-(2*b*c*cos(d)));
   printf("O valor do lado a é = %f\n", a);
   return EXIT_SUCCESS;
   }
