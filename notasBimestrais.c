#include <stdio.h>
#include <stdlib.h>
int main(void){
int alunos;
printf("Informe numero de alunos: ");
scanf("%d",&alunos);
system("cls");

float notasBimestrais[alunos][4];
float mediaAluno[alunos];

for(int i = 0; i < alunos; i++){
    printf("---- Registrando notas do %d aluno ----",i+1);
    printf("\n\n");
    for(int j = 0; j < 4; j++){
        printf("informe a nota do %d bimestre: ",j+1);
        scanf("%f",&notasBimestrais[i][j]);
        mediaAluno[i] = mediaAluno[i] + notasBimestrais[i][j] / 4;
    }
    printf("\nMedia do aluno: %d: %.2f\n",i+1,mediaAluno[i]);
}
printf("\nBy: devMRNGN");
return 0;
}
