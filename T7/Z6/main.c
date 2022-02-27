#include <stdio.h>
#define DIMENZIJA 100

long long faktorijel (int n) {
	long long fakt=1,i;
	for (i=1;i<=n;i++) {
		fakt*=i;
	}
	return fakt;
}
int pascal(int x,int y)
{
	if (x<1 || y<1 || y>x)
		return -1;
	if (y==1 || x==y)
		return 1;
	return pascal (x-1,y-1) + pascal (x-1,y);
}

int main() {
    int i,j,n;
    printf ("Unesite n: \n");
    scanf ("%d" , &n);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (i==j) {
                printf ("1");
            }
            if (i>j) {
                printf ("%-4lld",faktorijel(i)/(faktorijel(j)*faktorijel(i-j)));
            }
            else {
                printf (" ");
            }
        }
        printf ("\n");
    }
    	
	return 0;
}
