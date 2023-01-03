#include <stdlib.h>
#include "fila.h"

FILA* cria()
{
    FILA *fila = (FILA *)malloc(sizeof(FILA));

    if (fila != NULL)
    {
        fila->final = NULL;
        fila->Inicio = NULL;
    }
}

int vazia(FILA* fila)
{
    if (fila == NULL)
        return 1;
    if (fila->Inicio == NULL)
        return 1;

    return 0;
}

int enfilera(FILA* fila, ITEM item)
{
    if (fila == NULL)
        return 0;

    CELULA *celula = (CELULA *)malloc(sizeof(CELULA));
    if (celula == NULL)
        return 0;

    celula->item = item;
    celula->proximoElementoFila = NULL;
    if (fila->final == NULL)
        fila->Inicio = celula;
    else
        fila->final->proximoElementoFila = celula;
    fila->final = celula;
    return 1;
}

int desenfilera(FILA* fila,ITEM* item){
    if(fila == NULL)
    return 0;

    if(fila->Inicio == NULL)
    return 0;

    CELULA* elementofila = fila->Inicio;
    *item = elementofila->item;
    fila->Inicio = fila->Inicio->proximoElementoFila;

    if(fila->Inicio = NULL)
    fila->final = NULL;
    free(elementofila);
    return -1;
}