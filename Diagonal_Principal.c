#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int matriz[3][3];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("A diagonal principal da matriz é:");
	
	for(i=0;i<3;i++){
		printf("%d", matriz[i][i]);
	}
	return 0;
}
