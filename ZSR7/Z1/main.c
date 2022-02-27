#include <stdio.h>
#define VELICINA 15

void ispisi_niz (int niz[], int n) {
	if (n==0) {
		return;
	}
	
	printf ("%d ",niz[n-1]);
	ispisi_niz(niz,n-1);
} 
int main () {
	int niz[5]={1,2,3,4,5};
	ispisi_niz(niz,5);
	return 0;
}


