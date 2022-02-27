#include <stdio.h>
#include <math.h>

int main() {
	double broj,korijen;
	printf ("Unesi broj: ");
	scanf ("%lf" , &broj);
	korijen=sqrt(sqrt(broj));
	printf ("4. korijen iz broja %g je %.10f",broj,korijen);
	return 0;
}
