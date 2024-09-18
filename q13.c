#include <stdio.h>

int main() {
    int VET[50]; 
    int i, j;
    int repetido = 0;

    for (i = 0; i < 50; i++) {
        printf("Digite o numero para a posicao %d: ", i + 1);
        scanf("%d", &VET[i]);
    }

    printf("\nVerificando numeros repetidos:\n");
    for (i = 0; i < 50; i++) {
        for (j = i + 1; j < 50; j++) {
            if (VET[i] == VET[j]) {
                repetido = 1;
                printf("Numero %d repetido nas posicoes %d e %d\n", VET[i], i + 1, j + 1);
            }
        }
    }

    if (!repetido) {
        printf("Nao ha numeros repetidos no vetor.\n");
    }

    return 0;
}
