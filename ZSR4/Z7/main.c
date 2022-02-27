#include <stdio.h>

int main() {
	int n,i;
	printf ("Unesite n: ");
	scanf ("%d" , &n);
	while (n<=0) {
		printf ("Broj nije prirodan!\n");
		printf ("Unesite n: ");
		scanf ("%d" , &n);
	}
	for (i=1;i<=n;i++) {
		if (i%2!=0 && i%3!=0 && i%13!=0) {
			printf ("%d\n",i);
		}
	}
	return 0;
}
