#include <stdio.h>

int main() {
    int numeros[20]; 
    int i;

    for (i = 0; i < 20; i++) {
        printf("Digite o numero para a posicao %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros na ordem inversa:\n");
    for (i = 19; i >= 0; i--) { 
        printf("%d\n", numeros[i]);
    }

    return 0;
}
