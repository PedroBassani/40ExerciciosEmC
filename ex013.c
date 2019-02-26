#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int x, i;
	
	printf("Digite um numero interio: ");
	scanf("%i", &x);
	
	for (i =1; i <= x; i ++)
	{
		if (i%2==1)
		{
			printf("%i\n", i);
		}
	}
	
	system("pause");
	return 0;
}
