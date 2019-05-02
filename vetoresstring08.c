#include <stdio.h>


int main(){
int x,y,n=0;
int vecx[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
scanf("%d", &x);
int vecy [x];
for (y=0;y<x || y<19;y++){
    if (vecx[y]==3 || vecx[y]==2){
        vecy[n]= vecx[y];
        n++;
          }
    else if(vecx[y]%2!=0 && vecx[y]%3!=0 && vecx[y]!=1){
        vecy[n]= vecx[y];
        n++;
    }
}
    for (y=0;y<x;y++){
        printf ("%d\n", vecy[y]);
}
    
    getch();
    return 0;
}
