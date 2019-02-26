#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vetor[4],i;
	 
 	for (i = 0; i <= 4; i ++)
	{
		printf("Digite %i numero: ",i);
 		scanf("%i",&vetor[i]);
	}
	for (i = 0; i <= 4; i ++)
	{
		if(vetor[i] < 0)
		{
			printf("%i\n",vetor[i]);
		}
	}
 	printf("O(s) numero(s) acima sao os numero(s) negativo(s) digitado(s)\n");
 
    system("pause");
    return 0;
}