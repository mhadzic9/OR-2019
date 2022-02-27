#include <stdio.h>
#include <math.h>
#define VELICINA 20

int main()
{
	double niz[VELICINA];
	int i,n;
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
	for (i=0; i<n; i++) {
		niz[i]=round(niz[i]*100)/100;
	}



	printf ("{");
	for (i=0; i<n; i++) {
		if (i<n-1) {
			printf ("%.4f, ",niz[i]);
		} else if (i==n-1) {
			printf ("%.4f}",niz[i]);
		}
	}

	return 0;
}
