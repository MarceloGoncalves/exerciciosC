#include <stdio.h>

int invert(int L[], int n) {
   int total = 0;

   /* CODIFIQUE AQUI */
   int i, j;
   for(j=0;j<n-1;j++){
        for(i=j+1;i<n;i++){
            if(L[j]>L[i])
                total++;
        }

   return total;
}

int insertSort(int v[], int n){
    int total = 0;
    int i, j;

    for(i==1;i<n;i++){
        int x = v[i];
        for(j=i-1;j>=0;j--){
            total++;
            if(x<v[j])
                v[j+1] = v[j];
            else
                break;
        }
        v[j+1] = x;
    }
    for(i=0;i<n;i++)
        printf("%d\n",v[i]);
    return total;
}

void swapTasl(int v[], int i, int j){
    int c = v[i];
    v[i] = v[j];
    v[j] = c;
}

int bubble(int L[], int n){
    int total = 0;

    int i,j;
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(L[j]>L[j+1]){
                swapTasl(L,j,j+1);
                total++;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",L[i]);

    return total;
}

int _part_(int L[], int p, int q){
    int i, j=p-1;
    for(i=p;i<q;i++){
        if(L[i]<L[q]){
            j++;
            swapTasl(L,i,j);
            //printf("j: %d\n",j);
        }
    }
    swapTasl(L,j+1,q);
    return j+1;
}

int part(int L[], int p, int q, int r){

    int chave = 0;

    int i,j;
    for(i=p;i<=q;i++){
        int aux[q-p+1];
        for(j=0;j<(q-p+1);j++){
            aux[j] = L[p+j];
        }
        swapTasl(aux, i, q-p);
        int res = _part_(aux,0,q-p);
            //printf("part: %d\n",res);
        if(res==r){
            chave = aux[r];
            break;
        }
    }

    return chave;
}

int partRicardo(int v[], int p, int q){
    int i, j=p-1;
    for(i=p;i<q;i++){
        if(v[i]<v[q]){
            j++;
            swapTasl(v,i,j);
        }
    }
    swapTasl(v,j+1,q);
    return j+1;
}

void _quicksort_(int v[], int p, int q){
    if(p<q){
        int r = _part_(v,p,q);
        _quicksort_(v,p,r-1);
        _quicksort_(v,r+1,q);
    }
}

void quicksort(int v[], int n){
    _quicksort_(v,0,n-1);
}

int main(){
    int v[] = {40,30,20,10};
    //printf("%d",invert(vet,4));
    //printf("%d",insertSort(vet,4));
    //printf("%d",bubble(v, 4));
    printf("%d",part(v,0,3,3));
    //quicksort(v,4);
    //int i;
    //for(i=0;i<4;i++)
        //printf("%d\n",v[i]);
getch();
return 0;
}



