#include <stdio.h>
#include <stdlib.h>
int main(void) {
system("color 4");
int n,i;
printf("\ninforme numero: ");
scanf("%d",&n);
while(n >= 0) {
    if(n%2==0){
        printf("\n%d\n",n);
    }
    n--;
}

system("pause");
return 0;
}
