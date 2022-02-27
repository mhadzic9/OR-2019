#include <stdio.h>
#include <math.h>

int main() {
	double baza,eksponent;
	int stepen;
	char c;
	printf ("Unesite bazu: ");
	double tacno=scanf("%lf" , &baza);
	if (!tacno) {
		printf ("Nije unesen broj!\n");
		return 0;
	}
	else {
		printf ("Unesite eksponent: ");
		int tocno=scanf ("%d %c" , &stepen, &c);
		if (tocno==2 && c!='\n') {
			printf ("Uneseni broj nije cjelobrojan!\n");
			return 0;
		}
		else if (!tocno) {
			printf ("Nije unesen broj!\n");
			return 0;
		}
		else {
			eksponent=pow(baza,stepen);
			printf ("%g^%d = %g",baza,stepen,eksponent);
		}
	}
	return 0;
}
