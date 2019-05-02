#include <stdio.h>

int stable (int L[], int n, int key){
	
	int c = 0, p;
	for(p = 0; p < n; p++) 
		if(L[p] == key) c++;
	
	int idxs[c];
	for(c = 0, p = 0; p < n; p++) 
		if(L[p] == key){ 
			idxs[c] = p;
			c++;		
		}
	
	int i, j;

	for(i = 0; i < n-1; i++) {
		int min = i;
		for(j = i+1; j < n; j++)
			if(L[j] < L[min]){				
				min = j;			
			}
		
		if (L[min] == key) {			
			for(p = 0; p < c; p++)
				if(idxs[p] == min) {
					idxs[p] = i; 					
					break;	
				}
		} else if (L[i] == key) {
			for(p = 0; p < c; p++)
				if(idxs[p] == i) {
					idxs[p] = min; 					
					break;	
				}
		}
		int a = L[i];
		L[i] = L[min];
		L[min] = a;
	}

	int k, total = 0;
	
	for(p = c-1; p > 0; p--)
		for(k = p-1; k >= 0; k--)
			if(idxs[k] > idxs[p]) total++;	
	
	return total;				
}

int main(){
	int L[] = {3, 3, 4, 5, 3, 1, 2};
	int n = 7;
	int t = stable(L, n, 3);
	printf("Inversões: %d", t);
	return 0;
}
