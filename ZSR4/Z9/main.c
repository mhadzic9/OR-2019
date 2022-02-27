#include <stdio.h>

int main() {
	int n,i,j;
	printf ("Unesite N, dimenziju BGA kola: ");
	scanf ("%d" , &n);
	while (n<1 || n>35) {
		printf ("N mora biti u opsegu [1,35]!\n");
		printf ("Unesite N, dimenziju BGA kola: ");
		scanf ("%d" , &n);
	}
	for (i=0;i<n+2;i++) {
		for (j=0;j<2*n+5;j++) {
			if ((i==0 && j==0) || (i==0 && j==2*n+4) || (i==n+1 && j==0) || (i==n+1 && j==2*n+4)) {
				printf ("+");
			}
			/*else {
				printf (" ");
			}*/
			else if (i==0 || i==n+1) {
				printf ("-");
			}
			/*else printf (" ");*/
			else if (j==0) {
				printf ("|");
			}
			else if (j==2*n+4) {
				if (i%2!=0) {
					printf (">");
				}
				else if (i%2==0) {
					printf ("<");
				}
				
			}
			else if ((j>2 && j<=2*n+4 && i>0 && i<n+1 && j%2!=0) && (2*i+1==j || 2*i>j)) {
				printf ("o");
			}
			else {
				printf (" ");
			}
			
		}
		printf ("\n");
	}
	return 0;
}
