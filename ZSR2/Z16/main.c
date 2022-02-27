#include <stdio.h>

int main() {
	int a,b,c;
	printf ("Unesite tri cijela broja: ");
	scanf ("%d %d %d" , &a, &b, &c);
	if (a>=-20 && a<=-8 && b>=-20 && b<=-8 && c>=-20 && c<=-8) { 
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi pripadaju jednom intervalu.\n");
	}
	if (a>=-1 && a<=1 && b>=-1 && b<=1 && c>=-1 && c<=1) { 
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi pripadaju jednom intervalu.\n");
	}
	if (a>=40 && a<=50 && b>=40 && b<=50 && c>=40 && c<=50) { 
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi pripadaju jednom intervalu.\n");
	}
	if (a>=77 && a<=101 && b>=77 && b<=101 && c>=77 && c<=101) { 
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi pripadaju jednom intervalu.\n");
	}
	if (a>=-20 && a<=-8 && b>=-20 && b<=-8 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=-20 && b<=-8 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=-20 && b<=-8 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=-1 && b<=1 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=-1 && b<=1 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=-1 && b<=1 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=40 && b<=50 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=40 && b<=50 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=40 && b<=50 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=77 && b<=101 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=77 && b<=101 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=77 && b<=101 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=-1 && b<=1 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=40 && b<=50 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=77 && b<=101 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=-20 && b<=-8 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=40 && b<=50 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=77 && b<=101 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=-20 && b<=-8 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=-1 && b<=1 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=77 && b<=101 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=-20 && b<=-8 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=-20 && b<=-8 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=-20 && b<=-8 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=-1 && b<=1 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=-1 && b<=1 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=-1 && b<=1 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=40 && b<=50 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=40 && b<=50 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=40 && b<=50 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=77 && b<=101 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=77 && b<=101 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=77 && b<=101 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=-1 && b<=1 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=-1 && b<=1 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=40 && b<=50 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=40 && b<=50 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=77 && b<=101 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-20 && a<=-8 && b>=77 && b<=101 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=-20 && b<=-8 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=-20 && b<=-8 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=40 && b<=50 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=40 && b<=50 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=77 && b<=101 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=-1 && a<=1 && b>=77 && b<=101 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=-20 && b<=-8 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=-20 && b<=-8 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=-1 && b<=1 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=-1 && b<=1 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=77 && b<=101 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=40 && a<=50 && b>=77 && b<=101 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=-20 && b<=-8 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=-20 && b<=-8 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=-1 && b<=1 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=-1 && b<=1 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=40 && b<=50 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (a>=77 && a<=101 && b>=40 && b<=50 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=-20 && b<=-8 && c>=-20 && c<=-8) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=40 && b<=50 && c>=40 && c<=50) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=77 && b<=101 && c>=77 && c<=101) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=-20 && b<=-8 && c>=-1 && c<=1) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=-20 && b<=-8 && c>=40 && c<=50) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=-20 && b<=-8 && c>=77 && c<=101) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=-1 && b<=1 && c>=-20 && c<=-8) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=-1 && b<=1 && c>=40 && c<=50) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=-1 && b<=1 && c>=77 && c<=101) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=40 && b<=50 && c>=-20 && c<=-8) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=40 && b<=50 && c>=-1 && c<=1) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=40 && b<=50 && c>=77 && c<=101) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=77 && b<=101 && c>=-20 && c<=-8) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=77 && b<=101 && c>=-1 && c<=1) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && b>=77 && b<=101 && c>=40 && c<=50) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=-20 && a<=-8 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=-1 && a<=1 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=40 && a<=50 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=77 && a<=101 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=-20 && a<=-8 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=-20 && a<=-8 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=-20 && a<=-8 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=-1 && a<=1 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=-1 && a<=1 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=-1 && a<=1 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=40 && a<=50 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=40 && a<=50 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=40 && a<=50 && c>=77 && c<=101) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=77 && a<=101 && c>=-20 && c<=-8) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=77 && a<=101 && c>=-1 && c<=1) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && a>=77 && a<=101 && c>=40 && c<=50) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=-20 && a<=-8 && b>=-20 && b<=-8) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=-1 && a<=1 && b>=-1 && b<=1) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=40 && a<=50 && b>=40 && b<=50) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=77 && a<=101 && b>=77 && b<=101) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=-20 && a<=-8 && b>=-1 && b<=1) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=-20 && a<=-8 && b>=40 && b<=50) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=-20 && a<=-8 && b>=77 && b<=101) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=-1 && a<=1 && b>=-20 && b<=-8) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=-1 && a<=1 && b>=40 && b<=50) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=-1 && a<=1 && b>=77 && b<=101) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=40 && a<=50 && b>=-20 && b<=-8) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=40 && a<=50 && b>=-1 && b<=1) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=40 && a<=50 && b>=77 && b<=101) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=77 && a<=101 && b>=-20 && b<=-8) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [-20, -8]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=77 && a<=101 && b>=-1 && b<=1) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=77 && a<=101 && b>=40 && b<=50) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && ((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && c>=-20 && c<=-8) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [-20, -8]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && ((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && c>=-1 && c<=1) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [-1, 1]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && ((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && c>=40 && c<=50) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [40, 50]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && ((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && c>=77 && c<=101) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d pripada intervalu [77, 101]\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && ((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && b>=-20 && b<=-8) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu[-20, -8]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && ((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && b>=-1 && b<=1) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [-1, 1]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && ((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && b>=40 && b<=50) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [40, 50]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101)) && ((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && b>=77 && b<=101) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d pripada intervalu [77, 101]\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && ((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=-20 && a<=-8) {
		printf ("Broj %d pripada intervalu [-20, -8]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && ((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=-1 && a<=1) {
		printf ("Broj %d pripada intervalu [-1, 1]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && ((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=40 && a<=50) {
		printf ("Broj %d pripada intervalu [40, 50]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && ((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && a>=77 && a<=101) {
		printf ("Broj %d pripada intervalu [77, 101]\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	if (((b<-20 || b>-8) && (b<-1 || b>1) && (b<40 || b>50) && (b<77 || b>101)) && ((c<-20 || c>-8) && (c<-1 || c>1) && (c<40 || c>50) && (c<77 || c>101)) && ((a<-20 || a>-8) && (a<-1 || a>1) && (a<40 || a>50) && (a<77 || a>101))) {
		printf ("Broj %d ne pripada niti jednom intervalu\n",a);
		printf ("Broj %d ne pripada niti jednom intervalu\n",b);
		printf ("Broj %d ne pripada niti jednom intervalu\n",c);
		printf ("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	return 0;
}
