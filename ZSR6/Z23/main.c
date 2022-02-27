#include <stdio.h>
#define VISINA 100
#define SIRINA 100

int main() {
	double mat[VISINA][SIRINA],clan=mat[0][0];;
	int i,j,m,n,M,N,oboje=1,teplicova=1,cirkularna=1;
	do {
		printf ("Unesite M i N: ");
		scanf ("%d %d", &m , &n);
		if (m<=0 || m>100 || n<=0 || n>100) printf ("Pogresan unos!\n");
	} while (m<=0 || m>100 || n<=0 || n>100);
	printf ("Unesite elemente matrice: ");
	M=m;
	N=n;
	for (i=0;i<M;i++) {
		for (j=0;j<N;j++) {
			scanf ("%lf" , &mat[i][j]);
		}
	}
	/*int clan=mat[0][0];
	for (i=1;i<M;i++) {
		for (j=1;j<N;j++) {
			if (i==j && mat[i][j]!=clan) {
				oboje=0;
				break;
			}
		}
	}*/
	/*for (i=0;i<M;i++) {
		for (j=0;j<N;j++) {
			if (oboje) {
				if (i<j) {
					if (j==i+1 && mat[i][j]!=mat[i+1][j+1]) {
						cirkularna=0;
						break;
					}
				}
				if (i>j) {
					if (mat[i][j]!=(i-j+brojac)) cirkularna=0;
				}
			}
		}
		brojac--;
	}*/
	double kurac=clan;
	for (i=0;i<M;i++) {
		if (kurac!=mat[i][j]) cirkularna=0;
		for (j=0;j<N;j++) {
		}
		kurac=mat[i][j];
	}
	/*for (i=0;i<M-1;i++) {
		for (j=0;j<N-1;j++) {
			if (oboje) {
				if (i<j) {
					if (j==i+1 && mat[i][j]!=mat[i+1][j+1]) {
						teplicova=0;
						break;
					}
				}
				if (i>j) {
					if (j==i-1 && mat[i][j]!=mat[i+1][j+1]) {
						teplicova=0;
						break;
					}
				}
			}
		}
	}*/
	
	
	if (!teplicova && !cirkularna) {
		printf ("Matrica nije ni cirkularna ni Teplicova");
		return 0;
	}
	if (cirkularna) {
		printf ("Matrica je cirkularna");
		return 0;
	}
	if (teplicova) {
		printf ("Matrica je Teplicova");
	}
	
	return 0;
}
