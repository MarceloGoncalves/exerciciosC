#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "arvore2.h"


struct no
{
    int valor;
    struct no *esquerda;
    struct no *direita;
    int altura;
};

int altura(struct no *n)
{
    if (n == NULL){
        return 0;
    }
    return n->altura;
}

int max(int a, int b)
{
    return (a > b)? a : b;
}

struct no* novoNo(int valor)
{
    struct no* no = (struct no*)malloc(sizeof(struct no));
    no->valor   = valor;
    no->esquerda   = NULL;
    no->direita  = NULL;
    no->altura = 1;
    return(no);
}

struct no *girarDireita(struct no *y)
{
    struct no *x = y->esquerda;
    struct no *aux = x->direita;


    x->direita = y;
    y->esquerda = aux;


    y->altura = max(altura(y->esquerda), altura(y->direita))+1;
    x->altura = max(altura(x->esquerda), altura(x->direita))+1;


    return x;
}

struct no *girarEsquerda(struct no *x)
{
    struct no *y = x->direita;
    struct no *aux = y->esquerda;

    y->esquerda = x;
    x->direita = aux;


    x->altura = max(altura(x->esquerda), altura(x->direita))+1;
    y->altura = max(altura(y->esquerda), altura(y->direita))+1;


    return y;
}

int balanco(struct no *x)
{
    if (x == NULL)
        return 0;
    return altura(x->esquerda) - altura(x->direita);
}

struct no* distribuirCartas(struct no *jogador, int baralho[]){


	int rand();
	int i;
	int indice;
    srand( (unsigned)time(NULL) );

	for( i = 0 ; i < 10 ;  ) {

		indice = rand() % 52;
		if(baralho[indice] != 0){
			jogador = inserir(jogador, baralho[indice]);
			baralho[indice] = 0;

			i++;
		}

	}
	return jogador;
}





struct no* inserir(struct no* no, int valor)
{

    if (no == NULL)
        return(novoNo(valor));

    if (valor < no->valor)
        no->esquerda  = inserir(no->esquerda, valor);
    else
        no->direita = inserir(no->direita, valor);


    no->altura = max(altura(no->esquerda), altura(no->direita)) + 1;


    int balancox = balanco(no);


    if (balancox > 1 && valor < no->esquerda->valor)
        return girarDireita(no);


    if (balancox < -1 && valor > no->direita->valor)
        return girarEsquerda(no);


    if (balancox > 1 && valor > no->esquerda->valor)
    {
        no->esquerda =  girarEsquerda(no->esquerda);
        return girarDireita(no);
    }


    if (balancox < -1 && valor < no->direita->valor)
    {
        no->direita = girarDireita(no->direita);
        return girarEsquerda(no);
    }

    return no;
}

void imprimir(struct no *raiz)
{
    if(raiz != NULL)
    {
        printf("%d ", raiz->valor);
        imprimir(raiz->esquerda);
        imprimir(raiz->direita);
    }
}

void imprimirpos(struct no *raiz)
{
    if(raiz != NULL)
    {
        imprimir(raiz->esquerda);
        imprimir(raiz->direita);
        printf("%d ", raiz->valor);
    }
}

void imprimirInorden(struct no *raiz)
{
    if(raiz != NULL)
    {

        imprimir(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimir(raiz->direita);
    }
}




int menorCarta(struct no* no)
{
    struct no* x = no;

    while (x->esquerda != NULL)
        x = x->esquerda;

    return x -> valor;
}

struct no* deletarNo(struct no* raiz, int valor)
{

    if (raiz == NULL)
        return raiz;

    if ( valor < raiz->valor )
        raiz->esquerda = deletarNo(raiz->esquerda, valor);

    else if( valor > raiz->valor )
        raiz->direita = deletarNo(raiz->direita, valor);

    else
    {

        if( (raiz->esquerda == NULL) || (raiz->direita == NULL) )
        {
            struct no *aux = raiz->esquerda ? raiz->esquerda : raiz->direita;


            if(aux == NULL)
            {
                aux = raiz;
                raiz = NULL;
            }
            else
             *raiz = *aux;

            free(aux);
        }
        else
        {

            struct no* aux = menorValor(raiz->direita);
            raiz->valor = aux->valor;
            raiz->direita = deletarNo(raiz->direita, aux->valor);
        }
    }

    if (raiz == NULL){
        return raiz;
    }

    raiz->altura = max(altura(raiz->esquerda), altura(raiz->direita)) + 1;

    int balancox = balanco(raiz);

    if (balancox > 1 && balanco(raiz->esquerda) >= 0)
        return girarDireita(raiz);

    if (balancox > 1 && balanco(raiz->esquerda) < 0)
    {
        raiz->esquerda =  girarEsquerda(raiz->esquerda);
        return girarEsquerda(raiz);
    }

    if (balancox < -1 && balanco(raiz->direita) <= 0)
        return girarEsquerda(raiz);

    if (balancox < -1 && balanco(raiz->direita) > 0)
    {
        raiz->direita = girarDireita(raiz->direita);
        return girarEsquerda(raiz);
    }

    return raiz;
}

struct no * menorValor(struct no* no)
{
    struct no* x = no;
    while (x->esquerda != NULL)
        x = x->esquerda;

    return x;
}


