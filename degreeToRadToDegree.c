#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu(){
    printf("------------MENU-------------\n");
    printf("1. Converter grau para radiano\n");
    printf("2. Converter radiano para grau\n");
    printf("3. Sair\n");
}

float degreeToRad(float degree){
    float PI = M_PI;
    return degree * (PI/180);
}

double radToDegree(float rad){
    double PI = M_PI;
    return rad * (180/PI);
}

int main(void){
    int choose;
    float degree,rad,result;
    menu();
    scanf("%d" , &choose);
    switch(choose){
        case 1:
            printf("\nInforme o grau para ser transformado em radiano");
            scanf("%f", &degree);
            result = degreeToRad(degree);
            printf("\n%.2f graus = %f radianos", degree , result);
        break;
        case 2:
            printf("\nInforme o radiano para ser transformado em grau");
            scanf("%f", &rad);
            result = radToDegree(rad);
            printf("\n%f radianos = %.2f graus", rad , result);
        break;
        case 3:
            printf("\nSaindo....");
        break;
        default:
            do{
                printf("\nDigite uma opcao valida");
                scanf("%d",&choose);
            }while(choose != 2 && choose != 1 && choose != 3);
        break;
    }

    return 0;
}
