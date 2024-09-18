#include <stdio.h>

int main() {
    int A[10]; 
    int M[10];
    int X, i;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero para a posicao %d do vetor A: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nDigite o valor de X: ");
    scanf("%d", &X);

    for (i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }

    printf("\nVetor M (resultado das multiplicacoes):\n");
    for (i = 0; i < 10; i++) {
        printf("M[%d] = %d\n", i + 1, M[i]); 
    }

    return 0;
}
