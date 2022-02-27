#include <stdio.h>
#include <math.h>

int main() {
	double a,b,c,K,D;
	printf ("Unesite koeficijente a, b i c: ");
	scanf ("%lf %lf %lf" , &a, &b, &c);
	D=b*b-(4*a*c);
	K=sqrt(D);
	if (D<0) {
		printf ("Korijen negativnog broja nema realnih rjesenja!\n");
	}
	else {
	printf ("Iznos za koeficijente %g, %g i %g je: %g\n",a,b,c,K);
	}
	return 0;
}
