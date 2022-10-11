#include <stdlib.h>
#include <stdio.h>
int main(void){
    char nome[20];
    float salario;
    printf("\nQual o nome do funcionario?");
    scanf("%s",&nome);
    printf("\nQuanto esse funcionario ganha?");
    scanf("%f",&salario);
    if(salario < 500){
        salario = salario*1.15;
        printf("\nO salario do funcionario %s é de R$ %.2f",nome,salario);
    }else if(salario >= 500 && salario < 1000){
        salario = salario*1.10;
        printf("\nO salario do funcionario %s é de R$ %.2f",nome,salario);
    }else if(salario > 1000){
        salario = salario*1.05;
        printf("\nO salario do funcionario %s é de R$ %.2f",nome,salario);
    }
system("pause");
return 0;
}
