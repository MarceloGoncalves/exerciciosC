#include<stdio.h>
void Swap(int *v, int x, int y){
    int aux;
    aux = v[x];
    v[x] = v[y];
    v[y] = aux;
    }


int Part(int *v, p+1, q){
    int i = v[0];
    int fim = v[q];

    while(p<q){
        while(vet[p]<i && p<=fim){
            p++;
            }
        while(vet[q]>i && q>=i){
            q--;
            }
        }

    if(p<q){
        Swap(v,p,q);
    }

    if(v[i]> v[q]){
        Swap(v,i,q);
        }
return(q);

    }

void quicksort(int *v, p, q){
    int r;
    if(p<q){
        r=Part(v,p,q);
        quicksort(v,p,r-1);
        quicksort(v,r+1,q);
        }
    }
