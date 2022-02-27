#include <stdio.h>
#define VELICINA 100

int main() {
	double niz[VELICINA],a;
	int i,n,ima=0,index;
	for (i=1;i<=VELICINA;i++) {
		printf ("Unesite %d. element (-1 za kraj unosa): \n", i);
		scanf ("%lf" , &niz[i]);
		if (niz[i]==-1) {
			break;
		}
	}
	n=i;
	printf ("Unesite broj za pretragu: \n");
	scanf ("%lf" , &a);
	for (i=1;i<=n;i++) {
		if (niz[i]==a) {
			ima=1;
			index=i;
		}
	}
	if (!ima) {
		printf ("Broj %g se ne nalazi medju unesenim brojevima!\n", a);
		return 0;
	}
	else {
		printf ("Broj %g je unesen kao %d. broj po redu.\n",a,index);
	}
	
	return 0;
}