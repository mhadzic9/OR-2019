#include <stdio.h>

int main() {
	int a;
	printf ("Unesite cijeli broj: ");
	scanf ("%d" , &a);
	/*if ((a>-11 && a<-6) || (a>15 && a<=16) || (a>=6 && a<=9)) {
		printf ("Ne nalazi");
	}
	*/

	if (((a>=-3 && a<11) || (a>5 && a<15) || (a>17 && a<=31) || (a>19 && a<33)) && ((a>-1 && a<=1) || (a>=2 && a<=12) || (a>=5 && a<=55) || (a>=9 && a<10)) && ((a<=-11 || a>=-6) && (a<=15 || a>16) && (a<6 || a>9))) {
		printf ("Nalazi");
	}
	else {
		printf ("Ne nalazi");
	}
	return 0;
	/*if ((a>-1 && a<=1) || (a>=2 && a<=12) || (a>=5 && a<=55) || (a>=9 && a<10)) {
		printf ("Nalazi");
	}
	else {
		printf ("Ne nalazi");
	}

	*/

	return 0;
}
