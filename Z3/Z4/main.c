#include <stdio.h>
#include <math.h>
#define EPSILON 0.000001

int broj_ponavljanja (double matrica[100][100], int M, int N, double vrijednost){
	int brojac = 0;
	int i, j;
	for (i = 0; i < M; i++){
		for (j = 0; j < N; j++){
			if (fabs(matrica[i][j]-vrijednost) < EPSILON)
				brojac++;
		}
	}
	return brojac;
}

int matrice_permutacija(double A[100][100], double B[100][100], double C[100][100], int M, int N){
	int i, j;
	int brojac1, brojac2, brojac3;
	for ( i = 0; i < M; i++){/*Da li svi elementi prve postoje u ostalim?*/
		for (j = 0; j < N; j++){
			brojac1 = broj_ponavljanja(A, M, N, A[i][j]);
			brojac2 = broj_ponavljanja(B, M, N, A[i][j]);\
			if (brojac1 != brojac2) return 0;
			brojac3 = broj_ponavljanja(C, M, N, A[i][j]);
			if (brojac2 != brojac3) return 0;
			brojac1 = 0;
			brojac2 = 0;
			brojac3 = 0;
		}
	} 
	brojac1 = 0; brojac2 = 0; brojac3=0; /*Restartujemo vrijednost svih brojaca*/
	
	for ( i = 0; i < M; i++)/*Da li svi elementi druge postoje u ostalim*/
		for (j = 0; j < N; j++){
			brojac1 = broj_ponavljanja(A, M, N, A[i][j]);
			brojac2 = broj_ponavljanja(B, M, N, A[i][j]);\
			if (brojac1 != brojac2) return 0;
			brojac3 = broj_ponavljanja(C, M, N, A[i][j]);
			if (brojac2 != brojac3) return 0;
			brojac1 = 0;
			brojac2 = 0;
			brojac3 = 0;
		}
	} 
	brojac1 = 0; brojac2 = 0; brojac3=0; /*Restartujemo vrijednost svih brojaca*/
	
	for ( i = 0; i < M; i++){/*Da li svi elementi trece postoje u ostalim*/
		for (j = 0; j < N; j++){
			brojac1 = broj_ponavljanja(A, M, N, A[i][j]);
			brojac2 = broj_ponavljanja(B, M, N, A[i][j]);\
			if (brojac1 != brojac2) return 0;
			brojac3 = broj_ponavljanja(C, M, N, A[i][j]);
			if (brojac2 != brojac3) return 0;
			brojac1 = 0;
			brojac2 = 0;
			brojac3 = 0;
		}
	} 
*/	
	return 1;
}

int main() {
	int visina, sirina;
	printf ("Unesite visinu i sirinu matrica: ");
	scanf ("%d %d", &visina, &sirina);
	
	printf ("Unesite prvu matricu:\n");
	double matrica1[100][100];
	int i; int j;
	for (i = 0; i < visina; i++){
		for (j = 0; j < sirina; j++)
			scanf("%lf", &matrica1[i][j]);
	}
	
	printf ("Unesite drugu matricu:\n");
	double matrica2[100][100];
	for (i = 0; i < visina; i++){
		for (j = 0; j < sirina; j++)
			scanf("%lf", &matrica2[i][j]);
	}
	
	printf ("Unesite trecu matricu:\n");
	double matrica3[100][100];
	for (i = 0; i < visina; i++){
		for (j = 0; j < sirina; j++)
			scanf("%lf", &matrica3[i][j]);
	}
	if (matrice_permutacija(matrica1, matrica2, matrica3, visina, sirina) == 1)
		printf("Matrice su permutacije u svom medjusobnom odnosu.\n");
	else
		printf("Matrice nisu permutacije u svom medjusobnom odnosu.\n");
}
