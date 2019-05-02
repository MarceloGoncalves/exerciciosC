#include <stdio.h>

int main (){
    int vetx[]={100,99,35,456,522,897,532,42,5369,153,4};
    int y,x,soma=0, media=0,somapar=0,somaimpar=0;
    int maior2=0, menor=100, maior=0;
    for(x=0;x<=10;x++){
        soma += vetx[x];
        if (vetx[x] % 2==0){
           somapar += vetx [x];
           }
           else{
           somaimpar += vetx[x];
           }
        if(vetx[x]>maior){
           maior2 = maior;               
           maior = vetx[x];
        }
        
        if (vetx[x]<menor){
           menor = vetx[x];
        }
    }
    media = soma /x;
    y = somaimpar-somapar;
        printf ("soma = %d\n",soma);
        printf ("media = %d\n",media);
        printf ("a soma dos impares menos a soma dos pares = %d\n", y);
        printf ("o maior valor = %d\no segundo maior valor = %d\no menor valor = %d\n", maior,maior2,menor);
    getch();
    return 0;
}
