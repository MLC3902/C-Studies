#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int matriz[2][2];
	int i,j;
	
	for(i = 0; i < 2; i++){
		
		for(j = 0; j<2; j++){
			
			scanf("%d", &matriz[i][j]);
		}
	}	
	printf("Matriz que você digitou: \n");
	
	for(i = 0; i < 2; i++){
		for(j = 0; j<2; j++){
			
			printf("%d", matriz[i][j]);
		}
	
		printf("\n");	
	}	
		
	return 0;
}
