#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    system("color 4");
    float altura, peso, nota;
    printf("\nQual a altura do candidato?");
    scanf("%f",&altura);
    printf("\nQual o peso do candidato?");
    scanf("%f",&peso);
    printf("\nQual a nota do candidato");
    scanf("%f",&nota);
    //APROVADO
    if(nota==10)
    {
        printf("======PARABENS VOCE TIROU 10 E FOI APROVADO AUTOMATICAMENTE, NAO AVALIAREMOS SEUS RESULTADOS FISICOS======\n");
    }
    else if(altura>1.70){
        printf("\nAltura: %.2f aprovada",altura);
        if(peso<80.0){
            printf("\nPeso: %.2f aprovado",peso);
            if(nota>9){
                printf("\nNota: %.2f aprovada,",nota);
                printf("\n=========== PARABENS VOCE FOI APROVADO ==============");
            }else {
                printf("\nVoce foi reprovado por nao ter nota suficiente");
            }
        }
        else
        {
            printf("\nPeso reprovado, voce nao foi selecionado");
        }
    }
    else
    {
        printf("\nAltura reprovada, voce nao foi selecionado");
    }





    system("pause");
    return 0;
}
