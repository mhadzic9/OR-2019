#include <stdio.h>
#include <math.h>

int prva_cifra (int n) {
	while (fabs(n)>10) {
		n=fabs(n)/10;
	}
	return n;
}

int main() {
	printf("ZSR 7, Zadatak 3");
	return 0;
}
