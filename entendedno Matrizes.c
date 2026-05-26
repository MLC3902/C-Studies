#include <stdio.h>

int main()
{
 int matriz [3][3];
 int i, j, menor;
 
 for(int i = 0; i <3; i++)
 {
 	for(int j = 0; j<3; j++){
 		
	 printf("digita o valor da matriz[%d][%d]: \n", i, j);
	 scanf("%d", &matriz[i][j]);
	 }
	  }
 for(int i = 0; i<3; i++){
	for(int j = 0; j<3;j++){
		if(matriz[i][j]<menor){
			menor= matriz [i][j];
		}
	}
 }
 
 printf("A MENOR MATRIZ EH: %d", menor);
	return 0;
}
