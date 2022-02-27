#include <stdio.h>
#define VELICINA 10
#define EPSILON1 0.0001
#define EPSILON2 -0.0001

int main() {
	double nizA[VELICINA],nizB[VELICINA],nizC[VELICINA*2];
	int i,brojac1=0,brojac2=0;
	printf ("Unesite elemente niza A: ");
	for (i=0;i<VELICINA;i++) {
		scanf ("%lf" , &nizA[i]);
		if (nizA[i]+1>EPSILON2 && nizA[i]+1<EPSILON1) {
			break;
		}
		brojac1++;
	}
	printf ("Unesite elemente niza B: ");
	for (i=0;i<VELICINA;i++) {
		scanf ("%lf" , &nizB[i]);
		if (nizB[i]+1>EPSILON2 && nizB[i]+1<EPSILON1) {
			break;
		}
		brojac2++;
	}
	for (i=0;i<brojac1+brojac2;i++) {
		if (i<brojac1) {
			nizC[i]=nizA[i];
		}
		else {
			nizC[i]=nizB[i-brojac1];
		}
	}
	printf ("Niz C glasi: ");
	for (i=0;i<brojac1+brojac2;i++) {
		if (i<brojac1+brojac2-1) {
			printf ("%g,", nizC[i]);
		}
		else if (i==brojac1+brojac2-1) {
			printf ("%g", nizC[i]);
		}
	}
	
	return 0;
}