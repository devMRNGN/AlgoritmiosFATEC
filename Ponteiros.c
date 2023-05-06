#include <stdlib.h>
#include <stdio.h>

void altera(int *p_passado);

int main(void){

    // & = ENDEREÇO
    // * = CONTEUDO
    int a = 28;
    int b = 15;
    int *p_a = &a; // referencia o local de memoria aonde o valor de A está
    *p_a = 98; // alterar o conteudo da variavel A, pelo ponteiro
    p_a = &b; // fiz merda, fiz o ponteiro de A, apontar para B
    int *p_b = &b;
    altera(p_a);
    printf("valor de A = [%d]\n", a); // Valor de A
    printf("valor de *B = [%d]\n", *p_a); // Valor de B, pelo ponteiro B -> A
    printf("Endereco de A = [%d]\n", &a); // Endereço de memoria de A
    printf("Endereco *A = [%d]\n", p_a);

    return 0;
}

void altera(int *p_passado){
    *p_passado *= 2;
}
