#include <stdlib.h>
#include <stdio.h>

int main() {
	int matriz [3][3], l ,c , a, b;
	for(l=0;l<3;l++)
	{
		for(c=0;c<3;c++)	
		{
			printf("digite um valor da matriz: \n");
				scanf("%d,",&matriz[l][c]);
		}	
	}
	for(c=0;c<3;c++)
	{
		for(l=0;l<3;l++)	
		{
			printf("matriz: %i\n",matriz[l][c]);
		}
	}
	
	system("pause");
	return 0;
}