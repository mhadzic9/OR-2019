#include <stdio.h>

int main() {
	int i,j,n;
	printf ("Unesite n: ");
	scanf ("%d" , &n);
	if (n<2) {
		printf ("Neispravan unos\n");
		return 0;
	}
	for (i=0;i<2*n-1;i++) {
		for (j=0;j<2*n;j++) {
			if ((j==0 || ((j==i && j<n) || (j==2*n-2-i && j<n))) || (i>j && j>0 && j<n) || ((j==2*n-2-i && j>=n) || (j==i && j>=n) || j==2*n-2)) {
				printf ("*");
			}
		/*	else if (i<n-2*i && j==i) {
				printf ("*");
			}*/
			else {
				printf (" ");
			}
			
		}
		printf ("\n");
	}
	return 0;
}
