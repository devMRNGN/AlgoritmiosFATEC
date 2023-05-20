#include <stdio.h>
#include <stdlib.h>

struct Produto{
    int codigo;
    char descricao[30];
    char nome[30];
    float precoUnitario;
};

void mostrarProduto(struct Produto prod){
    printf("-----PRODUTO-----\n");
    printf("Codigo: [%d]\n", prod.codigo);
    printf("Nome: [%s]\n", prod.nome);
    printf("Descricao: [%s]\n", prod.descricao);
    printf("Preco unidade: R$[%.2f]\n", prod.precoUnitario);
    fflush(stdin);
    printf("Pressione enter para continuar....");
    getchar();
}

int main(void){
    struct Produto produto1;

    fflush(stdin);
    printf("Digite o codigo do produto: ");
    scanf("%d", &produto1.codigo);
    fflush(stdin);
    printf("Digite o nome do produto: ");
    gets(produto1.nome);
    fflush(stdin);
    printf("Digite a descricao do produto: ");
    gets(produto1.descricao);
    printf("Digite o valor unitario: ");
    scanf("%f", &produto1.precoUnitario);
    system("cls");

    mostrarProduto(produto1);

    return 0;
}
