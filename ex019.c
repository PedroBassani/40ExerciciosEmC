#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	int M[3][3];
	int x, y, mult ,result, linha;
	
	printf("Digite ELEMENTO da:\n");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("linha %d, coluna %d da matriz: ",x,y);
			scanf("%d",&M[x][y]);
		}
	}
	
	printf("Selecione uma linha da matriz (De 0 a 2): ");
	scanf("%i", &linha);
	
	
	printf("Informe um numero para multiplicar a matriz: ");
	scanf("%i", &mult);
	
	result = mult * M[linha][linha]; 
	

	printf("\nRESULTADO :\n");
	printf("\n%i " ,result);
	printf("\n\n");
	system("pause");
	return 0;
}
