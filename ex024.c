#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, b, troca1, troca2;
	
	printf("A: ");
	scanf("%i",  &a);
	printf("B: ");
	scanf("%i",  &b);

	troca1 = a;
	troca2 = b;
	a = troca2;
	b = troca1;
	
	printf("A era %i agora se tornou %i, e B era %i e agora se tornou %i\n", troca1,a, troca2, b);

	system("pause");
	return 0;
}
