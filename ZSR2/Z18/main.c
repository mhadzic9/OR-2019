#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,zbir,razlika,proizvod,kvadrat,kolicnik,korijen;
	printf ("--- Moj mini kalkulator ---\n");
	printf ("Sabiranje: +\n");
	printf ("Oduzimanje: -\n");
	printf ("Mnozenje: *\n");
	printf ("Dijeljenje: /\n");
	printf ("Kvadriranje: #\n");
	printf ("Korjenovanje: &\n");
	char c;
	printf ("Odaberite operaciju: ");
	scanf ("%c", &c);
	if (c!='+' && c!='-' && c!='*' && c!='/' && c!='#' && c!='&') {
		printf ("GRESKA: Nepostojeca operacija!");
		return 0;
	}

	if (c=='+') {
		printf ("Unesite prvi broj: ");
		scanf ("%lf", &a);
		printf ("Unesite drugi broj: ");
		scanf ("%lf", &b);
		zbir=a+b;
		printf ("Rezultat: %g + %g = %g\n",a,b,zbir);
	}
	if (c=='-') {
		printf ("Unesite prvi broj: ");
		scanf ("%lf", &a);
		printf ("Unesite drugi broj: ");
		scanf ("%lf", &b);
		razlika=a-b;
		printf ("Rezultat: %g - %g = %g\n",a,b,razlika);
	}
	if (c=='*') {
		printf ("Unesite prvi broj: ");
		scanf ("%lf", &a);
		printf ("Unesite drugi broj: ");
		scanf ("%lf", &b);
		proizvod=a*b;
		printf ("Rezultat: %g * %g = %g\n",a,b,proizvod);
	}
	if (c=='/') {
		printf ("Unesite prvi broj: ");
		scanf ("%lf", &a);
		printf ("Unesite drugi broj: ");
		scanf ("%lf", &b);
		kolicnik=a/b;
		if (b==0) {
			printf ("GRESKA: Dijeljenje sa nulom!");
		} else {
			printf ("Rezultat: %g / %g = %g\n",a,b,kolicnik);


		}
	}
	if (c=='#') {
		printf ("Unesite broj: ");
		scanf ("%lf", &a);
		kvadrat=a*a;
		printf ("Rezultat: %g^2 = %g\n",a,kvadrat);
	}
	if (c=='&') {
		printf ("Unesite broj: ");
		scanf ("%lf", &a);
		korijen=sqrt(a);
		printf ("Rezultat: %g^(1/2) = %g\n",a,korijen);
	}

	return 0;
}
