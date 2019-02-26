#include <stdio.h>
#include <stdlib.h>

int main(){

	float juca = 1.10;
	float chico = 1.50;
	int ano;
	
	ano = 0;

	while (juca < chico)
	{
	juca = juca + 0.03;
	chico = chico + 0.02;
	ano = ano + 1;
	}

	printf("%d Anos deverao ser necessarios para que Juca seja maior que Chico. \n\n" , ano);
	printf("%f A Altura de Juca daqui a 41 anos\n\n", juca);
	printf("%f A altura de Chico daqui a 41 anos\n\n", chico); 
	
	system("pause");
	return 0;
}