#include <stdio.h>

long long faktorijel (int n) {
	long long fakt=1;
	int i;
	for (i=1;i<=n;i++) {
		fakt*=i;
	}
	return fakt;
}
int main() {
	int i,n;
	double x,suma=0;
	printf ("Unesite broj n u intervalu [1, 12]: ");
	scanf ("%d" , &n);
	printf ("Unesite realan broj x: ");
	scanf ("%lf" , &x);
	for (i=1;i<=n;i++) {
		suma+=x/faktorijel(i);
	}
	printf ("Suma od 1 do %d za x = %.3f je %.3f",n,x,suma);
	return 0;
}