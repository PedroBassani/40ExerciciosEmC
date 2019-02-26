#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	char frase[10];
	
	int i;
		scanf("%s",&frase);
	for(i = 0; i<strlen(frase); i++)
	{

        if(frase[i] == 'a')
	printf("%i\n", i);
        
	}

	system("pause");
	return 0;
}
