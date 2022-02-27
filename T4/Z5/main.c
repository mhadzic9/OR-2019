#include <stdio.h>

int main() {
	int broj,cifra,c,r,nb=0,nb1=0;
	do {
		printf ("Unesite broj: ");
		scanf ("%d" , &broj);
	} while (broj<0);
	do {
		printf ("Unesite cifru: ");
		scanf ("%d" , &cifra);
	} while (cifra<0);
	while (broj!=0) {
		c=broj%10;
		broj/=10;
		if (c!=cifra) {
			nb=nb*10+c;
		}
	}
	while (nb!=0) {
		r=nb%10;
		nb/=10;
		nb1=nb1*10+r;
	}
	printf ("Nakon izbacivanja broj glasi %d.",nb1);
	printf ("\nBroj pomnozen sa dva glasi %d.",2*nb1);
	
	return 0;
}
