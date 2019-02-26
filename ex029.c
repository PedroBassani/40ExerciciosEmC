#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,y,z;
	
	printf("Informe X: ");
	scanf("%i",&x);
	printf("Informe Y: ");
	scanf("%i",&y);
	printf("Informe Z: ");
	scanf("%i",&z);
	
	if (x < (y+z) && y < (x+z) && z < (x+y))
	{
		
		if(x==y&&x==z&&y==z)
		{
			printf("Triagulo Equilatero\n");
		}
		else if(x==y||y==z||z==x)
		{
			printf("Triagulo Isoscele\n");
		}
		else 
		{
			printf("Triagulo Escaleno\n");
		}
	}
	else
	{
		printf("Nao eh um triagulo\n");	
	}
	system("pause");
	return 0;
}
