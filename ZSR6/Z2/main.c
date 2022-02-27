#include <stdio.h>
#define VELICINA 100

int main() {
	double niz[VELICINA],tmp;
	int i,j,n;
	do {
		printf ("Unesite broj elemenata niza: ");
		scanf ("%d" , &n);
		if (n<=0 || n>100) {
			printf ("Unos neispravan!\n");
		}
	} while (n<=0 || n>100);
	printf ("Unesite %d brojeva: \n",n);
	for (i=0;i<n;i++) {
		scanf ("%lf" , &niz[i]);
	}
	for (i=0;i<n;i++) {
		for (j=i+1;j<n;j++) {
			if (niz[j]<niz[i]) {
				tmp=niz[i];
				niz[i]=niz[j];
				niz[j]=tmp;
			}
		}
	}
	printf ("{");
	for (i=0;i<n;i++) {
		if (i<n-1) {
			printf ("%g, ",niz[i]);
		}
		else if (i==n-1) {
			printf ("%g}",niz[i]);
		}
	}
	
	
	return 0;
}