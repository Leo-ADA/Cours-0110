#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main() {
	int tableau[10][10], sym[10][10];
	srand(time(NULL));
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {

			tableau[j][i] = rand();
		}
	}
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			printf("%d ", tableau[j][i]);
		}
		printf("\n");
	}
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (i == j) { sym[j][i] = tableau[j][i]; }
			else { sym[j][i] = tableau[i][j]; }
		}
	}
	printf("\n\n\n\n");
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			printf("%d ", sym[j][i]);
		}
		printf("\n");
	}
}