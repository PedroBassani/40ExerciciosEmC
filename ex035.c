#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int sexo, idade, cor_olhos, cor_cabelos, i;
	int maior_idade = 0, quant_fem = 0;
	int FLAG = 0;
	
	for(i = 0; ; i++ ){
		
		printf( "Idade: " );
		scanf( "%i", &idade );
		if (idade < 0)
			break;
	
		if (!i)
			maior_idade = idade;
		else if ( idade > maior_idade )
			maior_idade = idade; 
		
		printf( "Sexo [1- Masculino, 2- Feminino]: " );
		scanf( "%i", &sexo );
		printf( "Cor dos Olhos [1- Azuis, 2- Verdes, 3- Castanhos]: " );
		scanf( "%i", &cor_olhos );
		printf( "Cor dos Cabelos [1- Louros, 2- Castanhos, 3- Pretos]: " );
		scanf( "%i", &cor_cabelos );
		
		
		if ( sexo == 2 )
			if (( idade >= 18 ) && ( idade <= 35 ))
				if ( cor_olhos == 2 )
					if ( cor_cabelos == 1 )
						quant_fem++;
						
		FLAG = 1;					                
	}
	system("cls");
	if (!FLAG)
		printf("Nao ha dados a serem apresentados!\n");
	else {
		printf("Maior Idade: %i\nQuantidade (Feminino, 18~35, Olhos Verdes, Cabelos Louros): %i\n",
				maior_idade, quant_fem);
	}
	system("pause");
	return 0;
}