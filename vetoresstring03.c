#include <stdio.h>

int main (){
int vetx[]={4, 9, 11, 3};
int vety[3];
int x,y;
for(y=3,x=0;y>=0;y--,x++){
vety[x]=vetx[y];
}
for(y=0;y<=3;y++){
printf ("|%d|",vety[y]);
}
getch();
return 0;
}
