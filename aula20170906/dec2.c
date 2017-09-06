#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int n,cont=0;
    printf("Entre com um numero divisor de 8192:");
    scanf("%d",&n); getchar();
    if(n%8192){
        printf("Não e divisor!");
    }

    else{
        printf("E divisor!");
    cont++;

    }


return 0;
}
int main() {
    srand(time(0)); //semente
    int x = rand()%100;3
    int menor = 1328, maior=1360;
    int y = 1328 + rand()%(maior-menor+1);
    printf("Entre 0 e 99: %d\n", x);
    printf("Entre 101 e 293: %d\n", y);
    return 0;
    }

