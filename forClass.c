#include <stdio.h>
#include <stdlib.h>

void forMaluco(){
    int x = 20;
    int y = 100;
    for(int z = 0; x < 30; y++){
        x += 3;
    }
}

void doWhileExample(){
    int x;
    int soma = 0;
    do{
        do{
            printf("Digite um valor: [1...10] \n");
            scanf("%d", &x);
        }while(x < 1 || x > 19);
    soma += x;
    }while(soma<100);
    printf("Resultado: %d", soma);
}

void testFor(){
    // Break para o loop;
    // Continue pula pro proximo indice do loop, assim que encontra o continue, nao executando oq esta abaixo dele
    int x;
    for(x=0; x < 10; x++){
        if(x == 6) continue;
        if(x == 9) break;
        printf("%d\n", x);
    }
}


int main(){
    testFor();
    forMaluco();
    doWhileExample();
    return 0;
}
