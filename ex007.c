#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int a,b;
	
	printf("A: ");
	scanf("%i",&a);
	printf("B: ");
	scanf("%i",&b);
	
	if(a>b){
		printf("Sao Multiplos");
	}
	else{
		printf("Nao Multiplos");
	}
	if (b%=a=0){
		printf("Sao Multiplos");
	}
	else{
		printf("Nao sao Multiplos");
	}

	system("pause");
	return 0;
}
