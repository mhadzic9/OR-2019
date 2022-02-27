#include <stdio.h>

int main() {
	int broj;
	printf ("Unesite godine: ");
	scanf ("%d" , &broj);
	if (broj<1 || broj>100) {
		printf ("Greska!");
		return 0;
	}
	if (broj%10==5 || broj%10==6 || broj%10==7 || broj%10==9 || broj==11 || broj==12 || broj==13 || broj==14) {
		printf ("Imate %d godina",broj);
	}
	if (broj%10==1 && broj!=11) {
		printf ("Imate %d godinu",broj);
	}
	if ((broj%10==2 || broj%10==3 || broj%10==4) && broj!=12 && broj!=13 && broj!=14) {
		printf ("Imate %d godine",broj);
	}
	
	return 0;
}
