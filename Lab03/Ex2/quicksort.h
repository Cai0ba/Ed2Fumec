

#ifndef QUICKSORT_H_
#define QUICKSORT_H_

#define MAXTAM  200

typedef long CHAVE;
typedef struct ITEM_TAG {
	CHAVE chave;
} ITEM;
typedef int INDICE;
typedef ITEM VETOR[MAXTAM];

void selecao(ITEM*, int);
ITEM calcularPivo(INDICE, INDICE, ITEM*);

void particao(INDICE, INDICE, INDICE*, INDICE*, ITEM*);
void ordena(INDICE, INDICE, ITEM*);
void quicksort(ITEM*, int);
double rand0a1();
void permuta(VETOR, int);
void imprime(VETOR, int);

#endif /* QUICKSORT_H_ */