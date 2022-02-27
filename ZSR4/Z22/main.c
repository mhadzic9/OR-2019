#include <stdio.h>
#define VELICINA 10

int main() {
	int mat[VELICINA][VELICINA],i,j,n,V,S,suma,maxsuma=0,maxr;
	printf ("Unesite broj n: ");
    scanf ("%d" , &n);
    V=n;
    S=n;
    for (i=0;i<V;i++) {
        printf ("Unesite elemente %d reda: ",i+1);
        for (j=0;j<S;j++) {
            scanf ("%d" , &mat[i][j]);
        }
    }
    for (i=0;i<V;i++) {
        maxsuma+=mat[0][i];
    }
    for (i=0;i<V;i++) {
            suma=0;
        for (j=0;j<S;j++) {
            suma+=mat[i][j];
            if (suma>maxsuma) {
                maxsuma=suma;
                maxr=i;
            }
        }
    }
    for (j=0;j<V;j++) {
        mat[maxr][j]=mat[V-1][j];
    }
    V--;
    
    for (i=0;i<V;i++) {
        for (j=0;j<S;j++) {
            printf ("%-5d",mat[i][j]);
        }
        printf ("\n");
    }
	
	return 0;
}