#include <stdio.h>

int pattern(int L[], int n){
	int soma_maxima = 0;	
	int i, j, k;
	for(i = 0; i < n; i++) {		
		for(j = i; j < n; j++) {
			int s = 0;			
			for(k = j; k >= i; k--)
				s+= L[k];
			if(s > soma_maxima) soma_maxima = s;
		}
	}
	return soma_maxima;
}

int main () {
	int L[] = {-4, -1, -6, -1, -10, -1,-3};
	int n = 7;
	int soma = pattern(L, n);
	printf("Soma: %d\n", soma);
	return 0;
}
