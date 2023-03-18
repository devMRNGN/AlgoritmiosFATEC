#include <stdio.h>
#include <stdlib.h>

void imprimirPares(){
    /* Escreva um programa que imprima todos os números pares de 0 a 100
        usando a estrutura de repetição for */
    for(int i = 0; i <= 100; i=i+2){
        printf("[ %d ]  ", i);
    }
}

void tabuada(){
    /* Escreva um programa que peça ao usuário para digitar um número e imprima
    a tabuada desse número até 10 usando a estrutura de repetição while.*/
    int numero;
    int i = 1;
    printf("\nDigite um numero: ");
    scanf("%d",&numero);
    while(i <= 10){
        printf("%d x %d = [ %d ]\n",numero,i,numero*i);
        i++;
    }
}

void calcularMedia(){
    /* Escreva um programa que calcule a média de uma lista de números.
    A lista deve ser preenchida pelo usuário e o programa deve utilizar a
    estrutura de repetição do while. */
    int tamanhoDaLista;
    int resultado = 0;
    int lista[tamanhoDaLista];
    printf("Digite o tamanho da lista: \n");
    scanf("%d",&tamanhoDaLista);
    for(int i = 0; i < tamanhoDaLista; i++){
        printf("Digite um valor para preencher a lista: \n");
        scanf("%d",&lista[i]);
    }
    for(int i = 0; i < tamanhoDaLista; i++){
        resultado += lista[i];
    }
    printf("Media da respectiva lista: [ %d ]\n",resultado/tamanhoDaLista);
}

void imprimaFormaDecrescenteImpares(){
    /* Escreva um programa que imprima os números
    ímpares de 1 a 50 em ordem decrescente usando a
    estrutura de repetição for.*/

    for(int i = 49; i >= 1; i=i-2){
        printf("[ %d ]",i);
    }
    printf("\n");
}


int main(void){
    imprimaFormaDecrescenteImpares();
    calcularMedia();
    tabuada();
    imprimirPares();
    return 0;
}
