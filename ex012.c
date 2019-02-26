#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int base, altura, area;

	printf("Insira a Base: ");
	scanf("%d", &base);

	printf("Insira a Altura: ");
	scanf("%d", &altura);

	area = ((base * altura) / 2);

	printf("A Area e: %d \n", area);
	system("pause");
	return 0;
}
