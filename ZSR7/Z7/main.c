#include <stdio.h>
#include <math.h> 

int armstrong (int n) {
	int broj=0,suma=0,a;
	int k=n;
	int l=n;
	while (n!=0) {
		n/=10;
		broj++;
	}
	while (l!=0) {
		a=l%10;
		l/=10;
		suma+=pow(a,broj);
	}
	if (suma==k) {
		return 1;
	}
	return 0;
	
}

int main() {
	printf ("%d" , armstrong(200));
	return 0;
}
