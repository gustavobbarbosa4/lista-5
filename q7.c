#include <stdio.h>

int main() {
    float temperaturas[365];
    float soma = 0, media_anual, menor_temp, maior_temp;
    int i, dias_abaixo_media = 0;

    for (i = 0; i < 365; i++) {
        printf("Digite a temperatura media do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i]; 
    }

    menor_temp = temperaturas[0];
    maior_temp = temperaturas[0];

    for (i = 1; i < 365; i++) {
        if (temperaturas[i] < menor_temp) {
            menor_temp = temperaturas[i];
        }
        if (temperaturas[i] > maior_temp) {
            maior_temp = temperaturas[i];
        }
    }

    media_anual = soma / 365;

    for (i = 0; i < 365; i++) {
        if (temperaturas[i] < media_anual) {
            dias_abaixo_media++;
        }
    }

    printf("\nMenor temperatura do ano: %.2f°C\n", menor_temp);
    printf("Maior temperatura do ano: %.2f°C\n", maior_temp);
    printf("Temperatura media anual: %.2f°C\n", media_anual);
    printf("Numero de dias com temperatura abaixo da media anual: %d\n", dias_abaixo_media);

    return 0;
}
