#include <stdio.h>

void swap (int *v, int x, int y){
    int aux;
    aux = v[x];
    v[x] = v[y];
    v[y] = aux;
    }
void bubbleSort(int *v, int n){
    int t;
    t = n;
    int j;
    while(t>0){
        j = 0;
        while(j<t){
            if (v[j] > v[j+1]){
                swap(v,j,j+1);
                }
            j++;
            }
        t--;
        }
    }
void selectionSort(int *v, int n){
    int min, i, j;
    for(i=0; i<(n-1); i++){
        min = i;
        for(j=(i+1);j<n;j++){
            if(v[j]<v[min]){
                min = j;
            }
        }
        swap(v,i,min);
    }

}
void insertionSort(int *v, int n)
{
    int i = 1, x, j;
    while (i<n){
        x = v[i];
        j = i-1;
        while(j>=0 && v[j]>x){
            v[j+1]= v[j];
            j--;
        }
        v[j+1] = x;
        i++;
    }

}

int part(int *v, int p, int q){
    int i = p;
    int j = p-1;
    while(i<q){
        if(v[i]<v[q]){
            j++;
            swap(v,i,j);
        }
        i++;
    }
    swap(v,j+1,q);
    return j+1;
}

void QuickSort(int *v, int p, int q){
    if (p<q){
        int r = part(v,p,q);
        QuickSort(v,p,r-1);
        QuickSort(v,r+1,q);
     }
}


int main(){
    int vet[]={9,8,7,5,6,4,3,2,1};
    int i;
    for(i=0;i<9;i++){
        printf("%d, ",vet[i]);
        }
    QuickSort(vet,0,9);
    printf("\n");
    for(i=0;i<9;i++){
        printf("%d, ",vet[i]);
        }
return 0;
    }
