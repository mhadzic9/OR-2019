#include <stdio.h>
#include <math.h>
#define VELICINA 1000

int main() {
	int i,j,n,ubaceni;
	int niz[VELICINA];
	printf ("Unesite broj clanova niza n: ");
	scanf ("%d" , &n);
	printf ("Unesite clanove niza: ");
	for (i=0;i<n;i++) {
		scanf ("%d" , &niz[i]);
	}
	for (i=0;i<n;i++) {
		if (niz[i]*2==niz[i+1]) {
			ubaceni=round((niz[i]+niz[i+1])/2.);
			for (j=n;j>i;j--) {
				niz[j]=niz[j-1];
			}
			n++;
			niz[i+1]=ubaceni;
		}
	}
	printf ("Nakon izbacivanja niz glasi: ");
	for (i=0;i<n;i++) {
		printf ("%d ",niz[i]);
	}
	
	return 0;
}
