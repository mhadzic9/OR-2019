#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define VELICINA 20


int main() {
	double niz[VELICINA];
	int i,n,broj_decimala,ispis;
	do {
		printf ("Unesite broj elemenata niza: ");
		scanf ("%d", &n);
		if (n<=0 || n>100) {
			printf ("Unos neispravan!\n");
		}
	} while (n<=0 || n>100);
	printf ("Unesite %d brojeva: \n",n);
	for (i=0; i<n; i++) {
		scanf ("%lf", &niz[i]);
	}
	printf ("Unesite broj decimala za zaokruzivanje: ");
	scanf ("%d" , &broj_decimala);
	printf ("Unesite broj decimala za ispis: ");
	scanf ("%d",&ispis);
	for (i=0;i<n;i++) {
	    niz[i]=round(niz[i]*pow(10,broj_decimala))/pow(10,broj_decimala);
	}
	for (i=0;i<n;i++) {
		if (niz[i]>-0.0001 && niz[i]<0.0001) niz[i]=abs(niz[i]);
	}
	printf ("{");
	for (i=0; i<n; i++) {
		if (i<n-1) {
			printf ("%.*f, ",ispis,niz[i]);
		} else if (i==n-1) {
			printf ("%.*f}",ispis,niz[i]);
		}
	}
	
	
	return 0;
}