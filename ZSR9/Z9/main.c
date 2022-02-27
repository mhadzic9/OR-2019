#include <stdio.h>

int b (int *p, int x) {
	int *z=p;
	while (*z++<x);
	return z-p;
}

int main() {
	int X[5]={1,2,3,4,6};
	int y=1;
	y=b(X,5);
	printf ("%d",y);
	
	return 0;
}
