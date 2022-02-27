#include <stdio.h>

int main() {
	int n,k,i;
	double x,y;
	printf ("Unesite n: ");
	scanf ("%d" , &n);
	printf ("Unesite korak diskretizacije: ");
	scanf ("%d" , &k);
	printf ("Unesite pocetnu vrijednost x: ");
	scanf ("%lf" , &x);
	printf ("x     y=f(x)\n");
	printf ("------------\n");
	for (i=1;i<=n*k;i+=k) {
		y=(x*x*x)+(5*x*x)-(7*x)+14;
		if (x<10) 
		printf ("%.1f   %6.2f\n",x,y);
		else printf ("%.1f  %.2f\n",x,y);
		x+=k;
	}
	
return 0;
}
