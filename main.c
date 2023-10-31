#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i;
	float *vetor, media, maior, menor;

	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n);

	vetor = (float*) malloc(n * sizeof(float));

	for (i = 0; i < n; i++) 
	{
    	printf("Digite o valor para o %do vetor: ", i+1);
    	scanf("%f",&vetor[i]);
    	media += vetor[i];

   		if (i == 0 || vetor[i] > maior) 
		{
        	maior = vetor[i];
		}
    	if (i == 0 || vetor[i] < menor) 
		{
        menor = vetor[i];
    	}
	}
	media = media/n;
	printf("\nMaior valor: %.2f", maior);
	printf("\nMenor valor: %.2f", menor);
	printf("\nMedia: %.2f\n\n", media);

	free(vetor);
	return 0;
}
