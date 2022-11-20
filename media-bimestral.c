#include <stdlib.h>
#include <stdio.h>
int main(void){
system("color 4");
    //variaveis
    float t1, p1, t2, p2, n1, n2, media;
    //entrada
    printf("\nNota do primeiro trabalho: ");
    scanf("%f",&t1);
    printf("\nNota da primeira prova: ");
    scanf("%f",&p1);
    printf("\nNota do segundo trabalho: ");
    scanf("%f",&t2);
    printf("\nNota da segunda prova: ");
    scanf("%f",&p2);
    //Operacoes
    n1 = (t1 * 0.20) + (p1 * 0.80);
    n2 = (t2 * 0.20) + (p1 * 0.80);
    media = (n1 + n2) / 2;
    // saida
    printf("\nMedia: %.2f",media);
    if(media >= 6){
        printf("\nnota: %.2f Aprovado\n",media);
    }else if(media >= 4 && media < 6){
        printf("\nVoce ainda tem a chance de fazer a prova de recuperacao\n");
    } else if(media < 4){
        printf("\nVoce se fudeu sua nota foi: %.2f REPROVADO\n",media);
    }
system("pause");
return 0;
}
