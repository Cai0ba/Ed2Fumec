#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"

void cria(ARVORE *arv)
{
    *arv = NULL;
}

int pesquisa(ITEM *x, PONT *p)
{
    if (*p == NULL)
    {
        return -1;
    }
    if (x->chave < (*p)->item.chave)
        return pesquisa(x, &(*p)->esq);
    if (x->chave > (*p)->item.chave)
        return pesquisa(x, &(*p)->dir);

    *x = (*p)->item;
    return 0;
}

int insere(ITEM x, PONT *p)
{
    if (*p == NULL)
    {
        *p = (PONT)malloc(sizeof(NO));
        (*p)->item = x;
        (*p)->esq = NULL;
        (*p)->esq = NULL;
        return 0;
    }
    if (x.chave < (*p)->item.chave)
        return insere(x, &(*p)->esq);
    if (x.chave > (*p)->item.chave)
        return insere(x, &(*p)->dir);
    return -1;
}

void antecessor(PONT q, PONT *r)
{
    if ((*r)->dir != NULL)
    {
        return;
    }
    q->item = (*r)->item;
    q = *r;
    *r = (*r)->esq;
    free(q);
}

int retira(ITEM x, POMT *p){
    PONT aux;
    if(*p == NULL)
    return -1;

    if(x.chave < (*p)->item.chave)
    return retira(x, &(*p)->esq);

    if(x.chave > (*p)->item.chave)
    return retira(x, &(*p)->dir);

    if((*p)->dir == NULL){
        aux = *p;
        *p = (*p)->esq;
        free(aux);
        return 0;
    }
    if((*p)->esq == NULL){
        aux = *p;
        *p = (*p)->dir;
        free(aux);
        return 0;
    }
    antecessor(*p, &(*p)->esq);
    return 0;
}

void percorreIn(PONT p)
{
    if (p != NULL)
    {
        percorreIn(p->esq);
        printf("%d ", p->item.chave);
        percorreIn(p->dir);
    }
}
void percorrePre(PONT P){
    if(P != NULL){
        printf("%d ", P->item.chave);
        percorrePre(P->esq);
        percorrePre(P->dir);
    }
}
void percorrePos(PONT p){
    if(p != NULL){
        percorrePos(p->esq);
        percorrePos(p->dir);
        printf("%d ", p->item.chave);
    }
}