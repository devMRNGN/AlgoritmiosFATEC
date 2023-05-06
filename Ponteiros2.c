#include <stdio.h>
#include <stdlib.h>

int main(void){
    int v[10] = {1,3,5,7,9,11};
    printf("[%d]\n", v);
    printf("[%d]\n", &v[0]);
    printf("[%d]\n", *v);
    // Percorrer o vetor
    for(int i = 0; i < 10; i++){
        printf("[%d] ", v[i]);
    }
    printf("\n");
    // percorrer ponteiro
    for(int i = 0; i < 10; i++){
        printf("[%d] ", *(v+i));
    }
    printf("\n");
    int *ptr = v;
    for(int i = 0; i < 10; i++){
        printf("[%d] ", *ptr);
        ptr++;
    }

    return 0;
}
