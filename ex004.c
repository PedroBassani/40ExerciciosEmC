#include <stdlib.h>
#include <stdio.h>

int main() {

	int N1, N2, N3, M;
	
	printf("Digite a primeira nota: ");
	scanf("%i", &N1);
	
	printf("\nDigite a segunda nota: ");
	scanf("%i", &N2);
	
	printf("\nDigite a terceira nota: ");
	scanf("%i", &N3);
	
	M = N1 + N2 + N3 / 3;
	
	printf("\nSua media: %i\n", M);
	
	system("pause");
	return 0;
}
