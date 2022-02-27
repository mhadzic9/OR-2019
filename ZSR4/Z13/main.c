#include <stdio.h>

int main() {
	int n,r,i,j;
	printf ("Unesite n: ");
	scanf ("%d" , &n);
	printf ("Unesite sirinu ispisa: ");
	scanf ("%d" , &r);
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			if (i==j) {
				printf ("%*d",r,1);
			}
			else {
				printf ("%*d",r,0);
			}
		}
		printf ("\n");
	}
	return 0;
}
