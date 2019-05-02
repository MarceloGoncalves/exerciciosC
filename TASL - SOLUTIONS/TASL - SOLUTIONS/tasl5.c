#include <stdio.h>

void swap(int L[],int p,int q){
	int x = L[p];
	L[p] = L[q];
	L[q] = x;
}

int part (int L[], int p, int q){
	int i,j;
	for(i=p,j=p-1;i<q;i++){
		if(L[i]<L[q]){
			j++;
			swap(L,i,j);
		}
	}
	swap(L,j+1,q);
	return j+1;
}

/*
void _quick_(int L[],int p, int q, int k){	
	if(p<q && k >= 0){
		int res = part(L,p,q);
		printf("$$(%d) %d <-> %d\n", k, L[res], L[q]);		
		_quick_(L,p,res-1, --k);
		_quick_(L,res+1,q, --k);
	}
}

void quick_(int L[], int n, int k) {
	_quick_(L, 0, n-1, k--);
}
*/

void quick(int L[], int n, int k){
	if(n > 0 && k > 0) {
		int res = part(L, 0, n-1);
		printf("(%d) %d <-> %d \n", k, L[res], L[n-1]);
		int nC = n-(res+1), i; 		
		quick(L, res, --k);
		quick(L+res+1, nC, --k);	
	}
}

int main(){
	int L[] = {0,8,7,6,5,4,3,2,1,9};
	//int L_[] = {9,8,7,6,5,4,3,2,1,0};
	quick(L, 10, 12);
	// quick_(L_, 10, 10);
	int i;
	for(i=0;i<10;i++)
		printf("%d ",L[i]);
	printf("\n");
	return 0;
}





