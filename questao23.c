#include <stdio.h>
#include <stdlib.h>

void soma_vetores(int* vet1, int* vet2, int* vet_soma, int n){
    for (int i = 0; i < n; i++){
        vet_soma[i] = vet1[i]+vet2[i];
    }
}
int main(){
    int n;

    printf("Digite o tamanho dos vetores:\n");
    scanf("%d", &n);
    int* vet1 = (int *)malloc(n * sizeof(int));
    int* vet2 = (int *)malloc(n * sizeof(int));
    int* vet_soma = (int *)malloc(n * sizeof(int));

    printf("Digite os elementos do vetor 1:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &vet1[i]);
    }

    printf("Digite os elementos do vetor 2:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &vet2[i]);
    }

    soma_vetores(vet1,vet2,vet_soma,n);

    printf("\nResultado da soma:\n");
    for (int i = 0; i < n; i++){
        printf("Resultado[%d] = %d\n", i , vet_soma[i]);
    }

    free(vet1);
    free(vet2);
    free(vet_soma);

    return 0;
}
