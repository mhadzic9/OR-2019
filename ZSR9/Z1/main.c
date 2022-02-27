#include <stdio.h>


int main()
{
		double mat[VISINA][SIRINA],suma;
	int m,n,M,N,i,j,maxk;
	printf ("Unesite visinu matrice: ");
	scanf ("%d" , &m);
	printf ("Unesite sirinu matrice: ");
	scanf ("%d" , &n);
	M=m;
	N=n;
	printf ("Unesite elemente matrice: ");
	for (i=0;i<M;i++) {
		for (j=0;j<N;j++) {
			scanf ("%lf" , &mat[i][j]);
		}
	}
	double maxsuma=0;
	for (i=0;i<M;i++) {
		maxsuma+=mat[i][0];
	}
	for (i=1;i<N;i++) {
		suma=0;
		for (j=0;j<M;j++) {
			suma+=mat[j][i];
		}
		if (suma>maxsuma) {
			maxsuma=suma;
			maxk=i;
		}
	}
	for (i=0;i<M;i++) {
		mat[i][maxk]=mat[i][N-1];
	}
	N--;
	for (i=0; i<M;i++) {
		for (j=0; j<N; j++)
			printf("%5f", mat[i][j]);
		printf("\n");
	}

	return 0;
}
