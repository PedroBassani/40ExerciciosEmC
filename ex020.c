#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][3];
    int y =0,i,j;	
	
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            matriz[i][j] = y--;
            printf("Matriz com Negativos [%d][%d] = %d\n", i,j, matriz[i][j]);

            if(matriz[i][j] % 2 == 0){
                matriz[i][j] = 0;
            }else{
                matriz[i][j] = 1;
            }

            printf("Matriz com modulo [%d][%d] = %d\n", i,j, matriz[i][j]);
        }
    }

	system("pause");
	return 0;
}