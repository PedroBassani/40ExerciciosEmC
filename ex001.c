
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	
	int x1, x2, y1, y2, p1, p2, d, x;
	
	printf("Informe quatro numeros para obter o resultado da formula:\n");
	printf("D = Raiz de: (X2 - X1)*2 + (Y2 - Y1)*2\n");
		
	printf("x1: ");
	scanf("%i", &x1);
	printf("y1: ");
	scanf("%i", &y1);
	printf("x2: ");
	scanf("%i", &x2);
	printf("y2: ");
	scanf("%i", &y2);
	
	p1 = (x2 - x1) * (x2 - x1);
	p2 = (y2 - y1) * (y2 - y1);
	d = p1 + p2;
	x = sqrt(d);
	
	printf("Resultado: %i\n", x);
	
	system("pause");
	return 0;
}
