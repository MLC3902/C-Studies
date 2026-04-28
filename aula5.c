#include <stdio.h>

int main()
{
	float m[12];
	float total=0;
	int i;
	
	for(i=0; i<12;i++){
		printf("Salario m%d: ",i+1);
		scanf("%f", &m[i]);
	}

	for(i=0; i<12;i++){
		printf("V[%d] =  %.2f\n",i, m[i]);
		total+= m[i];
		}	
	
		printf("Total: R$.2f\n", total);
	return 0;
} 
