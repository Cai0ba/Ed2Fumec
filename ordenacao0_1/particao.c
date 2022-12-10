#include <stdio.h>

void imprime(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d", v[i]);
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{

    int vet[] = {0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 0};
    int tam = sizeof(vet) / sizeof(int);
    int pivo = 1;
    int i = 0, j = tam - 1, aux = 0;
    imprime(vet, tam);
    do
    {

        while (pivo > vet[i])
            i++;
        while (pivo <= vet[j])
            j--;
        if (i <= j)
        {
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i++; j--;
        }
    } while (i <= j);
    imprime(vet, tam);
    printf("i = %d,j = %d\n", i, j);
    return 0;
}
