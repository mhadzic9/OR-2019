#include <stdio.h>
#define DIMENZIJA 50

int main() {
	int mat[DIMENZIJA][DIMENZIJA],i,j,m,n,M,N;
	printf ("Unesite broj redova matrice: ");
	scanf ("%d" , &m);
	printf ("Unesite broj kolona matrice: ");
	scanf ("%d" , &n);
	M=m;
	N=n;
	printf ("Unesite elemente matrice %dx%d: ",M,N);
	for (i=0;i<M;i++) {
		for (j=0;j<N;j++) {
			scanf ("%d" , &mat[i][j]);
		}
	}
	
	return 0;
}
