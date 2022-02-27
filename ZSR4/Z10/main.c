#include <stdio.h>

int main() {
	int i,n,a=1,b=1,clan;
	printf ("Unesite n: ");
	scanf ("%d" , &n);
	if (n<=0) {
		printf ("Neispravan unos\n");
		return 0;
	}
	printf ("Prvih %d Fibonaccijevih brojeva: %d %d " , n, a, b);
	for (i=2;i<n;i++) {
			clan=a+b;
			a=b;
			b=clan;
			printf ("%d ",clan);
	}
	
	return 0;
}
