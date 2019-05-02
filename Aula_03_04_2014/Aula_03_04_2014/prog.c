#include <stdio.h>
#include "fila.h"

int main(){
  int opc, valor;
  Fila *impa;
  Fila *par;
  do{
	printf("Digite a opção desejada: \n 1- Criar Fila \n2- Inserir \n 3- Remover \n 4- Imprimir \n5- Verificar se a fila está vazia \n 6- sair");
    	scanf("%d", &opc);

	switch(opc){
	  case 1:
             impa = criar();
             par = criar();
 		printf("Fila criada com sucesso");
 	     break;
	  case 2:
 	    printf("Digite o valor a ser inserido na fila");
 		scanf("%d", &valor);
            if((valor%2) == 0){
                inserir (par, valor);
                }
            else{
     		inserir(impa, valor);
            }
	     break;
	  case 3:
  	    valor = remover(par);
	    printf("O valor removido foi %d", valor);
	   break;
	  case 4:
		imprimir(par);
		printf("\n");
		imprimir(impa);
	        break;
	  case 5:
	 	if(vazia(par)) printf("A fila está vazia");
		else printf("A fila não está vazia");
		break;
	  case 6:
        	liberar(par);
		printf("Programa encerrado com sucesso");
		break;
          default: printf("Opção Inválida");
	}
  }while(opc != 6);
  return(0);
}
