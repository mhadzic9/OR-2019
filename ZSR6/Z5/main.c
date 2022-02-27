#include <stdio.h>
#define VELICINA 100

int main()
{
	int niz[VELICINA],i,j,n,suma=0;
	printf ("Unesite broj elemenata niza: ");
	scanf ("%d", &n);
	printf ("Unesite %d brojeva: ",n);
	for (i=0; i<n; i++) {
		scanf ("%d", &niz[i]);
	}
	for (i=0; i<n; i++) {
		if (niz[i]%2==0) {
			for (j=i+1; j<n; j++) {
				niz[j-1]=niz[j];
			}
			n--;
			i--;
		}
	}
	printf ("Niz je: ");
	for (i=0; i<n; i++) {
		printf (" %d,",niz[i]);
		suma+=niz[i];
	}
	printf ("\nSuma je: %d",suma);

	return 0;
}
