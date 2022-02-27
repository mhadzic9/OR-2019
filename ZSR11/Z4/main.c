#include <stdio.h>
#define VISINA 100
#define SIRINA 100

int main() {
	double prosjek,prosjek_k;
	int i,j,v,s,V,S,maxk=0,mat[VISINA][SIRINA],maxsuma=0;
	printf ("Unesite broj redova matrice: ");
	scanf ("%d" , &v);
	printf ("Unesite broj kolona matrice: ");
	scanf ("%d" , &s);
	V=v;
	S=s;
	printf ("Unesite elemente matrice %dx%d: " , V, S);
	for (i=0;i<V;i++) {
		for (j=0;j<S;j++) {
			scanf ("%d" , &mat[i][j]);
		}
	}
	for (i=0;i<V;i++) {
		for (j=0;j<S;j++) {
			maxsuma+=mat[i][j];
		}
	}
	prosjek=maxsuma/(V*S);
	/*for (j=0;j<S;j++) {
		prosjek_k=0;
		for (i=0;i<V;i++) {
			prosjek_k+=mat[i][j]/V;
			if (prosjek_k>=prosjek) {
				maxk=j;
				mat[i][maxk]=mat[i][S-1];
				S--;
				j--;
			}
		}
	}
	printf ("Matrica nakon izbacene kolone glasi: \n");
	for (i=0;i<V;i++) {
		for (j=0;j<S;j++) {
			printf ("%5g" , mat[i][j]);
		}
		printf ("\n");
	}*/
	printf ("%g",prosjek);
	
	
	return 0;
}
