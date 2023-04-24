#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define alunos João Marangoni Cauê Trani de Mira

void constantFunction(float k, float x){
    printf("f(%.4f) = %.4f\n",x,k);
}

void linearFunction(float a, float b, float x){
    double y = a*x + b;
    float zero = -b/a;
    printf("A reta eh: %s\n", (a > 0 ? "Crescente" : "Decrescente"));
    printf("Intercepto y eh: %.4f\n",b);
    printf("O zero de f(x) eh: %.4f\n", zero);
    printf("f(%.4f) = %.4f\n",x, y);
}

void exponentialFunction(float k, float x){
    double y = pow(k, x);
    printf("A curva eh: %s\n", (k > 1 ? "Crescente" : "Decrescente"));
    printf("f(%.4f) = %.4f", x, y);
}

void logarithmicFunction(float k, float x){
    double y = log(x) / log(k);
    printf("A curva eh: %s\n", (k > 1  ? "Crescente" : "Decrescente"));
    printf("f(%.4f) = %.4f\n",x, y);
}

void menu(){
    printf("MENU\n");
    printf("1. f(x) = k\n");
    printf("2. f(x) = a.x+b\n");
    printf("3. f(x) = a.x^2+b.x+c\n");
    printf("4. f(x) = k^x\n");
    printf("5. f(x) = log_k(x)\n");
    printf("6. f(x) = sin(x)\n");
    printf("7. f(x) = cos(x)\n");
    printf("8. f(x) = tan(x)\n");
    printf("9. Sair\n");
}

int main(void){
    float k, x, a, b;
    int escolha;
    do{
        menu();
        scanf("%d",&escolha);
        system("cls");
        switch(escolha){
            case 1:
                printf("\\\\\Funcao Constante/////\n");
                printf("Digite o valor de k: ");
                scanf("%f",&k);
                printf("Digite o valor de x: ");
                scanf("%f",&x);
                constantFunction(k, x);
                printf("Pressione enter para continuar...");
                scanf("%c");
                scanf("%c");
                system("cls");
            break;
            case 2:
                printf("\\\\\Funcao Linear/////\n");
                do{
                    printf("Digite o valor de a: \n");
                    scanf("%f",&a);
                }while(a ==  0);
                printf("Digite o valor de b: \n");
                scanf("%f",&b);
                printf("Digite o valor de x: \n");
                scanf("%f",&x);
                linearFunction(a, b, x);
                printf("Pressione enter para continuar...");
                scanf("%c");
                scanf("%c");
                system("cls");
            break;
            case 3:
                printf("\\\\\Funcao Quadratica/////\n");
            break;
            case 4:
                printf("\\\\\Funcao Exponencial/////\n");
                printf("Digite o valor de k: \n");
                scanf("%f",&k);
                printf("Digite o valor de x: \n");
                scanf("%f",&x);
                exponentialFunction(k,x);
                printf("Pressione enter para continuar...");
                scanf("%c");
                scanf("%c");
                system("cls");
            break;
            case 5:
                printf("\\\\\Funcao Logaritmica/////\n");
                do{
                    printf("Digite o valor de k: \n");
                    scanf("%f",&k);
                }while(k <= 0 || k == 1);
                do{
                    printf("Digite o valor de x: \n");
                    scanf("%f",&x);
                }while(x <= 0);
                logarithmicFunction(k, x);
                printf("Pressione enter para continuar...");
                scanf("%c");
                scanf("%c");
                system("cls");
            break;
            case 6:
                printf("\\\\\Funcao Seno/////\n");
            break;
            case 7:
                printf("\\\\\Funcao Cosseno/////\n");
            break;
            case 8:
                printf("\\\\\Funcao Tangente/////\n");
            break;
        }
    }while(escolha != 9);
    printf("Obrigado por usar!\n");
    return 0;
}
