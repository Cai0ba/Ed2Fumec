#include <stdio.h>
#include <stdlib.h>
#include "insertionsort.h"
#include "insertionsort.c"

int main(void) {
	setbuf(stdout, NULL);

	printf("-- INSERTION SORT --\n");

	int tam = 0;
	printf("Informe o tamanho do vetor: \n");
	fflush(stdin);
	scanf("%i", &tam);

	long* vet = preencherVetor(tam);

	printf("\nVETOR DESORDENADO\n");
	exibirVetor(vet, tam);

	insertionSort(vet, tam);

	printf("\n\nVETOR ORDENADO\n");
	exibirVetor(vet, tam);

	printf("\n\n");
	system("PAUSE");
	printf("\nFim do programa.");

	return EXIT_SUCCESS;
}