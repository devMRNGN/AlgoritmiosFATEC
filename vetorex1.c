#include <stdio.h>
#include <stdlib.h>
int main(void){
system("color 4");
    int vetor[10];
    for(int i = 0; i < 10; i++){
        printf("\nInforme o numero da posicao %d\n", i);
        scanf("%d",&vetor[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("\n%d\n",vetor[i]);
    }

system("pause");
return 0;
}
