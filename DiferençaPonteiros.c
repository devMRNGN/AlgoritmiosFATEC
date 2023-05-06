#include <stdlib.h>
#include <stdio.h>

int sizeString(char *s);
int verificaQuantidadeLetras(char *frase, char letra);

int main(void){
    printf("[%d]", sizeString("Hello, World"));
    printf("\n[%d]", verificaQuantidadeLetras("tttttiiii", 't'));

    return 0;
}

int sizeString(char *s){
    char *p_inicial = s;
    char *p_percorre = s;
    while(*p_percorre != '\0'){
        p_percorre++;
    }
    return p_percorre - p_inicial;
}

int verificaQuantidadeLetras(char *frase, char letra){
    char *ptr_final = frase;
    int contador = 0;
    while(*ptr_final != '\0'){
        if(*ptr_final == letra){
            contador++;
        }
        ptr_final++;
    }
    return contador;
}
