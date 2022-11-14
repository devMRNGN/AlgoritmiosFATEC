#include <stdlib.h>
#include <stdio.h>

float calculateMedia(float *grades){
    int notesOfStudent, studentAverage;
    for(int i = 0; i <= 3; i++){
        notesOfStudent++;
        studentAverage = studentAverage + grades[i];
    }
    studentAverage = studentAverage / notesOfStudent;
    return(studentAverage);
}

int main(void){
    float studentGrades[4] = {10,8.2,7.1,5.3};
    float media = 0;
    media = calculateMedia(studentGrades);
    printf("\nA media do aluno referente aos 4 bimestres resulta em: %.2f",media);
return 0;
}
