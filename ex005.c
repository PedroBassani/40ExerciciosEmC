#include <stdio.h>
#include <stdlib.h>

int main() {

	int valor, x, y , resultado;

	printf("Informe o custo de fabrica do carro: ");
	scanf("%i", &valor);
	
	// distribuidor
	x = valor * 28;
	x = x / 100;
	
	//impostos 
	y = valor * 45;
	y = y / 100;
	
	resultado = valor + x + y;
	
	printf("O valor do carro ao consumidor fica no total de: %i\n", resultado);

	system("pause");
	return 0;
}
