#include <stdlib.h>
#include <stdio.h>
int main(void){
system("color");
float peso, altura, relacao;
printf("\n============VEJA SE VOCE ESTA NO PESO IDEAL===============");
printf("\nQual o peso da pessoa?");
scanf("%f",&peso);
printf("\nQual a altura da pessoa?");
scanf("%f",&altura);
relacao = peso / (altura*altura);
if(relacao < 20){
    printf("\n=========VOCE ESTA ABAIXO DO PESO==========");
}else if(relacao >= 20 && relacao < 25){
    printf("\n===========VOCE ESTA NO SEU PESO IDEAL, PARABENS===========");
}else if(relacao >= 25){
    printf("\n===============VOCE ESTA ACIMA DO PESO===============");
}else {
    printf("algo deu errado");
}

system("pause");
return 0;
}
