#include <stdio.h>

int main() {
	int i,n,proizvod=1;
	printf ("Unesite n: ");
	scanf ("%d" , &n);
	if (n<1) {
		printf ("\nBroj nije prirodan\n");
		return 0;
	}
	if (n==1) {
		printf ("\nProizvod je: 0");
		return 0;
	}
	for (i=2;i<=n;i++) {
		if (i%2==0) {
			proizvod*=i;
		}
	}
	printf ("\nProizvod je: %d",proizvod);
	return 0;
}
