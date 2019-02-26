#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float x, y, z;
	
	printf("Informe o salario bruto: ");
	scanf("%f", &x);
	
	y = x * 0.10;
	y = x - y;
	
	z = y * 0.05;
	z = x - z;
	
	printf("\nSalario Bruto: %.2f\nSalario com a taxa de 10 porcento descontado: %.2f\nSalario com mais a taxa de 5 porcento descontado: %.2f\n", x, y, z);

	system("pause");
	return 0;
}
