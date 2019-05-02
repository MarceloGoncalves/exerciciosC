//IMC
#include <stdio.h>
#include <conio.h>
int main () {
    float imc,p,a;
    printf("digite sua altura: ");
    scanf ("%f", &a);
    printf ("digite seu peso em Kg: ");
    scanf("%f", &p);
    imc=p/(a*a);
    if (imc <= 20) {
        printf ("voce esta abaixo do peso adequado");
    }
      else if (imc >= 25) {
              printf ("voce esta acima do peso adequado");
      }
          else 
              printf ("você esta com o peso ideal");
  getch();                      
}   
