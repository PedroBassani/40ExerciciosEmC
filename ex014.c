#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int a, b, r;

	printf("A:");
	scanf("%i", &a);

	printf("B:");
	scanf("%i", &b);

	r = pow(a, b);

	printf("%i elevado a %i eh: %i\n", a, b, r);

	system("pause");
	return 0;
}
