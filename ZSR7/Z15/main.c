#include <stdio.h>

int daj_prost (void) {
	static int i,j;
	int a,b;
	int prost=1;
	for (i=a;i<b;i++) {
		for (j=a;j<i;j++) {
			if (i%j==0) {
				prost=0;
			}
		}
		
	}
	if (prost) {
		return i;
	}
	
}

int main() {
	int a,b;
	printf ("Unesite brojeve A i B: ");
	scanf ("%d %d" , &a, &b);
	
	return 0;
}
