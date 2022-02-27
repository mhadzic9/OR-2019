#include <stdio.h>
#define VELICINA 5

int main()
{
	double nizA[VELICINA],nizB[VELICINA],nizC[VELICINA];
	int i;
	printf ("Unesite clanove niza A: ");
	for (i=0;i<VELICINA;i++) {
		scanf ("%lf" , &nizA[i]);
	}
	printf ("Unesite clanove niza B: ");
	for (i=0;i<VELICINA;i++) {
		scanf ("%lf" , &nizB[i]);
	}
	printf ("Niz A glasi: ");
	for (i=0;i<VELICINA;i++) {
		if (i<VELICINA-1) {
			printf ("%.2f, ", nizA[i]);
		}
		else if (i==VELICINA-1) {
			printf ("%.2f" , nizA[i]);
		}
	}
	printf ("\nNiz B glasi: ");
	for (i=0;i<VELICINA;i++) {
		if (i<VELICINA-1) {
			printf ("%.2f, ", nizB[i]);
		}
		else if (i==VELICINA-1) {
			printf ("%.2f" , nizB[i]);
		}
	}
	for (i=0;i<VELICINA;i++) {
		nizC[i]=2*nizA[i]+nizB[i];
	}
	printf ("\nNiz C glasi: ");
	for (i=0;i<VELICINA;i++) {
		if (i<VELICINA-1) {
			printf ("%.2f, ", nizC[i]);
		}
		else if (i==VELICINA-1) {
			printf ("%.2f" , nizC[i]);
		}
	}


	return 0;
}
