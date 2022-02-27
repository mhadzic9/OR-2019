#include <stdio.h>
#include <math.h>

int main()
{
	double broj,a1,a2,a3,a4,a5,a6,a7,a8,a9;
	printf ("Unesite broj: ");
	scanf ("%lf", &broj);
    a1=pow(broj,2);
    a2=pow(broj,3);
    a3=pow(broj,4);
    a4=pow(broj,5);
    a5=pow(broj,6);
    a6=pow(broj,7);
    a7=pow(broj,8);
    a8=pow(broj,9);
    a9=pow(broj,10);
	printf ("^ 1: %20.5f\n",broj);
	printf ("^ 2: %20.5f\n",a1);
	printf ("^ 3: %20.5f\n",a2);
	printf ("^ 4: %20.5f\n",a3);
	printf ("^ 5: %20.5f\n",a4);
	printf ("^ 6: %-20.5f\n",a5);
	printf ("^ 7: %-20.5f\n",a6);
	printf ("^ 8: %-20.5f\n",a7);
	printf ("^ 9: %-20.5f\n",a8);
	printf ("^ 10: %-20.5f\n",a9);
	return 0;
}
