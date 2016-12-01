#include <stdio.h>
#include <stdlib.h>

void imprimir(double matriz[2][3]) {
	int i, j;
	for (i = 0; i < 2; i++) {
    	for (j = 0; j < 3; j++) {
    		printf("%lf ", matriz[i][j]);
    	}
    	printf("\n");
    }
}


int main(void)
{
    double matriz[2][3] = {
    	{1.0, 2.0, 3.0},
    	{3.0, 2.0, 1.0}
    };

    imprimir(matriz);

    printf("\n");

    int i, j, aux;

    if (matriz[0][0] < matriz[1][0]) {
        for (i = 0; i < 3; i++) {
            aux = matriz[1][i];
            matriz[1][i] = matriz[0][i];
            matriz[0][i] = aux;
        }
    }

	imprimir(matriz);    

    return 0;
}