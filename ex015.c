#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
	
	int x, n, y;
	
	printf("Informe X: ");
	scanf("%i", &x);
	printf("Informe N: ");
	scanf("%i", &n);
	
	y = pow(x,n);

	
	printf("X elevado a N tem o resultado de: %i\n", y);
	
	system("pause");
	return 0;
}
