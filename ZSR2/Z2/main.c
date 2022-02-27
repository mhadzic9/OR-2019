#include <stdio.h>

int main() {
	int a,b,c,d,e,zbir;
	float prosjek;
	printf ("Unesite 5 ocjena: ");
	scanf ("%d %d %d %d %d",&a,&b,&c,&d,&e);
	zbir=a+b+c+d+e;
	prosjek=zbir/5.;
	printf ("Zbir unesenih ocjena je %d, a prosjek je: %.2f",zbir,prosjek);
	return 0;
}
