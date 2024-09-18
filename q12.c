#include <stdio.h>

int main() {
    int numeros[30]; 
    int i, numero_verificar, contador = 0;

    for (i = 0; i < 30; i++) {
        printf("Digite o numero para a posicao %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite um numero para verificar quantas vezes ele aparece no vetor: ");
    scanf("%d", &numero_verificar);

    for (i = 0; i < 30; i++) {
        if (numeros[i] == numero_verificar) {
            contador++;
        }
    }

    printf("\nO numero %d aparece %d vezes no vetor.\n", numero_verificar, contador);

    return 0;
}
