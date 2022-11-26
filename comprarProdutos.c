#include <stdlib.h>
#include <stdio.h>
int main(void){
    struct produtos{
        char nomeProduto[30];
        float valorUnitario;
        int quantidade;
        float valorTotal;
    };
int compraGeral;
printf("Quantos produtos comprara?");
scanf("%d",&compraGeral);
system("cls");
struct produtos produto[compraGeral];
    for(int i = 0; i < compraGeral; i++){
        printf("Nome Produto:");
        scanf("%c");
        fgets(produto[i].nomeProduto, 30, stdin);
        printf("\nValor unitario:");
        scanf("%f",&produto[i].valorUnitario);
        printf("\nQuantidade: ");
        scanf("%d",&produto[i].quantidade);
        produto[i].valorTotal = produto[i].quantidade * produto[i].valorUnitario;
        system("cls");
    }
    system("cls");
    float valorGeral;
    for(int i = 0; i < compraGeral; i++){
        i++;
        printf("%d produto\n",i);
        i--;
        printf("==========\n");
        printf("Nome produto: %s",produto[i].nomeProduto);
        printf("Valor unitario: R$ %.2f\n",produto[i].valorUnitario);
        printf("Quantidade adquirida: %d\n",produto[i].quantidade);
        printf("Valor total: R$ %.2f",produto[i].valorTotal);
        printf("\n\n");
        valorGeral = valorGeral + produto[i].valorTotal;
    }
    printf("\nTotal da compra: R$ %.2f\n",valorGeral);
return 0;
}
