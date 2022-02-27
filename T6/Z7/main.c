#include <stdio.h>
#define VISINA 10
#define SIRINA 10

int main() {
	int mat[VISINA][SIRINA],novamat[VISINA][SIRINA],i,j,max,min,imax=0,imin=0;
	printf ("Unesite elemente matrice: ");
	for (i=0;i<VISINA;i++) {
		for (j=0;j<SIRINA;j++) {
			scanf ("%d" , &mat[i][j]);
		}
	}
	max=mat[0][0];
	for (i=0;i<VISINA;i++) {
		for (j=0;j<SIRINA;j++) {
			if (mat[i][j]>max) {
				max=mat[i][j];
				imax=i;
			}
		}
	}
	min=mat[0][0];
	for (i=0;i<VISINA;i++) {
		for (j=0;j<SIRINA;j++) {
			if (mat[i][j]<min) {
				min=mat[i][j];
				imin=i;
			}
		}
	}
	if (imin==imax) {
		printf ("Najmanji i najveci element se nalaze u istom redu.\n");
		return 0;
	}
	for (i=0;i<VISINA;i++) {
		for (j=0;j<SIRINA;j++) {
			if (i==imin) {
				novamat[i][j]=mat[imax][j];
			}
			else if (i==imax) {
				novamat[i][j]=mat[imin][j];
			}
			else {
				novamat[i][j]=mat[i][j];
			}
		}
	}
	printf ("Nakon zamjene matrica glasi:\n");
		for (i=0; i<10; i++) {
			for (j=0; j<10; j++) {
				if (j!=9)
					printf ("%d ", novamat[i][j]);
				else
					printf ("%d", novamat[i][j]);
			}
			printf ("\n");
		}
	
	
	return 0;
}
