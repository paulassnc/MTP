#include<stdio.h>
int main(){
    int b, p,i;
    int r=1;
    printf("Digite o valor da base:");
    scanf("%d",&b); getchar();
    printf("Digite o valor da potencia:");
    scanf("%d",&p); getchar();
    for(i=0;i<p;i++){
    r= r*b;
    }
    printf("O resultado e :%d",r);
    return 0;
    }
