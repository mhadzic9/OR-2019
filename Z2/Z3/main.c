#include <stdio.h>
#include <math.h>
#define VELICINA 1000
#define EPSILON 0.0001

int main()
{
	double niz[VELICINA],ubaceni,temp;
	int i,j,n,brojaci[10]= {0},a;
	do {
		printf ("Unesite broj clanova niza: ");
		scanf ("%d", &n);
	} while (n<1 || n>100);
	printf ("Unesite niz: ");
	for (i=0; i<n; i++) {
		scanf ("%lf", &niz[i]);
	}
	for (i=0; i<n-1; i++) {
		if (fabs(niz[i]*2-niz[i+1])<EPSILON) {
			ubaceni=(niz[i]+niz[i+1])/2;
			for (j=n; j>i; j--) {
				if (j!=0) niz[j]=niz[j-1];
			}
			n++;
			if (n==199) {
				break;
			}
			niz[i+1]=ubaceni;
		}
	}
	for (i=0; i<n; i++) {
		temp=niz[i]*10;
		a=(int)temp%10;
		brojaci[a]++;
	}
	printf ("Nakon ubacivanja niz glasi:\n");
	for (i=0; i<n; i++) {
		printf ("%g ", niz[i]);
	}
	printf ("\n");
	for (i=0; i<10; i++) {
		if (brojaci[i]!=0)
			printf ("Cifra %d se ponavlja %d puta.\n",i,brojaci[i]);
	}
	return 0;
}
