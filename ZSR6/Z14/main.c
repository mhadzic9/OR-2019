#include <stdio.h>
#define VELICINA 100

int main() {
	int matrica[VELICINA][VELICINA],i,j,N;
	do {
		printf ("Unesite broj N: ");
		scanf ("%d" , &N);
	} while (N<=0 || N>100);
	printf ("Unesite elemente matrice: \n");
	for (i=0;i<N;i++) {
		for (j=0;j<N;j++) {
			scanf ("%d" , &matrica[i][j]);
		}
	}
	int nula=1;
	for (i=0;i<N;i++) {
		for (j=0;j<N;j++) {
			if (matrica[i][j]!=0) nula=0;
		}
	}
	int jedinicna=1;
	for (i=0;i<N;i++) {
		for (j=0;j<N;j++) {
			if (i==j) {
				if (matrica[i][j]!=1) jedinicna=0;
			}
			else if (i!=j) {
				if (matrica[i][j]!=0) jedinicna=0;
			}
		}
	}
	int dijagonalna=1;
	for (i=0;i<N;i++) {
		for (j=0;j<N;j++) {
			if (i!=j) {
				if (matrica[i][j]!=0) dijagonalna=0;
			}
		}
	}
	int gornja_trougaona=1;
	for (i=0;i<N;i++) {
		for (j=0;j<N;j++) {
			if (i>j && matrica[i][j]) gornja_trougaona=0;
		}
	}
	int donja_trougaona=1;
	for (i=0;i<N;i++) {
		for (j=0;j<N;j++) {
			if (i<j && matrica[i][j]) donja_trougaona=0;
		}
	}
	int sporedna=1;
	for (i=0;i<N;i++) {
		for (j=0;j<N;j++) {
			if (j!=N-1-i && matrica[i][j]!=0) sporedna=0;
		}
	}
	if (nula) {
		printf ("Nul-matrica");
		return 0;
	}
	if (jedinicna) {
		printf ("Jedinicna matrica");
		return 0;
	}
	if (dijagonalna) {
		printf ("Dijagonalna matrica");
		return 0;
	}
	if (gornja_trougaona) {
		printf ("Gornja trougaona matrica");
		return 0;
	}
	if (donja_trougaona) {
		printf ("Donja trougaona matrica");
		return 0;
	}
	if (sporedna) {
		printf ("Sporedna dijagonalna matrica");
	}
	if (!nula && !jedinicna && !dijagonalna && !gornja_trougaona && !donja_trougaona && !sporedna) {
		printf ("Nista od navedenog");
	}
	
	
	return 0;
}
