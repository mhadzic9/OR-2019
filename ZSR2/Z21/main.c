#include <stdio.h>

int main() {
	double macka,kornjaca,pas,meso,ostalo,vrijeme1,vrijeme2,dan;
	printf ("Unesite trenutno vrijeme (hh:mm): ");
	scanf ("%lf:%lf" , &vrijeme1, &vrijeme2);
	printf ("Unesite redni broj dana u sedmici: ");
	scanf ("%lf" , &dan);
	if (vrijeme1<8.) {
		printf ("Ljubimci ne smiju jesti prije 8:00h!\n");
		return 0;
	}
	kornjaca=(double)((7+vrijeme1)/(dan+154));
	if (vrijeme1>18) {
		pas=dan*7;
		printf ("Pas ce dobiti %g kreker/a.\n",pas);
	}
	else {
	pas=(double)((vrijeme1+vrijeme2+dan)/34);
	meso=pas/3;
	ostalo=pas-meso;
	printf ("Pas ce pojesti %.2fkg hrane, od toga %.2fkg mesa i %.2fkg ostale hrane.\n",pas,meso,ostalo);
	}
	macka=(double)(2*vrijeme1/40+dan/7);
	printf ("Macka ce pojesti %.2fkg hrane.\n",macka);
	if (dan==4) {
		printf ("Kornjaca ce pojesti %.2fkg hrane.\n",kornjaca);
		printf ("Kornjaca ce dobiti i kalcij posto je cetvrtak.\n");
	}
	else {
		printf ("Kornjaca ce pojesti %.2fkg hrane.\n",kornjaca);
	}
	
	return 0;
}
