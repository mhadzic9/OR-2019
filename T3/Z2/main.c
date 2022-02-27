#include <stdio.h>

int main() {
	int broj,suma=0,i;
	for (i=0;i<100;i++) {
		printf ("Unesite broj: ");
		scanf ("%d" , &broj);
		suma+=broj;
		if (suma>100) {
			break;
		}
	}
	printf ("Suma je: %d" , suma);
	return 0;
}
