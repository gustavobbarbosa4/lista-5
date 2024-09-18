#include <stdio.h>

int main() {
    int V1[15], V2[15]; 
    int i, contador_iguais = 0;

    printf("Digite os numeros do vetor V1:\n");
    for (i = 0; i < 15; i++) {
        printf("V1[%d]: ", i + 1);
        scanf("%d", &V1[i]);
    }

    printf("\nDigite os numeros do vetor V2:\n");
    for (i = 0; i < 15; i++) {
        printf("V2[%d]: ", i + 1);
        scanf("%d", &V2[i]);
    }

    for (i = 0; i < 15; i++) {
        if (V1[i] == V2[i]) {
            contador_iguais++;
        }
    }

    printf("\nQuantidade de vezes que V1 e V2 possuem os mesmos numeros nas mesmas posicoes: %d\n", contador_iguais);

    return 0;
}
