#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int x, i, total;

    printf("Escreva a quantidade da sequencia de numeros: ");
    scanf("%i", &x);

    for (i = 1; i <= x; i ++)
    {
        if (i%2==0)
        {
            total = i + i;
        }
    }

    printf("A soma de todos os numeros pares de 1 ate %i eh: %i\n", x, total);

	system("pause");
	return 0;
}
