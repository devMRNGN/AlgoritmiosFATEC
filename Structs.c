#include <stdio.h>
#include <stdlib.h>

typedef struct Data {
    int dia;
    int mes;
    int ano;
} dataNascimento;

typedef struct Pessoa {
    char nome[100];
    int idade;
    char sexo;
    float salario;
    char estadoCivil[10];
    dataNascimento data;
} pessoa;

int main(void){
    pessoa person;
    dataNascimento date;
    fflush(stdin);
    printf("Digite um nome: ");
    gets(person.nome);
    printf("\nDigite sua idade: ");
    scanf("%d", &person.idade);
    fflush(stdin);
    printf("\nDigite seu sexo(M, F ou O para outros): ");
    person.sexo = getchar();
    printf("\nDigite seu salario: ");
    scanf("%f", &person.salario);
    fflush(stdin);
    printf("\nDigite seu estado civil: ");
    scanf("%s", &person.estadoCivil);
    printf("\nDigite seu dia de nascimento: ");
    scanf("%d", &date.dia);
    printf("\nDigite seu mes de nascimento: ");
    scanf("%d", &date.mes);
    printf("\nDigite seu ano de nascimento: ");
    scanf("%d", &date.ano);
    person.data = date;

    printf("Seu nome: [%s]\n", person.nome);
    printf("Sua idade: [%d]\n", person.idade);
    printf("Seu sexo [%c]\n", person.sexo);
    printf("Seu estado civil: [%s]\n", person.estadoCivil);
    printf("Data de nascimento: [%d/%d/%d]\n", person.data.dia, person.data.mes, person.data.ano);
    return 0;
}

