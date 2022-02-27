#include <stdio.h>

int main() {
	double a,b,c,a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,z1,z2,z3;
	printf ("Unesite bodove za Tarika: \n");
	printf ("I parcijalni ispit: ");
	scanf ("%lf" , &a);
	if (a<0 || a>20) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("II parcijalni ispit: ");
	scanf ("%lf" , &a1);
	if (a1<0 || a1>20) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Prisustvo: ");
	scanf ("%lf" , &a2);
	if (a2<0 || a2>10) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Zadace: ");
	scanf ("%lf" , &a3);
	if (a3<0 || a3>10) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Zavrsni ispit: ");
	scanf ("%lf" , &a4);
	if (a4<0 || a4>40) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Unesite bodove za Bojana: \n");
	printf ("I parcijalni ispit: ");
	scanf ("%lf" , &b);
	if (b<0 || b>20) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("II parcijalni ispit: ");
	scanf ("%lf" , &b1);
	if (b1<0 || b1>20) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Prisustvo: ");
	scanf ("%lf" , &b2);
	if (b2<0 || b2>10) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Zadace: ");
	scanf ("%lf" , &b3);
	if (b3<0 || b3>10) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Zavrsni ispit: ");
	scanf ("%lf" , &b4);
	if (b4<0 || b4>40) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Unesite bodove za Mirzu: \n");
	printf ("I parcijalni ispit: ");
	scanf ("%lf" , &c);
	if (c<0 || c>20) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("II parcijalni ispit: ");
	scanf ("%lf" , &c1);
	if (c1<0 || c1>20) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Prisustvo: ");
	scanf ("%lf" , &c2);
	if (c2<0 || c2>10) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Zadace: ");
	scanf ("%lf" , &c3);
	if (c3<0 || c3>10) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	printf ("Zavrsni ispit: ");
	scanf ("%lf" , &c4);
	if (c4<0 || c4>40) {
		printf ("Neispravan broj bodova\n");
		return 0;
	}
	z1=a+a1+a2+a3+a4;
	z2=b+b1+b2+b3+b4;
	z3=c+c1+c2+c3+c4;
	if (z1<55 && z2<55 && z3<55) {
		printf ("Nijedan student nije polozio.\n");
	}
	if ((z1>=55 && z2<55 && z3<55) || (z1<55 && z2>=55 && z3<55) || (z1<55 && z2<55 && z3>=55)) {
		printf ("Jedan student je polozio.\n");
	}
	if ((z1>=55 && z2>=55 && z3<55) || (z1>=55 && z2<55 && z3>=55) || (z1<55 && z2>=55 && z3>=55)) {
		printf ("Dva studenta su polozila.\n");
	}
	if (z1>=55 && z2>=55 && z3>=55) {
		printf ("Sva tri studenta su polozila.\n");
	
	if ((z1>=55 && z1<65 && z2>=55 && z2<65 && z3>=55 && z3<65) || (z1>=65 && z1<75 && z2>=65 && z2<75 && z3>=65 && z3<75) || (z1>=75 && z1<85 && z2>=75 && z2<85 && z3>=75 && z3<85) || (z1>=85 && z1<92 && z2>=85 && z2<92 && z3>=85 && z3<92) || (z1>=92 && z1<=100 && z2>=92 && z2<=100 && z3>=92 && z3<=100)) {
		printf ("Sva tri studenta imaju istu ocjenu.\n");
	}
	else if ((z1>=55 && z1<65 && z2>=55 && z2<65 && z3>=65 && z3<75) || (z1>=55 && z1<65 && z2>=55 && z2<65 && z3>=75 && z3<85) || (z1>=55 && z1<65 && z2>=55 && z2<65 && z3>=85 && z3<92) || (z1>=55 && z1<65 && z2>=55 && z2<65 && z3>=92 && z3<=100) || (z1>=65 && z1<75 && z2>=65 && z2<75 && z3>=55 && z3<65) || (z1>=65 && z1<75 && z2>=65 && z2<75 && z3>=75 && z3<85) || (z1>=65 && z1<75 && z2>=65 && z2<75 && z3>=85 && z3<92) || (z1>=65 && z1<75 && z2>=65 && z2<75 && z3>=92 && z3<=100) || (z1>=75 && z1<85 && z2>=75 && z2<85 && z3>=55 && z3<65) || (z1>=75 && z1<85 && z2>=75 && z2<85 && z3>=65 && z3<75) || (z1>=75 && z1<85 && z2>=75 && z2<85 && z3>=85 && z3<92) || (z1>=75 && z1<85 && z2>=75 && z2<85 && z3>=92 && z3<=100) || (z1>=85 && z1<92 && z2>=85 && z2<92 && z3>=55 && z3<65) || (z1>=85 && z1<92 && z2>=85 && z2<92 && z3>=65 && z3<75) || (z1>=85 && z1<92 && z2>=85 && z2<92 && z3>=75 && z3<85) || (z1>=85 && z1<92 && z2>=85 && z2<92 && z3>=92 && z3<=100) || (z1>=92 && z1<=100 && z2>=92 && z2<=100 && z3>=55 && z3<65) || (1>=92 && z1<=100 && z2>=92 && z2<=100 && z3>=65 && z3<75) || (1>=92 && z1<=100 && z2>=92 && z2<=100 && z3>=75 && z3<85) || (1>=92 && z1<=100 && z2>=92 && z2<=100 && z3>=85 && z3<92))  { 
	    printf ("Dva od tri studenta imaju istu ocjenu.\n");	
	}
	else if ((z1>=55 && z1<65 && z2>=65 && z2<75 && z3>=55 && z3<65) || (z1>=55 && z1<65 && z2>=75 && z2<85 && z3>=55 && z3<65) || (z1>=55 && z1<65 && z2>=85 && z2<92 && z3>=55 && z3<65) || (z1>=55 && z1<65 && z2>=92 && z2<=100 && z3>=55 && z3<65) || (z1>=65 && z1<75 && z2>=55 && z2<65 && z3>=65 && z3<75) || (z1>=65 && z1<75 && z2>=75 && z2<85 && z3>=65 && z3<75) || (z1>=65 && z1<75 && z2>=85 && z2<92 && z3>=65 && z3<75) || (z1>=65 && z1<75 && z2>=92 && z2<=100 && z3>=65 && z3<75) || (z1>=75 && z1<85 && z2>=55 && z2<65 && z3>=75 && z3<85) || (z1>=75 && z1<85 && z2>=65 && z2<75 && z3>=75 && z3<85) || (z1>=75 && z1<85 && z2>=85 && z2<92 && z3>=75 && z3<85) || (z1>=75 && z1<85 && z2>=92 && z2<=100 && z3>=75 && z3<85) || (z1>=85 && z1<92 && z2>=55 && z2<65 && z3>=85 && z3<92) || (z1>=85 && z1<92 && z2>=65 && z2<75 && z3>=85 && z3<92) || (z1>=85 && z1<92 && z2>=75 && z2<85 && z3>=85 && z3<92) || (z1>=85 && z1<92 && z2>=92 && z2<=100 && z3>=85 && z3<92) || (z1>=92 && z1<=100 && z2>=55 && z2<65 && z3>=92 && z3<=100) || (z1>=92 && z1<=100 && z2>=65 && z2<75 && z3>=92 && z3<=100) || (z1>=92 && z1<=100 && z2>=75 && z2<85 && z3>=92 && z3<=100) || (z1>=92 && z1<=100 && z2>=85 && z2<92 && z3>=92 && z3<=100)) {
		printf ("Dva od tri studenta imaju istu ocjenu.\n");
	}
	else if ((z1>=65 && z1<75 && z2>=55 && z2<65 && z3>=55 && z3<65) || (z1>=75 && z1<85 && z2>=55 && z2<65 && z3>=55 && z3<65) || (z1>=85 && z1<92 && z2>=55 && z2<65 && z3>=55 && z3<65) || (z1>=92 && z1<=100 && z2>=55 && z2<65 && z3>=55 && z3<65) || (z1>=55 && z1<65 && z2>=65 && z2<75 && z3>=65 && z3<75) || (z1>=75 && z1<85 && z2>=65 && z2<75 && z3>=65 && z3<75) || (z1>=85 && z1<92 && z2>=65 && z2<75 && z3>=65 && z3<75) || (z1>=92 && z1<=100 && z2>=65 && z2<75 && z3>=65 && z3<75) || (z1>=55 && z1<65 && z2>=75 && z2<85 && z3>=75 && z3<85) || (z1>=65 && z1<75 && z2>=75 && z2<85 && z3>=75 && z3<85) || (z1>=85 && z1<92 && z2>=75 && z2<85 && z3>=75 && z3<85) || (z1>=92 && z1<=100 && z2>=75 && z2<85 && z3>=75 && z3<85) || (z1>=55 && z1<65 && z2>=85 && z2<92 && z3>=85 && z3<92) || (z1>=65 && z1<75 && z2>=85 && z2<92 && z3>=85 && z3<92) || (z1>=75 && z1<85 && z2>=85 && z2<92 && z3>=85 && z3<92) || (z1>=92 && z1<100 && z2>=85 && z2<92 && z3>=85 && z3<92) || (z1>=55 && z1<65 && z2>=92 && z2<=100 && z3>=92 && z3<=100) || (z1>=65 && z1<75 && z2>=92 && z2<=100 && z3>=92 && z3<=100) || (z1>=75 && z1<85 && z2>=92 && z2<=100 && z3>=92 && z3<=100) || (z1>=85 && z1<92 && z2>=92 && z2<=100 && z3>=92 && z3<=100)) {
	
	}
	else {
		printf ("Svaki student ima razlicitu ocjenu.\n");
	}
	}
	return 0;
}
