#include <stdio.h>

int main() {
	int n,i,suma=0;
	printf ("Unesite n: \n");
	int tacno=scanf("%d" , &n);
	if (tacno==1) {
		if (n<=0) {
			printf ("Broj nije prirodan!\n");
			return 0;
		}
		for (i=1;i<=n;i++) {
			suma+=i*i;
		}
	}
	else {
		printf ("Nije unesen broj!\n");
		return 0;
	}
	printf ("Suma je: %d" , suma);
	return 0;
}
