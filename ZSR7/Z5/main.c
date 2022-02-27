#include <stdio.h>
#include <math.h>

double stepen (double b, int e) {
	int i;
	double clan=1,suma=0,clan1;
	if (e<0) {
		for (i=0;i<fabs(e);i++) {
		clan=clan*b;
		clan1=1/clan;
		}
		return clan1;
		
	}
	for (i=0;i<e;i++) {
		clan=clan*b;
	}
	return clan;
}

int main() {
	printf("ZSR 7, Zadatak 5");
	return 0;
}
