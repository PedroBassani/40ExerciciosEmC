#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int x, i;
	
	printf("Digite um numero: ");
	scanf("%i", &x);
	
	for (i = 0; i <= x; i ++)
	{
		printf("%i\n", i);
	}

	system("pause");
	return 0;
}
