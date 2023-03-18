#include <stdio.h>
#include <stdlib.h>

void imprimirPares(){
    /* Escreva um programa que imprima todos os n�meros pares de 0 a 100
        usando a estrutura de repeti��o for */
    for(int i = 0; i <= 100; i=i+2){
        printf("[ %d ]  ", i);
    }
}

void tabuada(){
    /* Escreva um programa que pe�a ao usu�rio para digitar um n�mero e imprima
    a tabuada desse n�mero at� 10 usando a estrutura de repeti��o while.*/
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
    /* Escreva um programa que calcule a m�dia de uma lista de n�meros.
    A lista deve ser preenchida pelo usu�rio e o programa deve utilizar a
    estrutura de repeti��o do while. */
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
    /* Escreva um programa que imprima os n�meros
    �mpares de 1 a 50 em ordem decrescente usando a
    estrutura de repeti��o for.*/

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
