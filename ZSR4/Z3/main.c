#include <stdio.h>

int main() {
	int i,j,n;
	printf ("Unesite n: ");
	scanf ("%d" , &n);
	if (n<2 || n>10) {
		printf ("Uneseni broj nije u intervalu!\n");
		return 0;
	}
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			printf ("%-4d" , i*j);
		}
		printf ("\n");
	}
	return 0;
}
