#include <stdio.h>

int main() {
	int i,j,n,suma=0,prost=1;
	printf ("Unesite n: ");
	scanf ("%d" , &n);
	for (i=2;i<=n;i++) {
		for (j=2;j<i;j++) {
			if (i%j==0) {
				prost=0;
			}
		}
		if (prost) {
			printf ("%d\n",i);
			suma+=i;
		}
		prost=1;
	}
	printf ("Suma je: %d" , suma);
	
	return 0;
}
