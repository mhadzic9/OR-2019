#include <stdio.h>
#define VISINA 100
#define SIRINA 100

int main() {
	double mat[VISINA][SIRINA],suma=0;
	int i,j,a,b;
	printf ("Unesite dimenzije matrice: ");
	scanf ("%d %d" , &a, &b);
	printf ("Unesite elemente matrice: ");
	for (i=0;i<a;i++) {
		for (j=0;j<b;j++) {
			scanf ("%lf" , &mat[i][j]);
		}
	}
	for (i=0;i<a;i++) {
		for (j=0;j<b;j++) {
			if (j==0 || j==b-1 || (i==0 && j>0 && j<b-1) || (i==a-1 && j>0 && j<b-1)) {
				suma+=mat[i][j];
			}
		}
	}
	printf ("Suma elemenata na rubu je %.2f", suma);
	
	return 0;
}
