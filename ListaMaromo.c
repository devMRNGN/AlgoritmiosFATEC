#include <stdio.h>
#include <stdlib.h>
#define aluno Joao Tadeu da Silva Marangoni

void mostrarMenu(){
    printf("MENU\n");
    printf("1. Ver Positividade\n");
    printf("2. Somar Intervalo\n");
    printf("3. Somar Intervalo de Divisiveis\n");
    printf("4. Calcular Media (Ponderada e Aritmetica)\n");
    printf("5. Calcular Media com Pesos\n");
    printf("6. Ler valores e mostrar maior e menor\n");
    printf("7. Somatoria dos Quadrados\n");
    printf("8. Validar Data\n");
    printf("9. Soma dos Valores entre 1 e N (0<N<30)\n");
    printf("10. Soma dos Quadrados recursividade\n");
    printf("11. Sair");
}

void lerEnterELimparMenu(){
    printf("Pressione enter para voltar ao Menu...\n");
    scanf("%c");
    scanf("%c");
    system("cls");
}

int verPositividade(int valor){
    if(valor == 0) return 0;
    return valor < 0 ? -1 : 1;
}

int somarIntervalo(int n1, int n2){
    int sum = 0;
    for(int i = (n1+1); i < n2; i++){
        sum += i;
    }
    return sum;
}

int somarIntervalorDivisiveis(int a, int b, int c){
    int sum = 0;
    for(int i = b; i <= c; i++){
        if(i % a == 0){
            sum += i;
        }
    }
    return sum;
}

float calcularMedia(float notas[3], char tipoMedia){
    float sum = 0;
    if(tipoMedia == 'A'){
        for(int i = 0; i < 3; i++){
            sum += notas[i];
        }
        sum = sum / 3;
        return sum;
    }else if(tipoMedia == 'P'){
        sum = (notas[0] * 2) + (notas[1] * 4) + (notas[2] * 5);
        sum = sum / (2+4+5);
        return sum;
    }
}

float calcularMediaPonderada(float notasAlunos[3], int pesosNotas[3]){
    float media = 0;
    int sumPesos = 0;
    float sumNotas = 0;
    for(int i = 0; i < 3; i++){
        sumNotas += (notasAlunos[i] * pesosNotas[i]);
        sumPesos += pesosNotas[i];
    }
    media = sumNotas / sumPesos;
    return media;
}

void lerValores(int QuantidadeDeValores){
    float valores[QuantidadeDeValores];
    for(int i = 0; i < QuantidadeDeValores; i++){
        printf("Informe um valor: ");
        scanf("%f", &valores[i]);
    }
    float menor = valores[1];
    float maior = valores[1];
    for(int i = 0; i < QuantidadeDeValores; i++){
        if(valores[i] > maior) maior = valores[i];
        if(valores[i] < menor) menor = valores[i];
    }
    printf("O Maior valor informado eh: [%.2f]\n", maior);
    printf("O Menor valor informado eh: [%.2f]\n", menor);
}

float somatoriaDosQuadrados(int numeros[3]){
    float sum = 0;
    for(int i = 0; i < 3; i++){
        sum += (numeros[i] * numeros[i]);
    }
    return sum;
}

int validarData(int dia, int mes, int ano){
    int validador[3];
    validador[1] = (dia >= 1 && dia <= 31) ? 1 : 0;
    validador[2] = (mes >= 1 && mes <= 12) ? 1: 0;
    if(ano % 400 == 0){
        validador[3] = 1;
    }else if(ano % 4 == 0 && ano % 100 != 0){
        validador[3] = 1;
    }else{
        validador[3] = 0;
    }
    for(int i = 0; i < 3; i++){
        if(validador[i] == 0){
            return 0;
        }
    }
    return 1;
}

int somaValoresEntreUmEN(int valor){
    if(valor == 1) {
        return 1;
    }else {
        return valor + somaValoresEntreUmEN(valor-1);
    }
}

int somaDosQuadradosRecursividade(int valor){
    if(valor == 1){
        return -1;
    }else {
        return ((valor-1) * (valor-1)) + somaDosQuadradosRecursividade(valor - 1);
    }
}

int main(void){
    int valor, n1, n2, a, b, c, escolha, NumeroDeValores, dia, mes, ano;
    float alunoNotas[3];
    float notasAlunos[3];
    int pesosNotas[3];
    int numeros[3];
    char typeOfMedia;

    do{
        mostrarMenu();
        scanf("%d",&escolha);
        system("cls");
        switch(escolha){
            case 1:
                printf("Ver Positividade\n");
                printf("Digite um numero: ");
                scanf("%d",&valor);
                printf("A positividade do seu valor eh: [%d]\n",verPositividade(valor));
                lerEnterELimparMenu();
            break;
            case 2:
                printf("Somar Intervalo\n");
                printf("Digite o primeiro numero: ");
                scanf("%d",&n1);
                printf("Digite o segundo numero: ");
                scanf("%d",&n2);
                printf("A soma do intervalo entre os dois numeros eh: [%d]\n",somarIntervalo(n1,n2));
                lerEnterELimparMenu();
            break;
            case 3:
                printf("Somar Intervalo de Divisiveis\n");
                do{
                    printf("Informe o primeiro numero (Num>1): ");
                    scanf("%d",&a);
                }while(a <= 1);
                printf("\nInforme o segundo numero: ");
                scanf("%d",&b);
                printf("\nInforme o terceiro numero: ");
                scanf("%d",&c);
                printf("A soma do intervalo dos divisiveis eh: [%d]\n", somarIntervalorDivisiveis(a,b,c));
                lerEnterELimparMenu();
            break;
            case 4:
                printf("Calcular Media (Ponderada e Aritmetica)\n");
                for(int i = 0; i < 3; i++){
                    printf("Digite a nota%d: ",i+1);
                    scanf("%f", &alunoNotas[i]);
                }
                do{
                    printf("\nDigite A para aritmetica e P para ponderada: ");
                    fflush(stdin);
                    scanf("%c", &typeOfMedia);
                }while(typeOfMedia != 'A' && typeOfMedia != 'P');
                printf("Media das notas: %.2f\n", calcularMedia(alunoNotas, typeOfMedia));
                lerEnterELimparMenu();
            break;
            case 5:
                printf("Calcular Media com Pesos\n");
                printf("Informe as notas respectivamente:\n");
                for(int i = 0; i < 3; i++){
                    printf("Digite a nota%d: ",i+1);
                    scanf("%f", &notasAlunos[i]);
                }
                printf("Informe os pesos respectivamente:\n");
                for(int i = 0; i < 3; i++){
                    printf("Digite o peso da nota%d: ",i+1);
                    scanf("%d", &pesosNotas[i]);
                }
                printf("A media ponderada do aluno eh: [%.2f]\n", calcularMediaPonderada(notasAlunos, pesosNotas));
                lerEnterELimparMenu();
            break;
            case 6:
                printf("Ler Valores e Mostrar o Maior e Menor\n");
                do{
                    printf("Quantos valores deseja informar? [Informe no Minimo 2 valores]");
                    scanf("%d", &NumeroDeValores);
                }while(NumeroDeValores < 2);
                lerValores(NumeroDeValores);
                lerEnterELimparMenu();
            break;
            case 7:
                printf("Somatoria dos Quadrados\n");
                printf("Informe os valores: \n");
                for(int i = 0; i < 3; i++){
                    printf("Digite a valor%d: ",i+1);
                    scanf("%d", &numeros[i]);
                }
                printf("A Somatoria dos quadrados eh: [%.2f]\n", somatoriaDosQuadrados(numeros));
                lerEnterELimparMenu();
            break;
            case 8:
                printf("Validar Data\n");
                printf("Informe o dia: ");
                scanf("%d", &dia);
                printf("Informe o mes: ");
                scanf("%d", &mes);
                printf("Informe o ano: ");
                scanf("%d", &ano);
                int verdadeiraOuFalsa = validarData(dia, mes, ano);
                printf("Sua data eh: [%s]\n", verdadeiraOuFalsa == 0 ? "Falsa" : "Verdadeira");
                lerEnterELimparMenu();
            break;
            case 9:
                printf("Soma dos Valores entre 1 e N (0<N<30) recursividade\n");
                do{
                    printf("Informe um valor: ");
                    scanf("%d", &valor);
                }while(valor <= 0 || valor > 30);
                printf("\nA soma dos valores entre 1 e N eh: [%d]\n", somaValoresEntreUmEN(valor));
                lerEnterELimparMenu();
            break;
            case 10:
                printf("Soma dos Quadrados recursividade\n");
                do{
                    printf("Informe um valor: ");
                    scanf("%d", &valor);
                }while(valor <= 0 || valor > 10);
                printf("A soma dos quadrados entre 1 e N eh: [%d]\n", somaDosQuadradosRecursividade(valor));
                lerEnterELimparMenu();
            break;
            case 11:
                printf("Encerrando programa...");
                return 0;
            break;
            default:
                printf("Escolha invalida, digite uma escolha valida\n");
                lerEnterELimparMenu();
            break;
        }
    }while(escolha != 11);
return 0;
}
