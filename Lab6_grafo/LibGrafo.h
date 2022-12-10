#ifndef LIBGRAFO_H_
#define LIBGRAFO_H_

typedef struct structGrafo {
	int ehPonderado;
	int numVertices;
	int grauMax;
	int** arestas;
	float** pesos;
	int* grau;
} GRAFO;

GRAFO* criarGrafo(int, int, int);
void liberarGrafo(GRAFO*);
int inserirAresta(GRAFO*, int, int, int, float);
int removerAresta(GRAFO*, int, int, int);

void buscaProfundidade(GRAFO*, int, int*, int);
void buscaProfundidadeGrafo(GRAFO*, int, int*);
void buscaLarguraGrafo(GRAFO*, int, int*);

#endif /* LIBGRAFO_H_ */