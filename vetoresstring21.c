#include <stdio.h>
int main(){
    int b=0;
    int x,y,m;
    char string[10];
    gets(string);
    m=strlen(string);
    x=0;
    for (y=0;y<m;y++){
        x+=string[y];
        printf ("aqui\n ");
        b++;
        }
        printf (" %d\n %d", x,b);
    getch();
    
    }
