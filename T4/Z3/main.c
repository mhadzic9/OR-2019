#include <stdio.h>

int main() {
	int i,j;
	printf ("  X |   1   2   3   4   5   6   7   8   9   10\n");
	printf ("----------------------------------------------\n");
	for (i=1;i<=10;i++) {
		for (j=1;j<=10;j++) {
			printf ("%3d",i*j);
		}
		printf ("\n");
	}
	return 0;
}
