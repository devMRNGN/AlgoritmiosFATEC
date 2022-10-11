#include <stdio.h>
#include <stdlib.h>
int main(void){
system("color 4");

int num, i;
int impar = 0;
int par = 0;

for(i = 0; i < 10; i++){
    printf("\nDigite um numero: ");
    scanf("%d",&num);
        if(num % 2 == 0) {
            par++;
        } else {
            impar++;
        }
}
    printf("\nPares: %d",par);
    printf("\nImpares: %d\n",impar);
system("pause");
return 0;
}
