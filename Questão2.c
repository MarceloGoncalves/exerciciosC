#include <stdio.h>
#include <conio.h>

struct casa{
    int qtd_quartos;   
    char cor[20];   
    float area;   
    int qtd_portas;      
};
typedef struct casa *Casa;

int main(){
   Casa c1 = (Casa) malloc(sizeof(struct casa));
   Casa c2 = (Casa) malloc(sizeof(struct casa));

printf("Digite a quantidade de quartos: ");
       scanf("%d",&c1->qtd_quartos);  

printf("Digite a cor da casa: ");
       scanf(" %[^\n]",c1->cor); 
    
printf("Digite a Area: ");
       scanf("%f",&c1->area);     
    
printf("Digite a quantidade de portas: ");
       scanf("%d",&c1->qtd_portas);     
    
//SEGUNDA CASA  
 
printf("Digite a quantidade de quartos: ");
       scanf("%d",&c2->qtd_quartos);  

printf("Digite a cor da casa: ");
       scanf(" %[^\n]",c2->cor); 
    
printf("Digite a Area: ");
       scanf("%f",&c2->area);     
    
printf("Digite a quantidade de portas: ");
       scanf("%d",&c2->qtd_portas);  
    
//IMPRIMINDO NA TELA

printf("\nDados da casa 1: Quantidade de quartos: %d, Cor da casa: %s, Area: %f, Quantidade de portas: %d",c1->qtd_quartos,c1->cor,c1->area,c1->qtd_portas);
printf("\nDados da casa 2: Quantidade de quartos: %d, Cor da casa: %s, Area: %f, Quantidade de portas: %d",c2->qtd_quartos,c2->cor,c2->area,c2->qtd_portas);
    getch ();
 return 0;   
}
