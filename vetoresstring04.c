//rotação para a direita
/*#include <stdio.h>

int main (){
 int vetx[7];
 int x,y;
 
 for (x=0;x<=6;x++){
 printf ("digite valor: ");
 scanf ("%d", &vetx[x]);
} 

  y = vetx[6];
 for (x=6;x>=1;x--){
 vetx[x]= vetx[x-1];
  }
vetx[x] = y;
for (x=0;x<=6;x++){
printf("%d\n", vetx[x]);
}
getch ();
return 0;
}
*/

//rotação para a esquerda

#include <stdio.h>

int main (){
 int vetx[7];
 int x,y;
 
 for (x=0;x<=6;x++){
 printf ("digite valor: ");
 scanf ("%d", &vetx[x]);
} 

  y = vetx[0];
 for (x=0;x<=6;x++){
 vetx[x]= vetx[x+1];
  }
vetx[6] = y;
for (x=0;x<=6;x++){
printf("%d\n", vetx[x]);
}
getch ();
return 0;
}
