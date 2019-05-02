#include <stdio.h>
#include <string.h>

int somaASCII(char *s)
{
	int soma=0;
	int i;
	for(i=0;s[i];i++) soma+=s[i];
	return soma;
}
int main()
{
	char s[100];
	puts("DIGITE NOME: ");
	gets(s);
	printf("SOMA ASCII: %d\n",somaASCII(s));
	
	
float f=0, g=0;
printf("digite a soma do codigo ASCII");
scanf("%f", &g);
f = g*((g+1)/2);
printf ("%.3f",f);
	
	
	
	getch();
	return 0;
}
