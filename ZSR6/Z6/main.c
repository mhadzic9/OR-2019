#include <stdio.h>
#define VELICINA 200
#define EPSILON1 0.000001
#define EPSILON2 -0.000001

int main() {
	double niz[VELICINA],min1,min2;
	int i,j,n,brojac=0;
	for (i=0;i<VELICINA;i++) {
		printf ("Unesite %d. element (-1 za kraj unosa): \n",i+1);
		scanf ("%lf",&niz[i]);
		if (niz[i]+1>EPSILON2 && niz[i]+1<EPSILON1) break;
		brojac++;
	}
	if (brojac==0) {
		printf ("Najmanji broj je: 0\n");
		printf ("Drugi najmanji broj je: 0");
		return 0;
	}
	n=i;
	min1=niz[0];
	for (i=1;i<n;i++) {
		if (niz[i]<min1) min1=niz[i];
	}
	for (i=0;i<n;i++) {
		if (niz[i]-min1>EPSILON2 && niz[i]-min1<EPSILON1) {
			for (j=i+1;j<n;j++) {
				niz[j-1]=niz[j];
			}
			n--;
			i--;
		}
	}
	min2=niz[0];
	for (i=1;i<n;i++) {
		if (niz[i]<min2) min2=niz[i];
	}
	printf ("Najmanji broj je: %g\n",min1);
	printf ("Drugi najmanji broj je: %g",min2);
	
	
	return 0;
}