#include <stdio.h>
#define KAPACITET 1000

struct Student {
	int br_indeksa,predmet,ocjena;
};

int main() {
	int predmet,suma=0,broj_uspjesnih=0,broj_ocjena=0;
	float prosjek_ocjena,prolaznost;
	char d='%';
	struct Student niz[KAPACITET];
	FILE* ulaz=fopen ("ispiti.txt" , "r");
	if (ulaz==NULL) {
		printf ("Greska pri otvaranju datoteke ispiti.txt");
		return 1;
	}
	int i=0;
	while (i<KAPACITET && fscanf(ulaz, "%d %d %d",&niz[i].br_indeksa,&niz[i].predmet,&niz[i].ocjena)==3) i++;
	int br=i;
	printf ("Unesite predmet: ");
	scanf ("%d",&predmet);
	for (i=0;i<br;i++) {
		if (niz[i].predmet==predmet) {
			broj_ocjena++;
			suma+=niz[i].ocjena;
			if (niz[i].ocjena>=6) broj_uspjesnih++;
		}
	}
	if (broj_ocjena==0) {
		printf ("Zalimo, ali ne postoje podaci o predmetu sa brojem %d!",predmet);
	}
	else {
		prosjek_ocjena=(float)suma/broj_ocjena;
		prolaznost=(float)broj_uspjesnih/broj_ocjena;
		printf ("Prosjecna ocjena: %.2f",prosjek_ocjena);
		printf ("\nProlaznost: %.f%c",prolaznost*100,d);
	}
	
	
	return 0;
}
