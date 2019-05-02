#include <stdio.h>
#include <conio.h>

struct prontuario{
       char nome[50];
       char endereco [50];
       char telefone[10];
       float altura;
       char dt_nasc[10]; 
       float peso;  
};
typedef struct prontuario Prontuario;
int main(){
        Prontuario p1;
        Prontuario p2;

printf("Digite o nome do paciente: ");
scanf(" %[^\n]",p1.nome);

printf("Digite o endereco do paciente: ");
scanf(" %[^\n]",p1.endereco);           

printf("Digite o telefone do paciente: ");
scanf(" %[^\n]",p1.telefone);

printf("Digite o altura do paciente: ");
scanf(" %f",&p1.altura);

printf("Digite a data de nascimento do paciente: ");
scanf(" %[^\n]",p1.dt_nasc);

printf("Digite o peso do paciente: ");
scanf(" %f",&p1.peso);

//SEGUNDO PACIENTE
printf("Digite o nome do paciente 2: ");
scanf(" %[^\n]",p2.nome);

printf("Digite o endereco do paciente 2: ");
scanf(" %[^\n]",p2.endereco);           

printf("Digite o telefone do paciente 2: ");
scanf(" %[^\n]",p2.telefone);

printf("Digite o altura do paciente 2: ");
scanf(" %f",&p2.altura);

printf("Digite a data de nascimento do paciente 2: ");
scanf(" %[^\n]",p2.dt_nasc);

printf("Digite o peso do paciente 2: ");
scanf(" %f",&p2.peso);

if(p1.altura>p2.altura){
    printf("Os dados do paciente sao: Nome: %s, Endereco: %s, Telefone: %s, Altura: 1.%f, Data de nascimento: %s, Peso: 1.%f",p1.nome,p1.endereco,p1.telefone,p1.altura,p1.dt_nasc,p1.peso);                                                                                  
}
else printf("Os dados do paciente sao: Nome: %s, Endereco: %s, Telefone: %s, Altura: %f, Data de nascimento: %s, Peso: %f",p2.nome,p2.endereco,p2.telefone,p2.altura,p2.dt_nasc,p2.peso);

    getch ();
return 0;
}
