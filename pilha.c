#include <stdio.h>
#include <malloc.h>
#include "pilha.h"

Pilha* create(int n){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->M = (int*) malloc(sizeof(int) * n);
    p->capacidade = n;
    p->altura = 0;
    return(p);
};

void push(Pilha *p, int x){
    if (!full(p)){
        p->altura = (p->altura + 1);
        p->M[p->altura] = x;
    }
    else printf("\npilha cheia");
}
int top(Pilha *p){
    if(!empty(p)){
        return p->M[p->altura];
    }
    else{
        printf("Pilha vazia");
        }
    return 0;
}

void pop(Pilha *p){
    if(!empty(p)){
        p->altura = p->altura-1;
        }
        else{
            printf("Pilha Vazia");
            }
    }
int empty(Pilha *p){
    return p->altura == 0;
    }

int full(Pilha *p){
    return p->altura == p->capacidade ;
}

void destroy(Pilha *p){
    free(p->M);
    p->capacidade = p->altura = 0;
    free(p);
    }
