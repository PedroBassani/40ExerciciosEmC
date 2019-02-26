#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float SM = 800.00;
	float C,VC,ST; 
	int carros;
	
	printf("Informe quantos carros foram vendidos: ");
	scanf("%i", &carros);
	
	printf("Informe o valor de venda de todos os carros: ");
	scanf("%f", &VC);
	
	ST = (2 * SM) + (50 * C) + (VC * 0.05);
	
	printf("Salario total do vendedor: %.2f\n",ST);
	
	system("pause");
	return 0;
}