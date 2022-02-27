#include <stdio.h>

int main() {
	int n,i,j;
	printf ("Unesite N, dimenziju BGA kola: ");
	scanf ("%d" , &n);
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
			else if (j==2*n+4-n) {
				if (i%2!=0) {
					printf (">");
				}
				else if (i%2==0) {
					printf ("<");
				}
				
			}
			else if (j>2 && j<=(2*n+4)/2) {
				printf ("o ");
			}
			else {
				printf (" ");
			}
			
		}
		printf ("\n");
	}
	return 0;
}
