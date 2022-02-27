#include <stdio.h>

int main() {
	int dan,mjesec,godina;
	printf ("Unesite dan, mjesec i godinu (razdvojite razmakom): ");
	scanf ("%d %d %d" , &dan, &mjesec, &godina);
	if ((dan<1 || dan>31) || (mjesec<1 || mjesec>12) || (godina<1 || godina>4000)) {
		printf ("Pogresni ulazni podaci!\n");
		return 0;
	}
	switch (mjesec) {
		case 1:
		printf ("Uneseni datum je %d. januar %d. godine",dan,godina);
		break;
		case 2:
		printf ("Uneseni datum je %d. februar %d. godine",dan,godina);
		break;
		case 3:
		printf ("Uneseni datum je %d. mart %d. godine",dan,godina);
		break;
		case 4:
		printf ("Uneseni datum je %d. april %d. godine",dan,godina);
		break;
		case 5:
		printf ("Uneseni datum je %d. maj %d. godine",dan,godina);
		break;
		case 6:
		printf ("Uneseni datum je %d. juni %d. godine",dan,godina);
		break;
		case 7:
		printf ("Uneseni datum je %d. juli %d. godine",dan,godina);
		break;
		case 8:
		printf ("Uneseni datum je %d. august %d. godine",dan,godina);
		break;
		case 9:
		printf ("Uneseni datum je %d. septembar %d. godine",dan,godina);
		break;
		case 10:
		printf ("Uneseni datum je %d. oktobar %d. godine",dan,godina);
		break;
		case 11:
		printf ("Uneseni datum je %d. novembar %d. godine",dan,godina);
		break;
		case 12:
		printf ("Uneseni datum je %d. decembar %d. godine",dan,godina);
		break;
		default:
		printf ("Pogresni ulazni podaci!");
		
	}
	return 0;
}
