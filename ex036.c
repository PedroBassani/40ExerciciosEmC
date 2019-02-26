#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int i,n,j,y;
	
	for(j=1;j<=20;j++)
	{
		printf("Escreva um n: ");
		scanf("%i",&n);
			for(i=1;i<=n;i++)
			{
				y = n * i;
				printf("%i x %i = %i\n", n,i,y);
			}
	}
	
	system("pause");
	return 0;
}