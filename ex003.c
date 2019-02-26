#include <stdlib.h>
#include <stdio.h>

int main() {

	int x, anos, dias, mes;
	
	printf("Digite quantos dias vc viveu:");
	scanf("%i", &x);

	anos = x / 365;
	dias = x%365;
	mes = dias/30;
	dias = dias%30;
	
	printf("Voce tem:\nanos: %i \nmeses: %i \ndias: %i \n", anos, mes, dias);
	
	system("pause");
	return 0;
}
