#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct pessoa{
      char nome[50]; 
      char endereco[50];
      char telefone [10];      
};
typedef struct pessoa *Pessoa;

int main(){
    Pessoa p1 = (Pessoa)malloc(sizeof(struct pessoa));
    Pessoa p2 = (Pessoa)malloc(sizeof(struct pessoa));
    Pessoa p3 = (Pessoa)malloc(sizeof(struct pessoa));
    
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]",p1->nome);
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]",p1->endereco);
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]",p1->telefone);
    
    //SEGUNDA PESSOA
    
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]",p2->nome);
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]",p2->endereco);
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]",p2->telefone);
    
    //TERCEIRA PESSOA
    
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]",p3->nome);
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]",p3->endereco);
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]",p3->telefone);



    getch ();
 return 0;   
}
