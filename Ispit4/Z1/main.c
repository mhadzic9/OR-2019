#include <stdio.h>

void popuni (int mat[100][100],int M)
{
	int brojac=1,red=0,i,j;
	int m1=M-1;
	int m2=M-1;
	while (1) {
		i=m1;
		j=m2;
		if (M%2==1 && brojac==M*M) {
			mat[i][j]=brojac;
			break;
		}
		if (M%2==0 && brojac==M*M+1) {
			break;
		}
		while (j!=red) {
			mat[i][j]=brojac;
			j--;
			brojac++;
		}
		while (i!=red) {
			mat[i][j]=brojac;
			i--;
			brojac++;
		}
		while (j!=m2) {
			mat[i][j]=brojac;
			j++;
			brojac++;
		}
		while (i!=m1) {
			mat[i][j]=brojac;
			i++;
			brojac++;
		}
		m1--;
		m2--;
		red++;

	}

}
int main()
{
	int A[100][100];
	int i,j;
	popuni(A, 2);
	for (i=0; i<2; i++) {
		for (j=0; j<2; j++)
			printf("%4d", A[i][j]);
		printf("\n");
	}
	return 0;
}
