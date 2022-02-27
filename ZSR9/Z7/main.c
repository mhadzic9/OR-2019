#include <stdio.h>
#define VISINA 100
#define SIRINA 100

int main() {
	int mat[VISINA][SIRINA],i,j,m,n,M,N,suma;
	printf ("Unesite broj redova matrice: ");
	scanf ("%d" , &m);
	printf ("Unesite broj kolona matrice: ");
	scanf ("%d" , &n);
	M=m;
	N=n;
	for (i=0;i<M;i++) {
		for (j=0;j<N;j++) {
			scanf ("%d" , &mat[i][j]);
			if (mat[i][j]<=0) {
				printf ("Greska pri unosu. Prekoracen opseg.\n");
				j--;
			}
		}
	}
	int maxsuma=0,maxr=0;
	for (i=0;i<M;i++) {
		maxsuma+=mat[0][i];
	}
	for (i=0;i<M;i++) {
		suma=0;
		for (j=0;j<N;j++) {
			suma+=mat[i][j];
		}
		if (suma>maxsuma) {
			maxsuma=suma;
			maxr=i;
		}
	}
	for (i=0;i<M;i++) {
		mat[maxr][i]=mat[M-1][i];
	}
	M--;
	
	printf ("Nakon izbacivanja reda sa najvecom sumom elemenata, matrica glasi: \n");
	for (i=0;i<M;i++) {
		for (j=0;j<N;j++) {
			printf ("%d ",mat[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
