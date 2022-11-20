#include <stdlib.h>
#include <stdio.h>
int main()
{
    float nota1,nota2,nota3,media;
    char nome[10];

        system("color 4");
        printf("\nQual nome do aluno?");
            scanf("%s",&nome);
        printf("\nInforme a nota 1=");
            scanf("%f",&nota1);
        printf("\nInforme a nota 2=");
            scanf("%f",&nota2);
        printf("\nInforme a nota 3=");
            scanf("%f",&nota3);
        media=(nota1+nota2+nota3)/3;
        printf("\nAluno %s",nome);
        printf("\nMedia Final= %.2f\n",media);

    system("pause");
    return 0;
}
