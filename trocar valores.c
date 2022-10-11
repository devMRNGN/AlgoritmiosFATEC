#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a,b,c;
    system("color 4");

    printf("\nDigite um valor para a=");
        scanf("%d",&a);
    printf("\nDigite um valor para b=");
        scanf("%d",&b);
    printf("Primeiros Valores a= %d b= %d\n",a,b);

            c=a;
            a=b;
            b=c;

    printf("Valores Trocados a= %d b= %d\n",a,b);


            system("pause");
            return 0;
}
