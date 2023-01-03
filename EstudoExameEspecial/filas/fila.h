#ifndef FILA_H_
#define FILA_H_

typedef struct structItem {
	int chave;
} ITEM;

typedef struct structElementoFila {
	ITEM item;
	struct structElementoFila* proximoElementoFila;
}CELULA;

typedef struct structFila {
CELULA* Inicio;
CELULA* final;
} FILA;

FILA* fila;

FILA* cria();
int vazia(FILA*);
int enfileira(FILA*, ITEM);
int desenfileira(FILA*, ITEM*);

#endif 