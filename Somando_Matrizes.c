#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int A[2][2], B[2][2],C[2][2];
	int i,j;
	
	printf("Digite sua primeira matriz: \n");
	for(i = 0; i < 2; i++){
		
		for(j = 0; j<2; j++){
			
			scanf("%d", &A[i][j]);
		}
	}	
	printf("Agora digita a segunda matriz nessa joça aí: \n");
	for(i = 0; i < 2; i++){
		for(j = 0; j<2; j++){
			scanf("%d", &B[i][j]);
		}
	
	}	
	
	for(i = 0; i<2;i++){
		for(j=0;j<2;j++){
			C[i][j] = A[i][j]+B[i][j];
		}
	}
		
	printf("Matriz Resultante: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d",C[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
