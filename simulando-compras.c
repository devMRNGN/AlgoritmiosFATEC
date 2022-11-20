#include <stdlib.h>
#include <stdio.h>
int main(void) {
system("color 4");
int i, n;
int qnt;
char nome[20], produto[20];
float uni, valortotal, valorgeral;

printf("\nQuantos produtos deseja comprar?");
scanf("%d",&n);
for (i = 0;i<n;i++) {
    printf("\nproduto %d", i);
    printf("\nnome do produto: ");
    scanf("%s",&produto);
    printf("\nValor unitario: ");
    scanf("%f",&uni);
    printf("\nQuantidade: ");
    scanf("%d",&qnt);
    //aaaaaaaaaaaaa
    valortotal = qnt*uni;
    printf("\nProduto: %s",produto);
    printf("\nValor unitario: R$ %.2f",uni);
    printf("\nQuantidade: %d",qnt);
    printf("\nValor total: R$ %.2f",valortotal);
    valorgeral = valorgeral+valortotal;
}
    printf("\nValor Geral: R$ %.2f",valorgeral);

getch();
system("pause");
return 0;
}
