#include <stdio.h>

int fibonacci (int n) {
	int i,clan,a=1,b=1;
	if (n==0) {
		return 0;
	}
	if (n==1 || n==2) {
		return 1;
	}
	for (i=2;i<n;i++) {
		clan=a+b;
		a=b;
		b=clan;
	}
	return clan;
}

int main() {
	printf("ZSR 7, Zadatak 4");
	return 0;
}
