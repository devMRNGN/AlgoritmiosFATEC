#include <stdio.h>
#include <stdlib.h>
#include <time.h>1

// Falso para o computador é 0 e qualquer diferente de 0 é true

int main(){
    //EX 1:
    int x = 10;
    int y = 10;
    // Se o y for 0, ele irá cair no else
    if(y){
        printf("%d", x/y);
    } else {
        printf("Não pode dividir por zero\n");
    }
    // OPERADOR TERNÁRIO
    int result = y ? x/y : printf("\nNão pode dividir por zero\n");
    printf("\nResultado : %d\n", result);
    //EX 2:
    srand(time(NULL));
    int magico, palpite;
    magico = rand() % 1000;
    printf("Digite seu palpite:");
    scanf("%d", &palpite);
    int resultadoPalpite = palpite == magico ? printf("\nSeu palpite foi: %d e o numero magico foi: %d, parabens voce acertou!!", palpite, magico) : printf("\nSeu palpite foi: %d e o numero magico foi: %d, parabens voce errou!!", palpite, magico);

    return 0;

    /* LAÇO INFINITO
    while(1){

    }
    */
    // Para parar o laço infinito voce consegue apenas com um "return 0;" ou com um exit();
    // Isso é útil para ter um código infinito, e quando acontecer alguma ação voce encerrar
    // system("pause") parar o programa
}
