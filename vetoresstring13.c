#include <stdio.h>

int main (){
int d10,d11;
int s1,x,y,vecax[9];
int vec[12];
for (y=0;y<11;y++){
    scanf("%d", &vec[y]);
        
}

for (y=0,x=10;y<9;y++,x--){
    vecax[y]= vec[y]*x;
    }
for (y=0,s1=0;y<10;y++){
    s1+=vecax[y];   
    }
d10=11-s1%11;
int vecay[10];
for (y=0,x=11;y<10;y++,x--){
    vecay[y]= vec[y]*x;
}
for (y=0,s1=0;y<10;y++){
    s1+=vecay[y]; 
}
d11=11-s1%11;
if(d10==vec[9] && d11==vec[10])
    printf("CPF valido");
getch();

}
//for (y=0;y<10;y++){
