#include <stdio.h>
#include <stdlib.h>

int main (){

    // Isso funcionaria e entraria no IF, pois apesar de nao ter um boolean, s� de o valor ser diferente de 0, que ele � true
    // Se for 0 � false
    int x = 30;
    if(x){
        printf("Entrei no if");
    } else {
        printf("Entrei no else");
    }


    // Entraria no else
    int y = 0;
    if(y){
        printf("Entrei no if");
    } else {
        printf("Entrei no else");
    }

    return 0;
}
