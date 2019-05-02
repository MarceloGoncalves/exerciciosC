#include <stdio.h>

void ordenacao_selecao(int *v, int n){
     int i, j, pos_max, max;

    for(i=0;i<n;i++){ // percorro todos os elementos do vetor, ordenando a posição i
       pos_max = i;

       for(j=i+1; j<n;j++){ // percorro os elementos a direita de i encontrando o menor valor
          if(v[j]> v[pos_max])
            pos_max = j;
       }

       // trocando elementos do vetor
       max= v[pos_max];
      v[pos_max] = v[i];
      v[i] = max;
    }
}

int main(){
   int v[4] = {60, 70, 61, 75};
   ordenacao_selecao(v, 4);
   int i =0;
   for(i=0; i<4;i++)
     printf("\n Elemento %d do vetor %d", i, v[i]);



   return(0);

}















