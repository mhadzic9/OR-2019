#include <stdio.h>
#define EPSILON 0.0001

int main() {
	double a,b,h,i,j,tmp,u;
	long double suma=0,clan=1;
	int n,brojac=0,k,broj=0;
	printf ("Unesite prvu tacku intervala: ");
	scanf ("%lf", &a);
	if (a<1 || a>100) {
		printf ("Nedozvoljena vrijednost!\n");
		return 0;
	}
	printf ("Unesite drugu tacku intervala: ");
	scanf ("%lf" , &b);
	if (b-0<EPSILON || b<1) {
		printf ("Nedozvoljena vrijednost!\n");
		return 0;
	}
	if (b-a<EPSILON || a+b>100) {
		printf ("Neispravan interval!\n");
		return 0;
	}
	printf ("Unesite eksponent: ");
	scanf ("%d" , &n);
	if (n<-10 || n>10) {
		printf ("Neispravan eksponent!\n");
		return 0;
	}
	printf ("Unesite korak diskretizacije: ");
	scanf ("%lf" , &h);
	printf ("Korak    x            y = f(x)\n");
	printf ("----------------------------------\n");
	for (i=a;i<b;i+=h) {
		brojac++;
	}
	k=brojac;
	tmp=a;
	if (k<=4) {
		for (i=0;i<k;i++) {
			clan=1;
			for (j=0;j<n;j++) {
				clan*=a;
			}
			suma+=clan*h;
			printf ("%5g. %8.6f%16.5Lf\n",i+1,a,clan);
			a+=h;
		}
	
	printf ("----------------------------------\n");
	printf ("P(x^%d)[%g,%g]= %.6Lf (dx=%g)\n",n,tmp,b,suma,h);
	return 0;
}

	u=(b-1)/h;
	if (k>4) {
		for (i=0;i<u;i++) {
			clan=1;
			for (j=0;j<n;j++) {
				clan*=a;
			}
			suma+=clan*h;
			if (broj<4) {
			printf ("%5g. %8.6f       %9.5Lf\n",i+1,a,clan);
			}
			a+=h;
			broj++;
	}
	printf ("(...)\n");
	
	printf (" %g. %.6f%16.5Lf\n",(b-1)/h,b-h,clan);
	
	printf ("----------------------------------\n");
	printf ("P(x^%d)[%g,%g]= %.6Lf (dx=%g)\n",n,tmp,b,suma,h);
	}
	return 0;
}
