#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioBruto;
    char estadoCivil;
    printf("Informe seu salario bruto:\n");
    scanf("%f",&salarioBruto);
    fflush(stdin);
    printf("Informe seu estado civil:\n");
    scanf("%c", &estadoCivil);
    system("cls");
    if(estadoCivil == 'c'){
        printf("Voce pagara: R$%.2f de imposto",salarioBruto*0.09);
    } else if(estadoCivil == 's') {
        printf("Voce pagara: R$%.2f de imposto", salarioBruto*0.10);
    } else {
        printf("Não estou preparado para esse tipo");
    }
    return 0;
}
