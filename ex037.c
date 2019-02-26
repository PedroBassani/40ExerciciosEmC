#include <stdlib.h>
#include <stdio.h>

int main() {

int d1, m1, a1, d2, m2, a2, difdia, difmes, difano;

struct dma 
{
int dia;
int mes;
int ano;
};

struct dma primeiro;
struct dma segundo;

printf("digite a primeira data: ");
printf("\nDias: ");
	scanf("%i",&d1);
printf("Mes: ");
	scanf("%i",&m1);
printf("Anos: ");
	scanf("%i",&a1);
	
printf("\ndigite a segunda data: ");
printf("\nDias: ");
	scanf("%i",&d2);
printf("Mes: ");
	scanf("%i",&m2);
printf("Anos: ");
	scanf("%i",&a2);
	
primeiro.dia = d1;
primeiro.mes = m1;
primeiro.ano = a1;

segundo.dia = d2;
segundo.mes = m2;
segundo.ano = a2;

difdia = primeiro.dia - segundo.dia;
difmes = primeiro.mes - segundo.mes; 
difano = primeiro.ano - segundo.ano;

printf("\nA diferença entre as datas: \n");
	printf("Dias: %i\n", difdia);
	printf("Mes: %i\n", difmes);
	printf("Anos: %i\n", difano);
	
	system("pause");
	return 0;
}
