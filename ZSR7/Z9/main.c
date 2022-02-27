#include <stdio.h>

int dec2bin (short dec) {
	int k=dec,a,b,bin1=0,bin2=0;
	while (k!=0) {
		a=k%2;
		k/=2;
		bin1=bin1*10+a;
	}
	int l=bin1;
	while(l!=0) {
		b=l%10;
		bin2=bin2*10+b;
		l/=10;
	}
	return bin2;
}

int main() {
	printf("%d\n", dec2bin(8));
	
	return 0;
}
