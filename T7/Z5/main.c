#include <stdio.h>
#include <math.h>

long long faktorijel (int n) {
	long long fakt=1;
	int i;
	for (i=1;i<=n;i++) {
		fakt*=i;
	}
	return fakt;
}
double sinus (double x, int n) {
	int i;
	double suma=0;
	for (i=1;i<=n;i++) {
		suma+=pow(-1,i-1)*(pow(x,2*i-1)/faktorijel(2*i-1));
	}
	return suma;
}
int main() {
	int n;
	double x,sinus1,sinus2,razlika,postotak;
	printf ("Unesite x: \n");
	scanf ("%lf" , &x);
	printf ("Unesite n: \n");
	scanf ("%d" , &n);
	sinus1=sinus(x,n);
	sinus2=sin(x);
	razlika=fabs(sinus1-sinus2);
	postotak=razlika*100;
	printf ("sin(x)=%.6f\n",sinus2);
	printf ("sinus(x)=%.6f\n",sinus1);
	printf ("Razlika: %.6f (%.2f%%).\n",razlika,postotak);
}