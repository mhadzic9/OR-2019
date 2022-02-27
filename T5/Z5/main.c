#include <stdio.h>
#define VELICINA 1000

int main() {
	int niz[VELICINA],i,n,brojaci[101]={0};
	printf ("Unesite brojeve: \n");
	for (i=0;i<VELICINA;i++) {
		scanf ("%d" , &niz[i]);
		if (niz[i]==-1) {
			break;
		}
		if (niz[i]<-1 || niz[i]>100) {
			printf ("Brojevi moraju biti izmedju 0 i 100!\n");
			i--;
		}
	}
	n=i;
	for (i=0;i<n;i++) {
		brojaci[niz[i]]++;
	}
	for (i=0;i<=100;i++) {
		if (brojaci[i]>0) {
			printf ("\nBroj %d se javlja %d puta.",i,brojaci[i]);
		}
	}
	
	return 0;
}