#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#define DIM 4

void exercicio2WithFunctions(){
    char frase1[50] = {0};
    char frase2[50] = {0};
    fflush(stdin);
    printf("Digite a frase um: \n");
    gets(frase1);
    fflush(stdin);
    printf("Digite a frase dois: \n");
    gets(frase2);
    if(strlen(frase1) == strlen(frase2)){
        printf("Sao de tamanhos iguais \n");
        if(strcmp(frase1, frase2)== 0){
            printf("E sao identicas \n");
        } else {
            printf("E nao sao identicas");
        }
    } else {
        printf("Sao de tamanhos diferentes \n");
    }
}

void exercicio2(){
    char frase1[50] = {0};
    char frase2[50] = {0};
    int countFrase1, countFrase2 = 0;
    printf("Digite uma frase: \n");
    gets(frase1);
    fflush(stdin);
    printf("Digite outra frase: \n");
    gets(frase2);
    for(int i = 0; i < 50; i++){
        if(frase1[i] !=0){
            countFrase1++;
        } else {
            break;
        }
    }
    for(int i = 0; i < 50; i++){
        if(frase2[i] !=0){
            countFrase2++;
        }else {
            break;
        }
    }
    int iguais = 1;
    if(countFrase1==countFrase2){
        printf("\nAs duas palavras sao de tamanhos iguais\n");
        for(int i = 0; i < countFrase1; i++){
            if(frase1[i] != frase2[i]){
                iguais = 0;
                break;
            }
        }
        if(iguais){
            printf("As palavras sao iguais\n");
        }else{
            printf("As palavras sao diferentes\n");
        }
    } else {
        printf("\nAs duas palavras sao de tamanhos diferentes\n");
    }
}

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
    exercicio2WithFunctions();
    exercicio2();
    elementoputs();
    exercice1();
    return 0;
}
