#include <stdio.h>
#include <math.h>

int main() {
	double a,b,c,K;
	printf ("Unesite koeficijente a, b i c: ");
	scanf ("%lf %lf %lf" , &a, &b, &c);
	K=sqrt(b*b-(4*a*c));
	printf ("Iznos za koeficijente %g, %g i %g je: %g",a,b,c,K);
	return 0;
}
