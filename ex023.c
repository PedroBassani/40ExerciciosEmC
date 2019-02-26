#include <stdio.h>
#include <stdlib.h>

int main(void) {

  	float temp, veloc, disc, litros;
  	
  	printf("Informe o tempo gasto na viagem: ");
  	scanf("%f", &temp);
  	printf("Informe a velocidade media percorida: ");
	scanf("%f", &veloc);
	
	disc = temp * veloc;
		
	litros = disc / 12;
	
	printf("\nVelocidade media: %.2f\n", veloc);
	printf("Tempo de viagem: %.2f\n", temp);
	printf("Distancia percorrida: %.2f\n", disc);
	printf("Combustivel gasto: %.2f\n", litros);
	
	system("pause");
	return 0;
}
