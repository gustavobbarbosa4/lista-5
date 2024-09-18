#include <stdio.h>
int main () {
	float v_notas[20], media,contar_media;
	int i, j;
	
	for(i = 0; i < 20; i++) {
		printf("digite as notas dos alunos: ");
		scanf("%f", &v_notas[i]);
	}

	for(j = 0; j < 20; j++) {
	media += (v_notas[j]) / 20;	
	}
	
	printf("media: %.2f\n", media);
	
	for(i = 0; i < 20; i++){
		if(v_notas[i] > media){
			contar_media++;
		}
	}
	
	printf("o numero de alunos com nota acima da media eh: %.2f", contar_media);
	
	return 0;
	
}