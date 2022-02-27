#include <stdio.h>
#include <math.h>
#define SIRINA 50

int main() {
	int mat[SIRINA][SIRINA],i,j,n;
	printf ("Unesite n: \n");
	scanf ("%d" , &n);
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			if (i==j) mat[i][j]=0;
			if (i>j) {
				mat[i][j]=(j-i);
			}
			if (i<j) {
				mat[i][j]=(j-i);
			}
		}
	}
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			printf ("%4d",mat[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
