#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct data_nasc{
       char mes[20];
       int ano;       
};
typedef struct data_nasc Data_nasc;

struct cabeca_de_gado{
       int cod;
       float litro;
       float alimento;
       Data_nasc dt_nasc;
       char abate[2];     
};
typedef struct cabeca_de_gado *Cabeca_de_gado;

int main(){
    Cabeca_de_gado c1 = malloc(sizeof(struct cabeca_de_gado));
    Cabeca_de_gado c2 = malloc(sizeof(struct cabeca_de_gado));
   
    printf("Digite o codigo do animal: ");  
    scanf("%d",&c1->cod);
    printf("Digite a quantidade de litros produzidos por semana: ");
    scanf("%f",&c1->litro);
    printf("Digite a quantidade de alimentos ingerida por semana: "); 
    scanf("%f",&c1->alimento);
    printf("Digite a data de nascimento(mes e ano) do animal: ");
    scanf(" %[^\n]",c1->dt_nasc.mes);
    scanf("%d",&c1->dt_nasc.ano);
    printf("Digite S caso necessite de abate e N caso nao necessite: ");
    scanf(" %c",&c1->abate);
    
    //SEGUNDO ANIMAL
    
    printf("Digite o codigo do animal: ");  
    scanf("%d",&c2->cod);
    printf("Digite a quantidade de litros produzidos por semana: ");
    scanf("%f",&c2->litro);
    printf("Digite a quantidade de alimentos ingerida por semana: "); 
    scanf("%f",&c2->alimento);
    printf("Digite a data de nascimento(mes e ano) do animal: ");
    scanf(" %[^\n]",c2->dt_nasc.mes);
    scanf("%d",&c2->dt_nasc.ano);
    printf("Digite S caso necessite de abate e N caso nao necessite: ");
    scanf(" %c",&c1->abate);
    
    if(c1->litro>c2->litro){
        printf("A vaca que produz mais leite por semana eh: Codigo=%d, Litros=%f, Alimento=%f, Nascimento: Mes=%s,Ano=%d, Abate=%c",c1->cod,c1->litro,c1->alimento,c1->dt_nasc.mes,c1->dt_nasc.ano,c1->abate);                                       
    }else{
        printf("A vaca que produz mais leite por semana eh: Codigo=%d, Litros=%f, Alimento=%f, Nascimento: Mes=%s,Ano=%d, Abate=%c",c2->cod,c2->litro,c2->alimento,c2->dt_nasc.mes,c2->dt_nasc.ano,c2->abate);                                       
        }                   
    
    getch ();
 return 0;   
}
