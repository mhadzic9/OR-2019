#include <stdio.h>
#define VELICINA 1000

int main() {
	int niz[VELICINA],i,n,brojac1=0,brojac2=0,brojac3=0;
	printf ("Unesite brojeve: ");
	for (i=0;i<VELICINA;i++) {
		scanf ("%d" , &niz[i]);
		if (niz[i]==-1) {
			break;
		}
	}
	n=i;
	for (i=0;i<n;i++) {
		if (niz[i]%5==0) {
			brojac1++;
		}
		if (niz[i]%7==0) {
			brojac2++;
		}
		if (niz[i]%11==0) {
			brojac3++;
		}
	}
	printf ("\nDjeljivih sa 5: %d" , brojac1);
	printf ("\nDjeljivih sa 7: %d" , brojac2);
	printf ("\nDjeljivih sa 11: %d" , brojac3);
	
	return 0;
}
