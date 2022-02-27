#include <stdio.h>

int main() {
	int i,n,prost=1;
	printf ("Unesite broj: ");
	scanf ("%d" , &n);
	if (n<=0) {
		printf ("Broj nije prirodan.\n");
		return 0;
	}
	if (n==1) {
		printf ("Broj nije ni prost ni slozen.\n");
		return 0;
	}
	for (i=2;i<n;i++) {
		if (n%i==0) {
			prost=0;
		}
	}
	if (prost) {
		printf ("Broj je prost.\n");
	}
	else {
		printf ("Broj je slozen.\n");
	}
	
	return 0;
}
