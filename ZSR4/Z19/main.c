#include <stdio.h>

int main() {
	int i,j,n;
	printf ("Unesite broj n: ");
	scanf ("%d" , &n);
	while (n<1 || n>50) {
		printf ("Pogresan unos\n");
		printf ("Unesite broj n: ");
		scanf ("%d" , &n);
	}
	if (n==1) {
		printf ("***\n");
		return 0;
	}
	for (i=0;i<n;i++) {
		for (j=0;j<4*n;j++) {
			if (j==i || (j==2*n-i-2 && i<n-1) || (j==2*n+i-2 && i>0) || (j==4*n-i-4 && i<n-1)) {
				printf ("*");
			}
			else {
				printf (" ");
			}
		}
		printf ("\n");
	}
	return 0;
}
