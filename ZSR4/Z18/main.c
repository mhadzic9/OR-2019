#include <stdio.h>
#define VELICINA 100

int main() {
	int i,j,n,prost=1,suma=0;
	printf ("Unesite broj n: ");
	scanf ("%d" , &n);
	for (i=2;i<=n;i++) {
		for (j=2;j<i;j++) {
			if (i%j==0) {
				prost=0;
			}
		}
		if (prost) {
			suma+=i;
			printf ("%d\n",i);
		}
		prost=1;
	}
	printf ("Suma je: %d",suma);
	
	return 0;
}
