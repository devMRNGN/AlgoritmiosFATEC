#include <stdlib.h>
#include <stdio.h>
int main(void){
    float peso, altura, r;
    printf("\nPeso: ");
    scanf("%f",&peso);
    printf("\nAltura: ");
    scanf("%f",&altura);
    r = peso / (altura*altura);
    if(r < 20){
        printf("\nAbaixo do peso ideal");
    }else if(r >= 20 && r < 25){
        printf("\nPeso ideal");
    }else if(r > 25){
        printf("\nVoce esta acima do peso\n");
    }
system("pause");
return 0;
}
