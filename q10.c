#include <stdio.h>

int main() {
    int numeros[20]; 
    int novo_vetor[19]; 
    int i, j = 0, numero_verificar, encontrado = 0;

    for (i = 0; i < 20; i++) {
        printf("Digite o numero para a posicao %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite um numero para verificar se esta no vetor: ");
    scanf("%d", &numero_verificar);

    for (i = 0; i < 20; i++) {
        if (numeros[i] == numero_verificar) {
            encontrado = 1;
        } else {
            novo_vetor[j] = numeros[i];
            j++;
        }
    }

    if (encontrado) {
        printf("\nO numero %d foi encontrado no vetor.\n", numero_verificar);
        printf("Novo vetor sem o numero %d:\n", numero_verificar);
        for (i = 0; i < 19; i++) {
            printf("%d ", novo_vetor[i]);
        }
    } else {
        printf("\nO numero %d nao foi encontrado no vetor.\n", numero_verificar);
    }

    printf("\n");

    return 0;
}
