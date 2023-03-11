#include <stdio.h>
#include <stdlib.h>
#define DIM 4

void manhaVetor(){
    int vetor[100] = {0}; // Zera as 100 posições de um vetor, caso possua virgula e mais dados, atribui as primeiras
    for(int i = 0; i < 100; i++){
        printf("%d - ",vetor[i]);
    }
    int vetor2[] = {1,2,7};

    return 0;
}

void defineVetor(){
    int vetor[DIM] = {0}; // arr de 10 posições definidas no DIM;
    for(int i = 0; i < DIM; i++){
        printf("%d - ",vetor[i]);
    }
}

void exercice1(){
    int va[DIM];
    int vb[DIM];
    for(int i = 0; i < DIM; i++){
        printf("\nDigite um numero: ");
        scanf("%d",&va[i]);
        if(i % 2 == 0){
            vb[i] = va[i] * 5;
        } else {
            vb[i] = va[i] + 5;
        }
    }
    for(int i = 0; i < DIM; i++){
        printf("[%d]",va[i]);
    }
    printf("\n");
    for(int i = DIM; i > 0; i--){
        printf("[%d]",vb[i]);
    }
}

void elementoputs(){
    // Sempre que precisar apenas imprimri um conteudo de uma variavel texto, use puts
    // EX:
    char texto[20] = "Testando puts";
    puts(texto); // aqui ja estou imprimindo, não preciso por mascará e nem nd
    printf("%s",texto); // aqio a mesma coisa com printf
    // Outro exemplo
    char texto2[15];
    fflush(stdin);
    printf("\nDigite um texto qualquer");
    gets(texto2); // Sempre que for ler uma string, utilize gets -> gets string, unica função é ler string
    puts(texto2);
}

int main(){
    elementoputs();
    exercice1();
    return 0;
}
