#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, x, y;

    printf("\nEntre com um valor de 2 a 20: ");
    scanf("%d", &x);

    for (c=1; c<=x; c++) {
        for (y=1; y<=c; y++)
            printf("%d", y);
        printf("\n");
    }

    for (c=c-2; c>0; c--) {
        for (y=1; y<=c; y++)
            printf("%d", y);
        printf("\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
