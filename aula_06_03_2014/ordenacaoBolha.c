#include <stdio.h>
void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
void L(){
    printf("\n");
}
void mostrarVetor(int *v, int tam)
{
    int i =0;
    L();
    for(;i < tam; i++)
        printf("%d ", v[i]);
    L();
}

void ordenacao_bolha(int *v, int n){
    int i, j, temp;
    int flag ;
    for(i=n-1; i > 0;i--){ // percorro todos os elementos do vetor, ordenando a posição i

        for(j=0; j<i; j++){
            flag = 0;
            if(v[j] > v[j+1]){ //Quando um elemento maior está uma posição antes no vetor, ele é passado para frente
                flag = 1;
                swap(&v[j], &v[j+1]);
            }
        }
        if(flag == 0)
            return;
    }
}

int main(){
    int k;
   int v[] = {100, 2, 5, 8, 9, 12, 22, 43, 70, 90};
   ordenacao_bolha(v, 10);
   int i =0;
   for(i=0; i<10;i++){
        printf("\nElemento %d do vetor %d", i, v[i]);

   for(k=1100;k>0;k--){
       printf("%d, ",k);
       }

   return(0);
}















