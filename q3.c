#include <stdio.h>
int main (){
	int i, Q[20];
	int menor, posicao;

    for(i = 0; i < 20; i++) {
    	printf("digite um valor positivo para o vetor: ");
    	scanf("%d", &Q[i]);
    	if(Q[i] < 0){
    		printf("apenas numeros positivos sao aceitos!");
    		return 1;
		}
	}	
	
	menor = Q[0];
    posicao = 0;

    for (i = 1; i < 20; i++) {
        if (Q[i] < menor) {
            menor = Q[i];
            posicao = i;
        }
    }

    printf("\nO menor valor no vetor eh: %d\n", menor);
    printf("A posicao do menor valor eh: %d\n", posicao + 1);
    
    return 0;
}