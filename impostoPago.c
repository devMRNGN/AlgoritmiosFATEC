#include <stdio.h>
#include <stdlib.h>

int main(){
    char sexo;
    double salarioBruto, imposto;
    printf("\nInforme seu salario bruto:");
    scanf("%lf",&salarioBruto);
    fflush(stdin);
    printf("\nDigite seu sexo:");
    scanf("%c",&sexo);
    switch(sexo){
        case 'f':
        case 'F':
            imposto = salarioBruto*0.10;
        break;
        case 'm':
        case 'M':
            imposto = salarioBruto*0.15;
        break;
        default:
            printf("\nNão paga imposto");
        break;
    }
    system("cls");
    printf("\nVoce pagara: R$%.2f", imposto);
    return 0;
}
