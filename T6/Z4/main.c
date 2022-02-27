#include <stdio.h>
#define DIMENZIJA 10

int main() {
	int niz[DIMENZIJA],i,j,n,a;
	printf ("Unesite elemente niza: ");
	for (i=0;i<DIMENZIJA;i++) {
		scanf ("%d" , &niz[i]);
		if (niz[i]==-1) {
			break;
		}
	}
	n=i;
	printf ("Unesite element koji treba izbaciti: ");
	scanf ("%d" , &a);
	for (i=0;i<n;i++) {
		if (niz[i]==a) {
			for (j=i+1;j<n;j++) {
				niz[j-1]=niz[j];
			}
			n--;
			i--;
		}
	
	}
	printf ("Novi niz glasi: ");
	for (i=0;i<n;i++) {
		if (i<n-1) {
			printf ("%d,",niz[i]);
		}
		else if (i==n-1) {
			printf ("%d",niz[i]);
		}
	}
	
	return 0;
}
