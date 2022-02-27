#include <stdio.h>

int main() {
	int n,i,j;
	do {
		printf ("Unesite N: ");
		scanf ("%d" , &n);
		if (n%2==0 && n>1) {
			printf ("N je parno!\n");
		}
		else if (n<1) {
			printf ("N je manje od 1!\n");
		}
	} while (n%2==0 || n<1);
	printf ("\n");
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			if (i==n/2 && j==n/2) {
				printf ("+");
			}
			else if (j==n/2 && ((i>=0 && i<n/2) || (i>n/2 && i<=n-1))) {
				printf ("|");
			}
			else if (j==0 && i==n/2) {
				printf ("<");
			}
			else if (j==n-1 && i==n/2) {
				printf (">");
			}
			else if (i==n/2 && ((j>0 && j<n/2) || (j>n/2 && j<n-1))) {
				printf ("-");
			}
			else {
				printf (" ");
			}
		}
		printf ("\n");
	}
	return 0;
}
