#include <stdio.h>

void Transformiraj (double *niz,int vel) {
	double suma=0;
	int i;
	for (i=0;i<vel;i++) {
		suma+=*(niz+i);
	}
	suma/=vel;
	for (i=0;i<vel;i++) {
		*(niz+i)/=suma;
	}
}

int main() {
	double niz[100];
	int i,n;
	printf ("Unesite elemente niza: ");
	for (i=0;i<100;i++) {
		scanf ("%lf" , niz+i);
		if (*(niz+i)==-1) break;
	}
	n=i;
	Transformiraj(niz,n);
	printf ("Novi niz glasi: ");
	for (i=0;i<n;i++) {
		printf ("%g ",*(niz+i));
	}
	
	
	return 0;
}
