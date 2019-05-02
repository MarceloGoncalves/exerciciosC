#include <stdio.h>

int merge (int *M[], int m, int n, int *L) {
	int idxs[m]; //Este vetor guarda o quantidade de valores desconsiredos em cada vetor de M (por isso ele tem tamanho m)
	int i; // Controle de laço	
	for(i = 0; i < m; i++) idxs[i] = 0; //Inicia cada item de idxs com zero (que é a quantidade de elementos desconsiderado no início)
	i = 0; // Este i controlará os índeces do vetor cópia - L
	int total = 0; // Total de comparações
	for(;;) { // Laço infinito
		int  j = 0, t = -1; // j indicará em qual vetor está eleita a menor chave da rodada e t guarda o índece da menor chave considerada
		while(j < m){ // Percorre idxs procurando vetores não nulos
			if (idxs[j] < n) { // Se não for nulo...
				t = j++; // Atribui como j (vetor que guarada a menor chave) e incrementa j (na frente entenderá o por que do incremento)
				break; //Sai do laço, pois já foi eleito o vetor
			} else j++;	//Se o vetor estiver vazio, passa para o próximo até encontrar um não-vazio	
		}		
		if(t == -1) break; // Se não econtrar nenhum vazio o teto continua como -1, então sai-se do laço, pois todos os vetores foram analisados
		for(;j < m; j++){ // Inicia o laço de comparações, o j, agora, já referencia o próximo vetor (incremento) do vetor onde está t, a menor chave
			if(idxs[j] < n){ // Se o vetor não estiver vazio...
				if(M[j][idxs[j]] <= M[t][idxs[t]]) //Compara o indece de j apartir dos não desconsiderados com t, onde está a menor chave
					t = j; //Se for menor ou igual atribui o indece à j
				total++;//Incrementa o total
			}		
		}
		L[i] = M[t][idxs[t]]; //No final de cada rodada atribui-se a i-ésima posição em L para o menor da rodada
		i++; //Incrementa a variável de controle de L
		idxs[t]++; //Desconsidera uma chave do vetor onde está a menor chave
	}
	return total;
}
int main(){
	int a[] = {1, 2, 3};
	int b[] = {4, 5, 6};
	int c[] = {7, 8, 9};
	int d[] = {10, 11, 12};	
	int* M[] = {a, b, c, d};
	int L[12];
	int t = merge(M, 4, 3, L);
	printf("Comparações: %d\n", t);
	int i;
	for(i = 0; i < 12; i++)
		printf("[%d]", L[i]);	
	printf("\n");	
	return 0;
}
