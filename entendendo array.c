#include <stdio.h>

int main()
{
 int valores [8];
 int x, y, soma;
 
 for(int i = 0; i < 8; i++)
 {
	 printf("Digita esse treco ai: %d\n", i);
	scanf("%d", &valores[i]); 	 
 }
 printf("a primeira posicao pra soma eh \n");
 scanf("%d", &x); 
 
  printf("a segunda posicao pra soma eh \n");
 scanf("%d", &y); 
 
soma = valores[x] + valores[y];
 printf("a soma eh: %d", soma);
	return 0;
}
