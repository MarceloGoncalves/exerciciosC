#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main (){
int vetx[]={1,02,38,14,55,96,73,87,9,10};
int x,y,i=0,k=0;
  printf ("digite valor que serar pesquisado no vetor: ");
  scanf("%d",&x);     
for(y=0;y<=9;y++){
   if (x == vetx[y]){
   i=1;}
   if (x == vetx[y]){
   break;
   }   
  }    
 if (i == 1)
 printf ("o valor esta na posicao %d do vetor", y+1);
else printf ("nao encontrado");
getch();
return 0;
}
