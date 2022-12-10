#include <stdio.h>
#include <stdlib.h>
#include "fila.c"
#include "fila.h"


int main(void) {
	setbuf(stdout, NULL);

	FILA* fila = cria();
	ITEM item;
	ITEM item2;

	item.chave = 123;
    item2.chave = 456;

	printf("Vazia? %i", vazia(fila));

	enfileira(fila, item);
	enfileira(fila, item2);


	printf("\nVazia? %i", vazia(fila));

	ITEM itemBuscado;
	desenfileira(fila, &itemBuscado);

	printf("\nVazia? %i", vazia(fila));


	return EXIT_SUCCESS;
}