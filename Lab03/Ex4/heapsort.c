

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "HeapSort.h"

int* preencherVetor(int tam) {
	int* vet = (int*) malloc(sizeof(int) * tam);
	srand(time(0));

	int i;
	for (i = 0; i < tam; i++)
		vet[i] = rand();

	return vet;
}

void exibirVetor(int* vet, int tam) {
	int i;
	for (i = 0; i < tam; i ++ )
		printf("%i ", vet[i]);
}

void heapSort(int* vet, int tam) {
	int i, aux;

	// Criar a heap a partir dos dados
	for (i = (tam - 1) / 2; i >= 0; i--) {
		criaHeap(vet, i, tam -1);
	}

	for (i = tam - 1; i >= 1; i--) {
		aux = vet[0];
		vet[0] = vet[i];
		vet[i] = aux;

		criaHeap(vet, 0, i - 1);
	}
}

void criaHeap(int* vet, int inicio, int final) {
	int aux = vet[inicio];
	int j = inicio * 2 + 1;
	while (j <= final) {
		if (j < final) {
			if (vet[j] < vet[j + 1]) {
				j = j + 1;
			}
		}
		if (aux < vet[j]) {
			vet[inicio] = vet[j];
			inicio = j;
			j = 2 * inicio + 1;
		} else {
			j = final + 1;
		}
	}
	vet[inicio] = aux;
}