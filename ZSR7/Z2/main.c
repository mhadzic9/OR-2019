#include <stdio.h>

int vrati_najveci_stepen (int n) {
	int a=2,broj=0;
	while (a<=n) {
		a=a*2;
		broj++;
	}
	return broj;
}

int main() {
	printf("ZSR 7, Zadatak 2");
	return 0;
}
