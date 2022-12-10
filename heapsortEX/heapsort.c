#include<stdio.h>
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

void heapfy(int *v, int tam, int pai){
    int esq = 2 * pai +1;
    int dir = 2 * pai + 2;      
    int max =pai;

    if(esq < tam && v[max] < v[esq])
    max = esq;

    
    if(dir < tam && v[max] < v[dir])
    max = dir;

    if(max != pai){
        int temp = v[pai];
        v[pai] = v[max];
        v[max] = temp;
        heapfy(v,tam,max);
    }
}

void heapsort(int *v, int tam){
    for(int i = tam/2-1; i >=0; i--)
    heapfy(v,tam,i);

    for (int i = tam-1; i > 0; i--){
        int temp = v[i];
        v[i] = v[0];
        v[0]=temp;
        heapfy(v,i,0);  
    }

    {
        
    }
    
}

int main(void)
{
    int vet[] = {7,42,3,34,28,95,1,53,97,70,13,17,30,58,74};
    int tamanho = sizeof(vet)/sizeof(int);

    imprime(vet,tamanho);

    heapsort(vet,tamanho);

    imprime(vet,tamanho);

    return 0;

}

