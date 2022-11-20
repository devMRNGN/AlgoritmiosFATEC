#include <stdlib.h>
#include <stdio.h>

int main(void){
system("color 4");
int  n1, n2, n3;
printf("================Veja se seus valores são pares ou impares===================");
    printf("\nDigite um valor para n1: ");
    scanf("%d",&n1);
    printf("\nDigite um valor para n2:");
    scanf("%d",&n2);
    printf("\nDigite um valor para n3");
    scanf("%d",&n3);
    printf("\n====================Numero 1====================");
    if((n1 % 2) == 0){
        printf("\nSeu valor = %d : par",n1);
    }else {
        printf("\nSeu valor = %d : impar",n1);
    }
    printf("\n====================Numero 2====================");
    if((n2 % 2) == 0){
        printf("\nSeu valor = %d : par",n2);
    }else {
        printf("\nSeu valor = %d : impar",n2);
    }
    printf("\n====================Numero 3====================");
    if((n3 % 2) == 0){
        printf("\nSeu valor = %d : par",n3);
    }else {
        printf("\nSeu valor = %d : impar",n3);
    }








printf("\n\n");
system("pause");
return 0;
}
