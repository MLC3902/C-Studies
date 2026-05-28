#include <stdio.h>
#include <math.h>

int main()
{
	int matriz[2][2];
	int i,j;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j<2; j++){
			scanf("%d", &matriz[i][j]);
		}
	}	
	
	return 0;
}
