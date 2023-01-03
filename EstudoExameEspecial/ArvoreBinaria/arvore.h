#if !defined (ARVORE_H)
#define ARVORE_H

typedef struct {
    int chave;
}ITEM;

typedef struct NO_TAG *PONT;

typedef struct NO_TAG
{
    ITEM item;
    PONT esq,dir;
}NO;

typedef PONT ARVORE;

void cria(ARVORE*);
int pesquisa(ITEM*, PONT*);
int insere(ITEM,PONT*);
int retira(ITEM,PONT*);
void percorreIn(PONT p);
void percorrePre(PONT P);
void percorrePos(PONT p);

#endif
