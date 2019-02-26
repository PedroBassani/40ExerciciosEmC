#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int totalpagar,grana,troco,nota100,nota10,nota1,i;
	
	printf("Informe o total a pagar: ");
	scanf("%i", &totalpagar);
	printf("Informe o total recebido para calcular o troco: ");
	scanf("%i", &grana);
	troco = 0;
	nota100 = 0;
	nota10 = 0;
	nota1 = 0;
	troco = grana - totalpagar;
	
	while(troco > 0)
	{
		if(troco >= 100)
		{
			nota100 ++;
			troco = troco -100;
		}		
		else if(troco >= 10 && troco < 99)
		{
			nota10 ++;
			troco = troco - 10;		
		}
		else if(troco >1 && troco < 9)
		{
			nota1 ++;
			troco = troco -1;
		}	
	}
	
	printf("Nota de 100: %i\n",nota100);
	printf("Nota de 10: %i\n",nota10);
	printf("Nota de 1: %i\n",nota1);

	system("pause");
	return 0;
}
