#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu(){
    printf("------------MENU-------------\n");
    printf("1. Converter grau para radiano\n");
    printf("2. Converter radiano para grau\n");
    printf("3. Sair\n");
    printf("Digite sua escolha:");
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
    int choose, alternativeChoose;
    float degree,rad,result;
    do{
        menu();
        scanf("%d" , &choose);
        system("cls");
        switch(choose){
            case 1:
                do{
                    printf("\nDigite o angulo em grau:");
                    scanf("%f", &degree);
                    system("cls");
                    result = degreeToRad(degree);
                    printf("\n%.4f graus = %.4f radianos", degree , result);
                    printf("\nPressione enter para continuar...");
                    scanf("%c");
                    scanf("%c");
                    system("cls");
                    printf("1. MENU\n");
                    printf("2. Converter novamente grau para radiano");
                    scanf("%d" , &alternativeChoose);
                    system("cls");
                }while(alternativeChoose != 1);
                choose = 0;
            break;
            case 2:
                do{
                    printf("\nDigite o angulo em radiano:");
                    scanf("%f", &rad);
                    system("cls");
                    result = radToDegree(rad);
                    printf("\n%.4f radianos = %.4f graus", rad , result);
                    printf("\nPressione enter para continuar...");
                    scanf("%c");
                    scanf("%c");
                    system("cls");
                    printf("1. MENU\n");
                    printf("2. Converter novamente radiano para grau");
                    scanf("%d" , &alternativeChoose);
                    system("cls");
                }while(alternativeChoose != 1);
                choose = 0;
            break;
            case 3:
                printf("Obrigado por usar, pressione enter para sair!");
                scanf("%c");
                scanf("%c");
                printf("Saindo....");
            break;
        }
    }while(choose < 1 || choose > 3);

    return 0;
}
