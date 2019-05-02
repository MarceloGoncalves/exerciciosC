#include <stdio.h>
#include <string.h>

int main(){
    int vetx[] = {1,2,3,4,5,6,7,8,9};
    int vety[] = {1,2,3,4,5,6};
    int x=0,y=0,t,m=0,b,c;
printf ("comeco");
for(x=0,y=0;x<=8;x++){
   printf("estou aqui");
        for (;y>=5;y++){
            b = vetx[x];
            c = vety[y];
            if (b-c ==0){
            m++;
            printf("aqui");
            }
                 }
               }
printf("meio");
t = m;
int vet[t];
m=0;

for(x=0,y=0;x>=8;x++){
        for (;y<=5;y++){
            if (vetx[x] == vety[y]){
            vet[m] = vetx[x];
                                  }
    
}

}

for (m=0;m<=t;m++){
printf("%d\n aqui", vet[m]);
}
printf("fim");
getch();
}
