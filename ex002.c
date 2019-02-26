#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	
	int a, b, c, r, s, d;
	
	printf("Digite tres numeros inteiros e positivos\nPara calcular a seguinte expressao:\n");
	printf("D = R + S / 2 onde R = (A + B)*2   S = (B + C)*2\n");
		
	printf("a: ");
	scanf("%i", &a);
	printf("b: ");
	scanf("%i", &b);
	printf("c: ");
	scanf("%i", &c);

	r = (a + b) * (a + b);
	s = (b + c) * (b + c);
	d = (r + s)/2;
	
	printf("Resultado: %i\n", d);
	system("pause");
	return 0;
}
