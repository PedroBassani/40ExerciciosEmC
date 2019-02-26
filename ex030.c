#include <stdlib.h>
#include <stdio.h>
int main()
{
	int b, a, i, vet[20];
printf("digite um numero de 2 a 20: \n");
		scanf("%i",b);
if((b>=2) && (b<=20))
{
    for (i=0;i<=b;i++) 
    {
        vet[i] = i ;
    };
        while(vet[b]!=0)
        {
            for (a=0;a<=b;a++) 
            {
                vet[a] = a - 1 ;
                if(vet[a] = 0)
                {
                printf("x");
                }
                else
                {
                printf("%i",vet[a]);
                };
            };
        };
}
else
{
	printf("DIGITE A POHA DE UM NOMERO DE 2 A 20 CARALEOU");	
};
system("pause");
    return 0;
}