#ifndef TABELAHASH_H_
#define TABELAHASH_H_

#define TAM_TABELA 997
#define TAM_CHAVE 20
#define VAZIO "---------------------"
#define RETIRADO "*********************"

typedef char CHAVE[TAM_CHAVE + 1];

typedef struct structItem {
	CHAVE nome;
	double preco;
} ITEM;

typedef ITEM HASH[TAM_TABELA];


void criaHash(HASH);
int h(CHAVE);

void carregaDadosHashEnderecoAberto(HASH);
int buscaHashEnderecoAberto(HASH, CHAVE, ITEM*);
int insereHashEnderecoAberto(HASH, ITEM);
int removeHashEnderecoAberto(HASH, CHAVE, ITEM*);
int alteraHashEnderecoAberto(HASH, CHAVE, ITEM*);

void carregaDadosHashListaEncadeada(HASH);
int buscaHashListaEncadeada(HASH, CHAVE, ITEM*);
int insereHashListaEncadeada(HASH, ITEM);
int removeHashListaEncadeada(HASH, CHAVE, ITEM*);
int alteraHashListaEncadeada(HASH, CHAVE, ITEM*);

#endif /* TABELAHASH_H_ */