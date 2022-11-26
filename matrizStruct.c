#include <stdio.h>
#include <stdlib.h>
int main(void){
typedef struct {
    char nome[20];
    int idade;
    float salarioMensal;
    float salarioAnual;
} funcionarios; funcionarios funcionario[2][2];
float despesasAnuaisEmpresa = 0;
        //Registrando funcionarios
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
        printf("Digite o nome do funcionario: ");
        fgets(funcionario[i][j].nome,20,stdin);
        printf("Digite a idade do funcionario: ");
        scanf("%d",&funcionario[i][j].idade);
        printf("Digite o salario mensal: ");
        scanf("%f",&funcionario[i][j].salarioMensal);
        scanf("%c");
        funcionario[i][j].salarioAnual = funcionario[i][j].salarioMensal * 12;
        despesasAnuaisEmpresa = despesasAnuaisEmpresa + funcionario[i][j].salarioAnual;
        system("cls");
    }
}
        //Mostrando funcionarios
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
        printf("Nome funcionario: %s",funcionario[i][j].nome);
        printf("Idade: %d\n",funcionario[i][j].idade);
        printf("Salario mensal: R$ %.2f\n",funcionario[i][j].salarioMensal);
        printf("Salario anual: R$ %.2f",funcionario[i][j].salarioAnual);
        printf("\n\n");
    }
}
printf("Custo anual para empresa: R$ %.2f\n\n",despesasAnuaisEmpresa);
return 0;
}
