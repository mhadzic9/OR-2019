#include <stdio.h>

int obrnut (int n) {
	int naopako=0,c;
	while (n!=0) {
		c=n%10;
		naopako=naopako*10+c;
		n/=10;
	}
	return naopako;
}
int main() {
	printf ("%d",obrnut(12345));
	return 0;
}
