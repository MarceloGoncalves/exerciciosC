#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#define N 10

struct fila{
   int v[N];
   int qtd_elem;
};

Fila* criar(){
   Fila *f = (Fila*)malloc(sizeof(Fila));
   f->qtd_elem = 0;
    return(f);
}

int cheia(Fila *f){
   if(f->qtd_elem == N) return 1;
   else return(0);
}

void inserir(Fila *f, int valor){
   if(f->qtd_elem == N) printf("A fila está cheia");
   else{
      f->v[f->qtd_elem] = valor;
      f->qtd_elem += 1;
   }
}

int vazia(Fila *f){
  if(f->qtd_elem ==0) return 1;
  else return 0;
}

int remover(Fila *f){
   int i, valor;
   if(vazia(f)){ printf("A fila está vazia, não é possivel fazer remoção");
    exit(1);
   }
   valor = f-> v[0];
   for(i=1;i<f->qtd_elem; i++)
       f->v[i-1] = f->v[i];
   f->qtd_elem -= 1;
   return(valor);
}

void imprimir(Fila *f){
  int i;
  for(i=0; i<f->qtd_elem; i++)
    printf("\nO elemento  %d da Fila é  %d", i, f->v[i]);
}

void liberar(Fila *f){
  free(f);
}
