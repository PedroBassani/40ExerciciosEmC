#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	
	float raio, area;
	const float pi = 3.14159;

	printf("Informe os centimetros do raio da circunferencia: ");
	scanf("%f", &raio);

	area = pi*pow(raio, 2);

	printf("O resultado da area: %f\n", area);
 
	system("pause");
	return 0;
}
