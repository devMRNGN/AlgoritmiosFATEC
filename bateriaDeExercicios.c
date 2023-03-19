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

void fibonacci(){
    /* Escreva um programa que peça ao usuário para digitar
    um número e imprima a sequência de Fibonacci até esse
    número usando a estrutura de repetição while.*/

    int numero;
    int anterior1 = 1;
    int anterior2 = 1;
    int produto = 0;
    printf("\nInforme o numero desejado: \n");
    scanf("%d",&numero);
    while((anterior1+anterior2) <= numero){
        produto = anterior1 + anterior2;
        printf("[ %d ] [ %d ] [ %d ]\n", anterior1, anterior2, produto);
        anterior1 = anterior2;
        anterior2 = produto;
    }
    printf("\n\n\n");
}

void fizzBuzz(){
    /* Escreva um programa que imprima os números de 1 a 100.
    Mas para múltiplos de 3, imprima "Fizz" em vez do número e
    para múltiplos de 5, imprima "Buzz". Para números múltiplos
    de ambos 3 e 5, imprima "FizzBuzz".
    Use a estrutura de repetição for.*/

    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("[ FizzBuzz ]");
        }else if(i % 3 == 0){
            printf("[ Fizz ]");
        }else if(i % 5 == 0){
            printf("[ Buzz ]");
        }else {
            printf("[ %d ]",i);
        }
    }
}

void calculaSoma(){
    /* Escreva um programa que calcule a soma
    de todos os números entre 1 e 100 usando
    a estrutura de repetição do while. */

    int acumulador = 0;
    int i = 1;
    while(i <= 100){
        acumulador += i;
        i++;
    }
    printf("Soma dos números de 1 a 100 = [ %d ]\n",acumulador);
}

void tabelaMultiplicacao(){
    /* Escreva um programa que imprima a
    tabela de multiplicação de 1 a 10 usando
    a estrutura de repetição for.*/
    int resultado;
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            resultado = i * j;
            printf("%d x %d = [%d] ",i, j, resultado);
        }
        printf("\n");
    }
}

void fatorial(){
    /* Escreva um programa que calcule o fatorial de
    um número fornecido pelo usuário usando a
    estrutura de repetição do while.*/
    int num;
    int i = 2;
    int resultado = 1;
    printf("Informe um numero: ");
    scanf("%d",&num);
    while(num >= i){
        resultado = resultado * num;
        num--;
    }
    printf("Numero em fatorial: [ %d ]\n",resultado);
}

int main(void){
    fatorial();
    tabelaMultiplicacao();
    calculaSoma();
    fizzBuzz();
    fibonacci();
    imprimaFormaDecrescenteImpares();
    calcularMedia();
    tabuada();
    imprimirPares();
    return 0;
}
