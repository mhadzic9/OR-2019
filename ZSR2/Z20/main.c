#include <stdio.h>
#include <math.h>

int main() {
	double idealna_masa_m,idealna_masa_z,visina1,visina2,tezina,r1,r2;
	char c;
	printf ("Unesite pol (M/Z): ");
	scanf ("%c" , &c);
	printf ("Unesite visinu (u cm): ");
	scanf ("%lf", &visina1);
	printf ("Unesite trenutnu tezinu: ");
	scanf ("%lf" , &tezina);
	visina2=visina1/2.54;
	idealna_masa_m=50+2.3*(visina2-60);
	idealna_masa_z=45.5+2.3*(visina2-60);
	r1=tezina-idealna_masa_m;
	r2=tezina-idealna_masa_z;
	if ((c=='m' || c=='M') && (r1>=-3 && r1<=3)) {
		printf ("Vasa tezina je uredu");
	}
	if ((c=='z' || c=='Z') && (r2>=-3 && r2<=3)) {
		printf ("Vasa tezina je uredu");
	}
	if ((c=='m' || c=='M') && (r1>3)) {
		printf ("Potrebno je da smrsate %g kilograma",fabs(r1));
	}
	if ((c=='z' || c=='Z') && (r2>3)) {
		printf ("Potrebno je da smrsate %g kilograma",fabs(r2));
	}
	if ((c=='m' || c=='M') && (r1<-3)) {
		printf ("Potrebno je da se ugojite %g kilograma",fabs(r1));
	}
	if ((c=='z' || c=='Z') && (r2<-3)) {
		printf ("Potrebno je da se ugojite %g kilograma",fabs(r2));
	}
	return 0;
}
