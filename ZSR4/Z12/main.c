#include <stdio.h>

int main() {
	int n,k,i;
	double x,y1,y2,x1,delta,izvod,razlika;
	printf ("Unesite n: ");
	scanf ("%d" , &n);
	printf ("Unesite korak diskretizacije: ");
	scanf ("%d" , &k);
	printf ("Unesite pocetnu vrijednost x: ");
	scanf ("%lf" , &x);
	printf ("x     y=f(x)   y'\n");
	printf ("-------------------\n");
	for (i=1;i<=n*k;i+=k) {
		y1=(x*x*x)+(5*x*x)-(7*x)+14;
		y2=((x+k)*(x+k)*(x+k))+((5*((x+k)*(x+k))))-(7*(x+k))+14;
		razlika=y2-y1;
		x1=x+k;
		delta=x1-x;
		izvod=razlika/delta;
		if (x<10) 
		printf ("%.1f   %.2f   %.2f\n",x,y1,izvod);
		else printf ("%.1f  %.2f   %.2f\n",x,y1,izvod);
		x+=k;
	}
	
return 0;
}