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
    Professor p1,p2,p3,p4,p5;
     float soma = 0;
    
   printf("Digite o nome do professor(a): ");
   scanf(" %[^\n]",p1.nome);
   printf("Digite o endereco do professor(a): ");
   scanf(" %[^\n]",p1.endereco); 
   printf("Digite o salario do professor(a): ");
   scanf(" %f",&p1.salario); 
   printf("Digite a idade do professor(a): ");
   scanf(" %d",&p1.idade); 
   printf("Digite o sexo do professor(a): ");
   scanf(" %[^\n]",p1.sexo); 
   printf("Digite o estado civil do professor(a): ");
   scanf(" %[^\n]",p1.estado_civil); 
   printf("Digite a data de admissao do professor(a): ");
   scanf(" %[^\n]",p1.dt_adm); 
   printf("Digite a quantidade de disciplinas do professor(a): ");
   scanf(" %d",&p1.qtd_disc); 
   
   //SEGUNDO PROFESSOR 
   
   printf("\nDigite o nome do professor(a): ");
   scanf(" %[^\n]",p2.nome);
   printf("Digite o endereco do professor(a): ");
   scanf(" %[^\n]",p2.endereco); 
   printf("Digite o salario do professor(a): ");
   scanf(" %f",&p2.salario); 
   printf("Digite a idade do professor(a): ");
   scanf(" %d",&p2.idade); 
   printf("Digite o sexo do professor(a): ");
   scanf(" %[^\n]",p2.sexo); 
   printf("Digite o estado civil do professor(a): ");
   scanf(" %[^\n]",p2.estado_civil); 
   printf("Digite a data de admissao do professor(a): ");
   scanf(" %[^\n]",p2.dt_adm); 
   printf("Digite a quantidade de disciplinas do professor(a): ");
   scanf(" %d",&p2.qtd_disc);  
   
   //TERCEIRO PROFESSOR
   
   printf("\nDigite o nome do professor(a): ");
   scanf(" %[^\n]",p3.nome);
   printf("Digite o endereco do professor(a): ");
   scanf(" %[^\n]",p3.endereco); 
   printf("Digite o salario do professor(a): ");
   scanf(" %f",&p3.salario); 
   printf("Digite a idade do professor(a): ");
   scanf(" %d",&p3.idade); 
   printf("Digite o sexo do professor(a): ");
   scanf(" %[^\n]",p3.sexo); 
   printf("Digite o estado civil do professor(a): ");
   scanf(" %[^\n]",p3.estado_civil); 
   printf("Digite a data de admissao do professor(a): ");
   scanf(" %[^\n]",p3.dt_adm); 
   printf("Digite a quantidade de disciplinas do professor(a): ");
   scanf(" %d",&p3.qtd_disc);  
   
   //QUARTO PROFESSOR
   
   printf("\nDigite o nome do professor(a): ");
   scanf(" %[^\n]",p4.nome);
   printf("Digite o endereco do professor(a): ");
   scanf(" %[^\n]",p4.endereco); 
   printf("Digite o salario do professor(a): ");
   scanf(" %f",&p4.salario); 
   printf("Digite a idade do professor(a): ");
   scanf(" %d",&p4.idade); 
   printf("Digite o sexo do professor(a): ");
   scanf(" %[^\n]",p4.sexo); 
   printf("Digite o estado civil do professor(a): ");
   scanf(" %[^\n]",p4.estado_civil); 
   printf("Digite a data de admissao do professor(a): ");
   scanf(" %[^\n]",p4.dt_adm); 
   printf("Digite a quantidade de disciplinas do professor(a): ");
   scanf(" %d",&p4.qtd_disc); 
    
   //QUINTO PROFESSOR
   
   printf("\nDigite o nome do professor(a): ");
   scanf(" %[^\n]",p5.nome);
   printf("Digite o endereco do professor(a): ");
   scanf(" %[^\n]",p5.endereco); 
   printf("Digite o salario do professor(a): ");
   scanf(" %f",&p5.salario); 
   printf("Digite a idade do professor(a): ");
   scanf(" %d",&p5.idade); 
   printf("Digite o sexo do professor(a): ");
   scanf(" %[^\n]",p5.sexo); 
   printf("Digite o estado civil do professor(a): ");
   scanf(" %[^\n]",p5.estado_civil); 
   printf("Digite a data de admissao do professor(a): ");
   scanf(" %[^\n]",p5.dt_adm); 
   printf("Digite a quantidade de disciplinas do professor(a): ");
   scanf(" %d",&p5.qtd_disc); 

soma = (p1.salario+p2.salario+p3.salario+p4.salario+p5.salario);
     printf("A soma do salario dos professores eh: %f",soma);

    getch ();
 return 0;   
}
