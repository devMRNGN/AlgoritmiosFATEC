#include <stdlib.h>
#include <stdio.h>
int main(void){
system("color 4");
    //Tabuada
int i, n, tabu;
    printf("\nQual tabuada deseja?");
    scanf("%d",&n);
        for(i=0; i <= 10; i++){
            tabu = n*i;
            printf("\n%d x %d = %d\n",n,i,tabu);
        }
system("pause");
return 0;
}
