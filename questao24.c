#include <stdio.h>
#include <stdlib.h>

void multiplica_matrizes(int **matriz_a, int **matriz_b, int **matriz_c, int numlin_a, int numcol_a, int numcol_b){
    int i, j, k;
    for (i = 0 ; i < numlin_a; i++){
        for (j = 0; j < numcol_b; j++){
            matriz_c[i][j] = 0;
            for (k = 0; k < numcol_a; k++){
                matriz_c[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
        }
    }
}

int main(){
    int **matriz_a, **matriz_b, **matriz_c, numlin_a, numcol_a, numcol_b, i, j;

    //leitura do numeros de linha e colunas de a e b
    printf("Digite o numero de linhas de A, colunas de A e colunas de B:\n");
    scanf("%d %d %d", &numlin_a, &numcol_a, &numcol_b);

    //alocar memoria para a matriz A
    matriz_a = (int **)malloc(numlin_a * sizeof(int *));
    for (i = 0; i < numlin_a; i++){
        matriz_a[i] = (int *)malloc(numcol_a*sizeof(int)); //retorna um ponteiro para inteiro
    }
    //alocar memoria para a matriz B
    matriz_b = (int **)malloc(numcol_a * sizeof(int *));
    for (i = 0; i < numcol_a; i++) {
        matriz_b[i] = (int *)malloc(numcol_b * sizeof(int));
    }
    //alocar memoria para a matriz C
    matriz_c = (int **)malloc(numlin_a * sizeof(int *));
    for (i = 0; i < numlin_a; i++) {
        matriz_c[i] = (int *)malloc(numcol_b * sizeof(int));
    }

    // preenchimento da a matriz A
    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < numlin_a; i++) {
        for (j = 0; j < numcol_a; j++) {
            scanf("%d", &matriz_a[i][j]);
        }
    }

    // preenchimento da a matriz B
    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < numcol_a; i++) {
        for (j = 0; j < numcol_b; j++) {
            scanf("%d", &matriz_b[i][j]);
        }
    }

    multiplica_matrizes(matriz_a, matriz_b, matriz_c, numlin_a, numcol_a, numcol_b); // chama a funcao para multiplicar as matrizes

    //retorna  o matriz c , resultado de a x b
    printf("\nMatriz c :\n");
    for (i = 0; i < numlin_a; i++) {
        for (j = 0; j < numcol_b; j++) {
            printf("%d ", matriz_c[i][j]);
        }
        printf("\n");
    }

    // Liberação da memoria em ordem decrescente do que foi alocado , isso ocorre devido se liberar a colunas antes das linhas  ,perde o endereço de dos outros alementos que não foi liberado.
    for (i = 0; i < numlin_a; i++) {
        free(matriz_a[i]);
        free(matriz_c[i]);
    }
    for (i = 0; i < numcol_a; i++) {
        free(matriz_b[i]);
    }
    free(matriz_a);
    free(matriz_b);
    free(matriz_c);

    return 0;
}
