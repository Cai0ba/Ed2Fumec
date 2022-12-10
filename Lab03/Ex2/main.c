

#include <stdio.h>
#include <stdlib.h>
#include "quickSort.h"
#include "quickSort.c"

int main(int argc, char *argv[]) {
	setbuf(stdout, NULL);

	printf("-- QUICK SORT --\n");

	VETOR v;
	int n = sizeof(v)/sizeof(ITEM);
	int i;

	for(i=0; i<n; i++) v[i].chave = i;

	permuta(v,n);

	printf("Original\n");
	imprime(v,n);

	quicksort(v,n);

	printf("Ordenado\n");
	imprime(v,n);

	system("PAUSE");
	printf("\n\nFim do Programa.");

	return EXIT_SUCCESS;
}