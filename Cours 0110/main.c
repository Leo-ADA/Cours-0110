#include <stdlib.h>
#include <stdio.h>

int main() {
	int i = 0,nbN = 0;
	float tableau[100], n=0.0;
	for (int j = 0; j < 100; j++) { tableau[j] = 0.0; }

	while (nbN!=100) {
		printf("Saisir nombre : ");
		scanf_s("%f", &n);
		if (n < 0.0) { break; }
		tableau[nbN] = n;
		nbN += 1;
	}
	for (int j = 0; j < 100; j++) { 
		if (j % 10 == 0) { printf("\n"); }
		printf("%0.2f ", tableau[j]);
	}

	printf("\nNumero valeur à modifier : ");
	scanf_s("%d", &i);
	printf("\nValeur : ");
	scanf_s("%f", &n);
	tableau[i] = n;

	for (int j = 0; j < 100; j++) {
		if (j % 10 == 0) { printf("\n"); }
		printf("%0.2f ", tableau[j]);
	}

	printf("\nNumero valeur à supprimer : ");
	scanf_s("%d", &i);
	tableau[i] = 0.0;

	for (int j = 0; j < 100; j++) {
		if (j % 10 == 0) { printf("\n"); }
		printf("%0.2f ", tableau[j]);
	}
	float moy = 0;
	for (int j = 0; j < nbN; j++) {
		moy += tableau[j];
	}
	moy = moy / nbN;
	printf("\nLe moyenne est : %0.2f", moy);

}