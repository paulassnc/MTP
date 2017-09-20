#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
   float b,c,a;
   printf("Entre com o valor do numero a base desejada:");
   scanf("%f,%f", &b, &c);
   a= log(b)/log(c);
   printf("O logaritmo do numero daquela base e = %f\n", a);
   return EXIT_SUCCESS;
   }

