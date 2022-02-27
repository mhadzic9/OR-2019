#include <stdio.h>

int NZD (int a, int b) {
	int i;
	for (i=a;i>=1;i--) {
		if (a%i==0 && b%i==0) {
			break;
		}
	}
	return i;
}

int main() {
	printf("ZSR 7, Zadatak 8");
	return 0;
}
