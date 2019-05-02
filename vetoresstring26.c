#include <stdio.h>
int main (){
    int x,y,m,c=0;
    char string[10];
    gets(string);
    x=strlen(string);
    x--;
    printf ("%d\n",x);
    char inverso[x];
    for(y=0;y<=x;y++){
    inverso[y]= string[y];
          }
    m=x;
    for(y=0;y<m;y++,x--){
    if(inverso[x]==string[y])
       c++;
       }
    if (c==m)
    printf("deu certo");
    getch();
    }
