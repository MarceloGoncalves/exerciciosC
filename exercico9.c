/*Dois alunos fizeram três provas. Dadas estas notas
como entrada, determinar qual dos dois alunos apresentou
melhor rendimento.*/
#include <stdio.h>
#include <math.h>
int main () {
    float x,y,a,b,c,v,m,l;
    printf("digite a primeira nota do primeiro aluno:" );
    scanf("%f", &x);
    printf("digite a segunda nota do primeiro aluno:" );
    scanf("%f", &y);
    printf("digite a terceira nota do primeiro aluno:" );
    scanf("%f", &a);
    printf("digite a primeira nota do segundo aluno:" );
    scanf("%f", &b);
    printf("digite a segunda nota do segundo aluno:" );
    scanf("%f", &c);
    printf("digite a terceira nota do segundo aluno:" );
    scanf("%f", &v);
    m=(x+y+a);
    l=(b+c+v);
    if (m>l) {
        printf("o primeiro aluno teve maior rendimento do que o segundo, com media %5.2f", &m);
    }
    else
        printf("o segundo aluno teve maior rendimento do que o primeiro %5.2f", &l);
        

    getch ();
    return 0;
}   
