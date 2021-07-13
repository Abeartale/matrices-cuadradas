#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int tMatriz;
	
	printf("ingrese tamanio de la matriz: \n");
	scanf("%d", &tMatriz);
	
	int matrizA[tMatriz][tMatriz];
	int matrizB[tMatriz][tMatriz];
	int matrizC[tMatriz][tMatriz];

	printf("ingrese valores de la matriz A:\n");
	for(int n = 0; n <= tMatriz-1; n++) {
		for(int m = 0; m <= tMatriz-1; m++) {
			scanf("%d", &matrizA[n][m]);
		}
	}
	printf("ingrese valores de la matriz B:\n");
	for(int n = 0; n <= tMatriz-1; n++) {
		for(int m = 0; m <= tMatriz-1; m++) {
			scanf("%d", &matrizB[n][m]);
		}
	}
	
	for(int n = 0; n <= tMatriz-1; n++) {
		for(int m = 0; m <= tMatriz-1; m++) {
			int c = 0;
			matrizC[n][m] = 0;
			for(int o = 0; o <= tMatriz-1; o++) {
				c = matrizA[n][o] * matrizB[o][m];
				matrizC[n][m] += c;
			}
		}
	}

	for(int n = 0; n <= tMatriz-1; n++) {
		for(int m = 0; m <= tMatriz-1; m++) {
			printf("%d ", matrizA[n][m]);
		}
		printf("\n");
	}
	printf("\n");
	for(int n = 0; n <= tMatriz-1; n++) {
		for(int m = 0; m <= tMatriz-1; m++) {
			printf("%d ", matrizB[n][m]);
		}
		printf("\n");
	}
	printf("\n");
	printf("MatrizC \n");
	for(int n = 0; n <= tMatriz-1; n++) {
		for(int m = 0; m <= tMatriz-1; m++) {
			printf("%d ", matrizC[n][m]);
		}
		printf("\n");
	}
}