#include <stdio.h>
#include <stdlib.h>
#include <time.h>1

// Falso para o computador � 0 e qualquer diferente de 0 � true

int main(){
    //EX 1:
    int x = 10;
    int y = 10;
    // Se o y for 0, ele ir� cair no else
    if(y){
        printf("%d", x/y);
    } else {
        printf("N�o pode dividir por zero\n");
    }
    // OPERADOR TERN�RIO
    int result = y ? x/y : printf("\nN�o pode dividir por zero\n");
    printf("\nResultado : %d\n", result);
    //EX 2:
    srand(time(NULL));
    int magico, palpite;
    magico = rand() % 1000;
    printf("Digite seu palpite:");
    scanf("%d", &palpite);
    int resultadoPalpite = palpite == magico ? printf("\nSeu palpite foi: %d e o numero magico foi: %d, parabens voce acertou!!", palpite, magico) : printf("\nSeu palpite foi: %d e o numero magico foi: %d, parabens voce errou!!", palpite, magico);

    return 0;

    /* LA�O INFINITO
    while(1){

    }
    */
    // Para parar o la�o infinito voce consegue apenas com um "return 0;" ou com um exit();
    // Isso � �til para ter um c�digo infinito, e quando acontecer alguma a��o voce encerrar
    // system("pause") parar o programa
}
