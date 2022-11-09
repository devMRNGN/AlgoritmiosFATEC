#include <stdlib.h>
#include <stdio.h>
float medianotas(int n, float *notas){
    int soma = 0;
    int m = 0;
    for(int i = 0; i < n; i++){
        soma = soma + notas[i];
    }
    m = soma / n;
    return m;
}

int main(void){
system("color 4");
    int n;
    printf("\nInforme a quantidade de notas: ");
    scanf("%d",&n);
    float notas[n];
        for(int i = 0; i < n; i++){
            printf("\nInforme uma nota: ");
            scanf("%f",&notas[i]);
        }
    float media = medianotas(n, notas);
    printf("\nMedia = %.1f \n",media);

system("pause");
return 0;
}
