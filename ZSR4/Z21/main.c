#include <stdio.h>

int main() {
	int n,i,j;
	printf ("Unesite broj n: ");
	scanf ("%d" , &n);
	if (n%2==0 || n<3 || n>100) {
		printf ("Broj je van trazenog opsega\n");
		return 0;
	}
	for (i=0;i<2*n;i++) {
		for (j=0;j<n;j++) {
			if ((j==n/2-i && j<=n/2) || i==n/2 || (j==n/2+i && j>=n/2) || ((j==0 || j==n-1) && (i>=n/2 && i<n/2+n))) {
				printf ("+");
			}
			else if (i==n+n/2-1) {
				printf ("+");
			}
			else if (j==i-n/2 && (i>n/2 && i<=n+n/2)) {
				printf ("+");
			}
			else if (j==n+n/2-i-1 && (i>n/2 && i<=n+n/2)) {
				printf ("+");
			}
			else {
				printf (" ");
			}
			
		}
		printf ("\n");
	}
	return 0;
}
