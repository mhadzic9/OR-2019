#include <stdio.h>
#define DIMENZIJA 50

int main()
{
	int i,n;
	double niz[DIMENZIJA];
	do {
		printf ("Unesite broj elemenata niza: ");
		scanf ("%d", &n);
		if (n<=0 || n>50) {
			printf ("Unos neispravan!\n");
		}
	} while (n<=0 || n>50);
	printf ("Unesite %d brojeva: \n",n);
	for (i=0;i<n;i++) {
		scanf ("%lf" , &niz[i]);
	}
	for (i=n-1;i>=0;i--) {
		printf (" %g,",niz[i]);
	}


	return 0;
}
