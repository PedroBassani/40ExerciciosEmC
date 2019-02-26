#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,vetor[4];
	
	for (i = 0; i <= 4; i ++)
	{
	printf("Digite %i numero: ",i);
 	scanf("%i",&vetor[i]);
	}
	for (i = 0; i <= 4; i ++)
	{
	if(vetor[i] < 0)
		{
			printf("%i - Eh um numero negativo digitado\n",vetor[i]);
		}
	}
	system("pause");
	return 0;
}