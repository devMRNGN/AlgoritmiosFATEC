#include <stdio.h>
#include <stdlib.h>

void imprimirPares(){
    /* Escreva um programa que imprima todos os n�meros pares de 0 a 100
        usando a estrutura de repeti��o for */
    for(int i = 0; i <= 100; i=i+2){
        printf("[ %d ]  ", i);
    }
}

void tabuada(){
    /* Escreva um programa que pe�a ao usu�rio para digitar um n�mero e imprima
    a tabuada desse n�mero at� 10 usando a estrutura de repeti��o while.*/
    int numero;
    int i = 1;
    printf("\nDigite um numero: ");
    scanf("%d",&numero);
    while(i <= 10){
        printf("%d x %d = [ %d ]\n",numero,i,numero*i);
        i++;
    }
}

void calcularMedia(){
    /* Escreva um programa que calcule a m�dia de uma lista de n�meros.
    A lista deve ser preenchida pelo usu�rio e o programa deve utilizar a
    estrutura de repeti��o do while. */
    int tamanhoDaLista;
    int resultado = 0;
    int lista[tamanhoDaLista];
    printf("Digite o tamanho da lista: \n");
    scanf("%d",&tamanhoDaLista);
    for(int i = 0; i < tamanhoDaLista; i++){
        printf("Digite um valor para preencher a lista: \n");
        scanf("%d",&lista[i]);
    }
    for(int i = 0; i < tamanhoDaLista; i++){
        resultado += lista[i];
    }
    printf("Media da respectiva lista: [ %d ]\n",resultado/tamanhoDaLista);
}

void imprimaFormaDecrescenteImpares(){
    /* Escreva um programa que imprima os n�meros
    �mpares de 1 a 50 em ordem decrescente usando a
    estrutura de repeti��o for.*/

    for(int i = 49; i >= 1; i=i-2){
        printf("[ %d ]",i);
    }
    printf("\n");
}

void fibonacci(){
    /* Escreva um programa que pe�a ao usu�rio para digitar
    um n�mero e imprima a sequ�ncia de Fibonacci at� esse
    n�mero usando a estrutura de repeti��o while.*/

    int numero;
    int anterior1 = 1;
    int anterior2 = 1;
    int produto = 0;
    printf("\nInforme o numero desejado: \n");
    scanf("%d",&numero);
    while((anterior1+anterior2) <= numero){
        produto = anterior1 + anterior2;
        printf("[ %d ] [ %d ] [ %d ]\n", anterior1, anterior2, produto);
        anterior1 = anterior2;
        anterior2 = produto;
    }
    printf("\n\n\n");
}

void fizzBuzz(){
    /* Escreva um programa que imprima os n�meros de 1 a 100.
    Mas para m�ltiplos de 3, imprima "Fizz" em vez do n�mero e
    para m�ltiplos de 5, imprima "Buzz". Para n�meros m�ltiplos
    de ambos 3 e 5, imprima "FizzBuzz".
    Use a estrutura de repeti��o for.*/

    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("[ FizzBuzz ]");
        }else if(i % 3 == 0){
            printf("[ Fizz ]");
        }else if(i % 5 == 0){
            printf("[ Buzz ]");
        }else {
            printf("[ %d ]",i);
        }
    }
}

void calculaSoma(){
    /* Escreva um programa que calcule a soma
    de todos os n�meros entre 1 e 100 usando
    a estrutura de repeti��o do while. */

    int acumulador = 0;
    int i = 1;
    while(i <= 100){
        acumulador += i;
        i++;
    }
    printf("Soma dos n�meros de 1 a 100 = [ %d ]\n",acumulador);
}

void tabelaMultiplicacao(){
    /* Escreva um programa que imprima a
    tabela de multiplica��o de 1 a 10 usando
    a estrutura de repeti��o for.*/
    int resultado;
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            resultado = i * j;
            printf("%d x %d = [%d] ",i, j, resultado);
        }
        printf("\n");
    }
}

void fatorial(){
    /* Escreva um programa que calcule o fatorial de
    um n�mero fornecido pelo usu�rio usando a
    estrutura de repeti��o do while.*/
    int num;
    int i = 2;
    int resultado = 1;
    printf("Informe um numero: ");
    scanf("%d",&num);
    do{
        resultado = resultado * num;
        num--;
    }while(num >= i);
    printf("Numero em fatorial: [ %d ]\n",resultado);
}

/* EXERCICIO MATRIZES */

void vetorTenNumbers(){
    /* Escreva um programa que leia um vetor de
    10 n�meros inteiros e imprima o maior e o
    menor valor do vetor.*/
    int vetor[10];
    for(int i = 0; i < 10; i++){
        printf("Informe um numero: ");
        scanf("%d",&vetor[i]);
    }
    int maior = vetor[0];
    int menor = vetor[0];
    for(int i = 0; i < 10; i++){
        if(vetor[i] > maior) maior = vetor[i];
        if(vetor[i] < menor) menor = vetor[i];
    }
    printf("Maior numero [ %d ] - Menor numero [ %d ]\n",maior,menor);
}

void somaDosParesDeUmVetor(){
    /* Escreva um programa que leia um vetor de
    10 n�meros inteiros e imprima a soma de todos
    os n�meros pares do vetor.*/
    int vetor[10];
    int sum = 0;
    for(int i = 0; i < 10; i++){
        printf("Informe um n�mero: \n");
        scanf("%d",&vetor[i]);
    }
    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0) sum+=vetor[i];
    }
    printf("A soma dos numeros pares da [ %d ]\n",sum);
}

void substituaNegativoPorZero(){
    /* Escreva um programa que leia um vetor de
    10 n�meros inteiros e substitua todos os valores
    negativos por zero.*/
    int vetor[10];
    for(int i = 0; i < 10; i++){
        printf("Informe um valor: \n");
        scanf("%d",&vetor[i]);
    }
    for(int i = 0; i < 10; i++){
        if(vetor[i] < 0) vetor[i] = 0;
    }
    for(int i = 0; i < 10; i++){
        printf("[ %d ] - ", vetor[i]);
    }
    printf("\n");
}

void diagonalPrincipal(){
    /* Escreva um programa que leia uma matriz 3x3
    e imprima a diagonal principal da matriz.*/
    int matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Informe um valor: \n");
            scanf("%d",&matriz[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        printf("index %d%d = [ %d ] - ",i,i,matriz[i][i]);
    }
    printf("\n");
}

void somaDasColunas(){
    /* Escreva um programa que leia uma matriz 3x3
    e imprima a soma dos valores de cada coluna da matriz.*/
    int matriz[3][3];
    int soma[3] = {0};
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("Informe um valor: \n");
            scanf("%d",&matriz[linha][coluna]);
        }
    }
    for(int coluna = 0; coluna < 3; coluna++){
        for(int linha = 0; linha < 3; linha++){
            soma[coluna] += matriz[coluna][linha];
        }
    }
    for(int i = 0; i < 3; i++){
        printf("Soma %d = [ %d ]\n",i,soma[i]);
    }
}

void somaDeMatrizes(){
    /* Escreva um programa que leia duas matrizes 3x3
    e imprima a soma das duas matrizes.*/
    int matriz1[3][3];
    int matriz2[3][3];
    int soma[3][3];
    printf("Informe matriz 1 \n");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("Informe um valor: \n");
            scanf("%d",&matriz1[linha][coluna]);
        }
    }
    printf("Informe matriz 2 \n");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("Informe um valor: \n");
            scanf("%d",&matriz2[linha][coluna]);
        }
    }
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            soma[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
        }
    }
    printf("Soma das matrizes\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[ %d ]",soma[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    somaDeMatrizes();
    somaDasColunas();
    diagonalPrincipal();
    substituaNegativoPorZero();
    somaDosParesDeUmVetor();
    vetorTenNumbers();
    fatorial();
    tabelaMultiplicacao();
    calculaSoma();
    fizzBuzz();
    fibonacci();
    imprimaFormaDecrescenteImpares();
    calcularMedia();
    tabuada();
    imprimirPares();
    return 0;
}
