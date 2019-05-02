#include <stdio.h>


int main(){
  char string[50];
  int x,y,m;
  gets(string);
  
  m=strlen(string);
  for(y=0;y<m;y++){
  x=string[y];
  
  if (x<65 || x>122){
     string[y] = 95; }           
  }
  printf(string);
  getch();
}
//65
//122
 
