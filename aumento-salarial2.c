#include <stdio.h>
#include <stdlib.h>

int main(){
    double salario, aumento;
    printf("\nInforme seu salario:");
    scanf("%lf", &salario);
    salario > 1000 ? printf("\nTotal de aumento: R$%.2lf", salario*0.05) : printf("\nTotal de aumento: R$%.2lf", salario*0.07);
    return 0;
}
