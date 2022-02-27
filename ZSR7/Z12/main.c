#include <stdio.h>
#include <math.h>

int potpun_kvadrat(int a) {
	int i;
	if (a<0) {
		a=-1*a;
	}
	for (i=1;i<=a;i++) {
		if (i*i==a) {
			return 1;
		}
	}
	return 0;
}

int main() {
	if (potpun_kvadrat(-169)==1) printf("OK");
	else printf("NOK");
	return 0;
}
