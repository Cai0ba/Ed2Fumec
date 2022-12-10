void imprime(int *v, int tam)
{
    printf("\n");
    for (int i = 0; i < tam; i++)
        printf("%02d ", i);

    printf("\n");
    for (int i = 0; i < tam; i++)
        printf("%02d ", v[i]);

    printf("\n");
}

void particao(int *v, int esq, int dir, int *i, int *j)
{
    int temp = 0;
    *i = esq;
    *j = dir;
    //ELemento central
    int pivo = v[(*i + *j) / 2];
    do
    {
        while (v[*i] < pivo)
            (*i)++;
        while (v[*j] > pivo)
            (*j)--;
        if (*i <= *j)
        {
            temp = v[*i];
            v[*i] = v[*j];
            v[*j] = temp;
            (*i)++;
            (*j)--;
        }
    } while (*i <= *j);
}

void ordena(int *v, int esq, int dir)
{
    int i, j;
    
    particao(v, esq, dir, &i, &j);
    
    if (esq < j)
        ordena(v, esq, j);

if(i < dir)
    ordena(v, i, dir);
    
}

void quicksort(int*v, int tam){
    ordena(v,0,tam-1);
}
int main(void)
{
    int vet[] = {6, 30, 2, 45, 78, 0, 33, 85, 17, 1, 4, 90, 45, 34, 72};
    int tam = sizeof(vet) / sizeof(int);
    imprime(vet, tam);

    quicksort(vet,tam);

    imprime(vet, tam);

    return 0;
}
