#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu(){
    printf("MENU\n");
    printf("1. f(x) = x^k\n");
    printf("2. f(x) = 1/x\n");
    printf("3. f(x) = sin(x)\n");
    printf("4. Sair\n");
}

void functionOne(float *pt_resultado){
    float x, k;
    float resultado = 0;
    printf("1. f(x) = x^k \n");
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de k: ");
    scanf("%f", &k);
    resultado = k * pow(x, k - 1);
    *pt_resultado = resultado;
}

void functionTwo(float *pt_resultado){
    float x;
    float resultado = 0;
    printf("2. f(x) = 1/x \n");
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    resultado = -1 / pow(x, 2);
    *pt_resultado = resultado;
}

void functionThree(float *pt_resultado){
    float angulo;
    float resultado = 0;
    printf("3. f(x) = sin(x)\n");
    printf("Digite o angulo em radiano: ");
    scanf("%f", &angulo);
    resultado = cos(angulo) * (180/M_PI);
    *pt_resultado = resultado;
}

int main(void){
    int escolha;
    float resultado;
    float *PT_resultado = &resultado;
    do{
        menu();
        scanf("%d",&escolha);
        system("cls");
        switch(escolha){
            case 1:
                functionOne(PT_resultado);
                printf("f '(x) = [%.4f]\n", resultado);
                printf("Pressione Enter para continuar...");
                fflush(stdin);
                getchar();
                system("cls");
                resultado = 0;
            break;
            case 2:
                functionTwo(PT_resultado);
                printf("f '(x) = [%.4f]\n", resultado);
                printf("Pressione Enter para continuar...");
                fflush(stdin);
                getchar();
                system("cls");
                resultado = 0;
            break;
            case 3:
                functionTwo(PT_resultado);
                printf("f '(x) = [%.4f]\n", resultado);
                printf("Pressione Enter para continuar...");
                fflush(stdin);
                getchar();
                system("cls");
                resultado = 0;
            break;
            case 4:
                printf("Encerrando......\n");
            break;
            default:
                printf("Escolha invalida!\n");
                printf("Pressione Enter para continuar...");
                fflush(stdin);
                getchar();
                system("cls");
                resultado = 0;
            break;
        }
    }while(escolha != 4);

    return 0;
}
