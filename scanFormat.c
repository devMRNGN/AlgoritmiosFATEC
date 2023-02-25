#include <stdio.h>
#include <stdlib.h>

// O espa�o tamb�m � um separador para o scan, e no scanf, voce pode ler mais de um valor, apenas colocando a virgula
// Ou seja, se o usu�rio digitar dois valores, ser� salvo um para cada variavel, respectivamente
// stdin = standart in -> limpa memoria da entrada, teclado
// fflush -> limpa a memoria de algo, no caso passando stdin, limpa memoria do dispositivo de entrada, normalmente o teclado

int main(){
    char letra;
    char letra2;
    printf("Digite uma letra: \n");
    scanf("%c",&letra);
    fflush(stdin);
    printf("Digite outra letra: \n");
    scanf("%c", &letra2);

    printf("Letra digitada: %c\n", letra);
    printf("Letra digitada: %c", letra2);
    return 0;
}
