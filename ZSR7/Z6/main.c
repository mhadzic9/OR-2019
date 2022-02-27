#include <stdio.h>

int stepen_broja_dva(int n) {
	int i,clan=1;
	if (n==0) {
		return 0;
	}
	if (n==1) {
		return 1;
	}
	if (n%2!=0) {
		return 0;
	}
	for (i=2;i<=n;i*=2) {
		if (i==n) {
			return 1;
		}
	}
}

int main() {
	printf("ZSR 7, Zadatak 6");
	return 0;
}
