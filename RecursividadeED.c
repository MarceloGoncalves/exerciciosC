#include <stdio.h>
#include <math.h>

int fnc20(int n){
    if(n==0){
        return 0;
    }else if(n>0){
        return 3*fnc20(n-1)+n;
    }
}

int quest22(int n){
    int i, fat=1;
    if(n==0)
        return 1;
    else if(n<0)
        return 0;
    for(i=1;i<=n;i++)
        fat = fat*i;
    return fat;
}

int quest23(int n){
    if(n<=0)
        return 0;
    else if(n==1 || n==2)
        return 1;
    int a=1, b=1, fib, i;
    for(i=2;i<n;i++){
        fib = a+b;
        a = b;
        b = fib;
    }
    return fib;
}

int quest24(int a, int b){
    if(b>a){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(b==0 || a==0)
        return 0;
    int c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

int quest25(int v[], int tamanho){
    if(tamanho<=0)
        return 0;
    printf("%d ",*v);
    return quest25(v+1,tamanho-1);
}

int quest26(int v[], int tamanho){
    if(tamanho<=0)
        return 0;
    printf("%d ",v[tamanho-1]);
    return quest26(v,tamanho-1);
}

int _quest27_(int v[], int n){
    if(n<0)
        return -1;
    else if(n==0 || n==1)
        return 1;
    if(*v!=*(v+(n-1))){
        return 0;
    }else
        return _quest27_(v+1, n-2);
}

int quest27(int v[], int n){
    if(_quest27_(v,n)==-1)
        printf("Quantidade de posicoes inexistentes");
    else if(_quest27_(v,n)==1)
        printf("Palindromo");
    else if(_quest27_(v,n)==0)
        printf("Nao eh um Palindromo");
}

int quest28(int v[], int n){
    if(n<=0)
        return 0;
    int x = *v;
    return x*x+quest28(++v,n-1);
}

int quest29(int v[], int n, int acm){
    if(n<=0)
        return acm;
    int x = *v;
    if(x%2==0)
        return quest29(++v,--n,acm-x);
    else
        return quest29(++v,--n,acm+x);
}

int _quest30_(int a, int b){
    //printf("(%d %d) \n", a, b);
    if(b==0)
        return a;
    return _quest30_(b,a%b);
}

int quest30(int v[], int n, int _mdc){
    if(n <= 0)
        return _mdc;
    int a = *v;
    int b = _mdc;
    return quest30(++v,n-1,_quest30_(a,b));
}

int quest31(int v[], int n, int acm){
    if(n <= 0)
        return acm;
    acm = *v>acm?*v:acm;
    return quest31(++v,--n,acm);
}

int main(){

    int tamanho = 5;
    int v[tamanho];
    v[0] = 21;
    v[1] = 49;
    v[2] = 490000;
    v[3] = 28;
    v[4] = 7000;

    printf("%d",quest31(v+1,tamanho-1,v[0]));

    return 0;


}
