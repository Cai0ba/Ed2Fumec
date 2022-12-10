#include <stdio.h>
#include <stdlib.h>
#include "heapsort.h"
#include "heapsort.c"

// HeapSort: Ordenação utilizando um tipo de árvore binária
// Todo elemento "pai" do vetor (árvore) possui dois elemento como "filhos"
int main(void) {
	setbuf(stdout, NULL);

	printf("-- HEAP SORT --\n");

	int tam = 0;
	printf("Informe o tamanho do vetor: \n");
	fflush(stdin);
	scanf("%i", &tam);

	int* vet = preencherVetor(tam);

	printf("\nVETOR DESORDENADO\n");
	exibirVetor(vet, tam);

	heapSort(vet, tam);

	printf("\n\nVETOR ORDENADO\n");
	exibirVetor(vet, tam);

	printf("\n\n");
	system("PAUSE");
	printf("\nFim do programa.");

	return EXIT_SUCCESS;
}