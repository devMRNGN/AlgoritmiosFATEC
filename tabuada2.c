#include <stdio.h>
#include <stdlib.h>

int main(void) {
system("color 4");

int tabu, i, resultado;
printf("\nDigite um numero: ");
scanf("%d",&tabu);
for(i = 1; i <= 10; i++) {
    resultado = tabu * i;
    printf("\n%d x %d = %d\",tabu, i, resultado);
}
system("pause");
 return 0;
}
