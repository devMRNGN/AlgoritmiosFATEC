#include <stdlib.h>
#include <stdio.h>
int main(void){
system("color 4");
    int tam;
    printf("\nTamanho: ");
    scanf("%d",&tam);
    int vetor[tam];
    int metade = tam/2;
    for(int i = 0; i < metade; i++){
        printf("\nInforme um numero: ");
        scanf("%d",&vetor[i]);
    }
    int posicao;
    printf("\nescolha uma posicao para ver o valor: \n");
    scanf("%d",&posicao);
    printf("\n%d",vetor[posicao]);

    int localizar;
    printf("\nQual deseja localizar: ");
    scanf("%d",&localizar);
    for(int i = 0; i < metade; i++){
        if(vetor[i] == localizar){
            printf("\n--Valor existente no array--\nindice = %d\nvalor = %d\n",i,vetor[i]);
        } else {
            printf("\n--Valor inexistente no array--");
        }
    }
system("pause");
return 0;
}
