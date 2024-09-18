#include <stdio.h>
int main (){
	int i, Q[20];
	int maior, posicao;

    for(i = 0; i < 20; i++) {
    	printf("digite um valor positivo para o vetor: ");
    	scanf("%d", &Q[i]);
    	if(Q[i] < 0){
    		printf("apenas numeros positivos sao aceitos!");
    		return 1;
		}
	}	
	
	maior = Q[0];
    posicao = 0;

    for (i = 1; i < 20; i++) {
        if (Q[i] > maior) {
            maior = Q[i];
            posicao = i;
        }
    }
    printf("\nO maior valor no vetor eh: %d\n", maior);
    printf("A posicao do maior valor eh: %d\n", posicao + 1);

}