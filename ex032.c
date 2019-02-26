
#include <stdio.h>
#include <stdlib.h>

int main() {

	float salario,maiorsalario,mediasalario,totalsalario;
	int mediafilho,totalfilho,filho,i,perc,percentual;
	maiorsalario = 0;
	mediasalario = 0;
	totalsalario = 0;
	mediafilho = 0;
	totalfilho =0;
	

	do 
	{
	    printf("Infomer o salario do cidadao: ");
		scanf("%f",&salario);
		if(salario>0){
		printf("Infomer o total de filhos do cidadao: ");
		scanf("%i",&filho);
		}
		totalsalario = totalsalario + salario;
		totalfilho = totalfilho + filho;
		i++;
		if (salario > maiorsalario )
		{
			maiorsalario = salario;
		}
		if (salario <= 100)
		{
			perc++;
		}
	}while (salario > 0);
	
	mediasalario = totalsalario / i;
	mediafilho = totalfilho / i;
	percentual = (perc*100) / i;
	
	printf("\nMedia de salario: %f\n",mediasalario);
	printf("Maior salario: %f\n",maiorsalario);
	printf("Media de filhos: %i\n",mediafilho);
	printf("Percentual de pessoas que recebem ate 100 reais: %i\n",percentual);
    
	system("pause");
	return 0;
}