#include <stdio.h>
#include <stdlib.h>

int main(){
    float *numeros, troca;
    int i, j, n;

    printf("Entre com o numero n do array: ");
    scanf("%d", &n); // Recebe o tamanho do vetor

    numeros = malloc(n * sizeof(float)); // Aloca a memória para o ponteiro

    printf("Agora insira os %d numeros:\n", n);
    for (i = 0; i < n; i++){
        scanf("%f", &numeros[i]); // Lê os valores de n elementos digitados pelo usuário
    }

    for (i = 0; i < n - 1; i++){ // n-1 pois cada passagem coloca um numero no lugar certo
        for (j = 0; j < n - 1 - i; j++){ //ignora os ultimos termos
            if (numeros[j] > numeros[j + 1]){
                troca = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = troca;
            }
        }
    }

    printf("Os valores em ordem são:\n");
    for (i = 0; i < n; i++){
        printf("%f\n", numeros[i]); // Imprime na tela os valores em ordem
    }

    free(numeros);
    return 0;
}
