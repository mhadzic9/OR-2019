#include <stdio.h>

int main() {
	int vrijeme1,vrijeme2;
	double cijena,nova_cijena,razlika;
	printf ("Unesite trenutno vrijeme (hh:mm): ");
	scanf ("%d:%d" , &vrijeme1 , &vrijeme2);
	printf ("Unesite cijenu robe (KM): ");
	scanf ("%lf" , &cijena);
	if (vrijeme1<8 || vrijeme1 >17) {
		printf ("Uneseno vrijeme je van radnog vremena prodavnice.\n");
		return 0;
	}
	if (cijena>0 && cijena<15) {
		nova_cijena=cijena+((cijena*15)/100);
		razlika=nova_cijena-cijena;
		printf ("Cijena je uvecana za 15%% i iznosi %gKM.\n",nova_cijena);
	}
	if (cijena>=15 && cijena<=45) {
		nova_cijena=cijena-4;
		razlika=cijena-nova_cijena;
		printf ("Cijena je smanjena za 4KM i iznosi %gKM.\n",nova_cijena);
	}
	if (cijena>45) {
		nova_cijena=cijena-((cijena*12)/100);
		razlika=cijena-nova_cijena;
		printf ("Cijena je smanjena za 12%% i iznosi %gKM.\n",nova_cijena);
	}
	
	
	return 0;
}
