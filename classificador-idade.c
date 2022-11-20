#include <stdio.h>
#include <stdlib.h>
int main(void){
system("color 4");
int crianca=0, adolescente=0, adulto=0, pessoas=0;
int idade =1;
while (idade != 0){
    printf("\nInforme idades(caso queira parar digite 0):");
    scanf("%d",&idade);
    if(idade >= 1 && idade <=10){
        crianca++;
    } else if(idade > 10 && idade <= 18){
        adolescente++;
    } else if(idade > 18){
        adulto++;
    }
}

pessoas = crianca + adolescente + adulto;
printf("\n------------Voce informou------------");
printf("\n%d pessoas informadas sendo...",pessoas);
printf("\nCriancas: %d\nAdolescentes: %d\nAdultos: %d\n",crianca,adolescente,adulto);
system("pause");
return 0;
}
