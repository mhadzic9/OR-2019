#include <stdio.h>

int main()
{
	int n,i,j;
	printf ("Unesite broj n: ");
	scanf ("%d", &n);
	if (n<4 || n%2!=0 || n>100) {
		printf ("Broj je van trazenog opsega.\n");
		return 0;
	}
	for (i=0; i<n; i++) {
		for (j=0; j<2*n; j++) {
			if (i==0 || i==n-1 || j==0 || j==2*n-1 || (j==i && j<=n/2-1) || (j==2*n-1-i && j>=(2*n)-(n/2)) || (i==n/2-1 && j>=n/2 && j<2*n-n/2)) {
				printf ("+");
			} else {
				printf (" ");
			}
		}
		printf ("\n");
	}

	return 0;
}
