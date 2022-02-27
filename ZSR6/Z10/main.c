#include <stdio.h>
#include <math.h>
#define VELICINA 500

int main()
{
	int i,j,broj_studenata;
	printf ("Unesite broj studenata: ");
	scanf ("%d", &broj_studenata);
	double bodovi[VELICINA];
	printf ("Unesite bodove na ispitu: ");
	for (i=0; i<broj_studenata; i++) {
		scanf ("%lf", &bodovi[i]);
		if (bodovi[i]<0 || bodovi[i]>20) {
			printf ("Rezultat ispita nije u trazenom intervalu\n");
			return 0;
		}
	}
	if (broj_studenata%2!=0) {
		int broj_manjih,broj_vecih;
		double medijan;
		for (i=0; i<broj_studenata; i++) {
			broj_manjih=0;
			broj_vecih=0;
			for (j=0; j<broj_studenata; j++) {
				if (bodovi[i]>bodovi[j]) broj_manjih++;
				if (bodovi[i]<bodovi[j]) broj_vecih++;
			}
			if (broj_manjih==broj_vecih) {
				medijan=bodovi[i];
				break;
			}

		}
		printf ("Medijan je: %g",medijan);

	} else {
		int broj_manjih1,broj_vecih1;
		double suma=0;
		for (i=0; i<broj_studenata; i++) {
			broj_manjih1=0;
			broj_vecih1=0;
			for (j=0; j<broj_studenata; j++) {
				if (bodovi[i]>bodovi[j]) broj_manjih1++;
				if (bodovi[i]<bodovi[j]) broj_vecih1++;
			}
			if (fabs(broj_manjih1-broj_vecih1)==1) suma+=bodovi[i];
		}
		printf ("Medijan je: %g",suma/2);
	}

	return 0;
}
