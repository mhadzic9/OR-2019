#include <stdio.h>
#define DIMENZIJA 100

int main() {
    int niz[DIMENZIJA],brojaci[DIMENZIJA+1]={0},i,n,imax,imin;
    printf ("Unesite elemente niza: ");
    for (i=0;i<DIMENZIJA;i++) {
        scanf ("%d" , &niz[i]);
        if (niz[i]==-1) {
            break;
        }
    }
    n=i;
    for (i=0;i<n;i++) {
        brojaci[niz[i]]++;
    }
    imax=0;
    imin=-1;
    for (i=0;i<DIMENZIJA+1;i++) {
        if (brojaci[i]>brojaci[imax]) {
            imax=i;
        }
        if (brojaci[i]>0 && (imin==-1 || brojaci[i]<brojaci[imin])) {
            imin=i;
        }
    }
    printf ("%d %d ", imax, imin);
	
	
	return 0;
}
