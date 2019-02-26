#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int N1, N2, N3, M, op;
	
	printf("Nota 1: \n");
	scanf("%i", N1);
	
	printf("Nota 2: \n");
	scanf("%i", N2);
	
	printf("Nota 3: \n");
	scanf("%i", N3);
	
	
	switch(op)
	{
	case 1:
		M = (N1 + N2 + N3)/3;
		printf("Media Aritimetica: %i", M);	
		break;
	case 2:
		M = (N1 * 3) + (N2 * 3) + (N3 * 4) /10;	
		printf("Media Ponderada: %i", M);
		break;
	case 3:
		M = 3/ ((1/N1) + (1/N2) + (1/N3));
		printf("Media Harmonica: %i", M);
		break;
	default:
		printf("Opção Invalida");
	}

	system("pause");
	return 0;
}
