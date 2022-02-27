#include <stdio.h>
#include <math.h>

int korijen (int a) {
	int i;
	for (i=1;i<=a;i++) {
		if (i*i==a) {
			return sqrt(a);
		}
	}
	return -1;
}

int main() {
	printf("ZSR 7, Zadatak 13");
	return 0;
}
