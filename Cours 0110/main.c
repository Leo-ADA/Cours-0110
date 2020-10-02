#include <stdlib.h>
#include <stdio.h>

void afficher(float Tab[]) {
	for (int j = 0; j < 100; j++) {
		if (j % 10 == 0) { printf("\n"); }
		printf("%0.2f ", Tab[j]);
	}
}

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
	afficher(tableau);
	

	printf("\nNumero valeur à modifier : ");
	scanf_s("%d", &i);
	printf("\nValeur : ");
	scanf_s("%f", &n);
	
	//for (int j = i+1; j < 99; j++) {   à verifier pour le décalage
	//	tableau[j+1] = tableau[j];
	//}
	tableau[i] = n;
	afficher(tableau);

	printf("\nNumero valeur à supprimer : ");
	scanf_s("%d", &i);
	//tableau[i] = 0.0;
	//si supprimer = décaler
	for (int j = i; j < 100; j++) {
		if (j != 99) {
			tableau[j] = tableau[j + 1];
		}
		else { tableau[j] = 0.0; }
	}

	afficher(tableau);
	float moy = 0;
	for (int j = 0; j < nbN; j++) {
		moy += tableau[j];
	}
	moy = moy / nbN;
	printf("\nLe moyenne est : %0.2f", moy);

}