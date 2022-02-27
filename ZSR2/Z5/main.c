#include <stdio.h>

int main() {
	int n;
	char c;
	printf ("Unesite znak kojim ce broj biti okruzen: ");
	scanf ("%c" , &c);
	printf ("Unesite prirodan broj u intervalu [0, 9]: ");
	scanf ("%d" , &n);
	printf ("%c%c%c%c%c\n",c,c,c,c,c);
	printf ("%c%c%c%c%c\n",c,c,c,c,c);
	printf ("%c %d %c\n",c,n,c);
	printf ("%c%c%c%c%c\n",c,c,c,c,c);
	printf ("%c%c%c%c%c\n",c,c,c,c,c);
	return 0;
}
