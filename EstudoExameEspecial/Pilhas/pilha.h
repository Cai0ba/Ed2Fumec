#if !defined(PILHA_H)
#define PILHA_H

typedef struct CELULA_TAG *PONT;

typedef struct
{
    int chave;
} ITEM;

typedef struct CELULA_TAG
{
    ITEM item;
    PONT prox;
} CELULA;

typedef struct
{
    PONT fundo, topo;
    int tamanho;
} PILHA;

void cria(PILHA *);
int vazi(PILHA *);
int push(ITEM, PILHA *);
int pop(PILHA *, ITEM);
int look(PILHA *, ITEM *);
int tamanho(PILHA);
#endif