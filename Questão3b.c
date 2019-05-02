#include <stdio.h>
#include <conio.h>

struct professor{
    char nome[50];   
    char endereco[50];
    float salario;   
    int idade;   
    char sexo[2];   
    char estado_civil[10];
    char dt_adm[10];
    int qtd_disc;   
       
};
typedef struct professor Professor;

int main(){
    Professor vet[10];
     float soma = 0;
     int i;
   
  for(i=0;i<10;i++){ 
   printf("\nDigite o nome do professor(a): ");
   scanf(" %[^\n]",vet[i].nome);
   printf("\nDigite o endereco do professor(a): ");
   scanf(" %[^\n]",vet[i].endereco); 
   printf("\nDigite o salario do professor(a): ");
   scanf(" %f",&vet[i].salario); 
   printf("\nDigite a idade do professor(a): ");
   scanf(" %d",&vet[i].idade); 
   printf("\nDigite o sexo do professor(a): ");
   scanf(" %[^\n]",vet[i].sexo); 
   printf("\nDigite o estado civil do professor(a): ");
   scanf(" %[^\n]",vet[i].estado_civil); 
   printf("\nDigite a data de admissao do professor(a): ");
   scanf(" %[^\n]",vet[i].dt_adm); 
   printf("\nDigite a quantidade de disciplinas do professor(a): ");
   scanf(" %d",&vet[i].qtd_disc); 

soma = soma+(vet[i].salario);
}
     printf("A soma do salario dos professores eh: %f",soma);

    getch ();
 return 0;   
}
