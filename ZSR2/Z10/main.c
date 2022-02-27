#include <stdio.h>

int main() {
	int broj,a,b,z,r,p;
	float k;
	printf ("Unesite cijeli broj: ");
	scanf ("%d" , &broj);
	if (broj>-10 && broj<10) {
		broj=broj+100000;
	}
	a=broj%10;
	b=(broj/10)%10;
	if (broj<0) {
		a=-a;
		b=-b;
	}
	z=b+a;
	r=b-a;
	p=b*a;
	k=(float)b/a;
	printf ("Zbir zadnje dvije cifre (%d i %d) je: %d\n",b,a,z);
	printf ("Razlika zadnje dvije cifre (%d i %d) je: %d\n",b,a,r);
	printf ("Proizvod zadnje dvije cifre (%d i %d) je: %d\n",b,a,p);
	if (b==0 && a==0) {
		printf ("Kolicnik zadnje dvije cifre (%d i %d) je: Nemoguce!\n",b,a);
	}
	else {
	printf ("Kolicnik zadnje dvije cifre (%d i %d) je: %f\n",b,a,k);
	}
	
	return 0;
}
