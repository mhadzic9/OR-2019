#include <stdio.h>
#include <math.h>
#define EPSILON 0.000001

double stepen(double x){
	static int poziv = 0;
	static double prethodni;
	if (poziv == 0)	{ /*Prvi poziv*/
		poziv++;
		prethodni = x;
		return x;
	}
	else if (fabs(x-prethodni) < EPSILON) {/*Broj je prethodno pozivan*/
		double vrijednost = 1;
		int i;
		for (i = 0; i < poziv+1; i++){
			vrijednost*= x;
		}
		poziv++;
		return vrijednost;
	}
	else{/*Pozvan je novi broj*/
		poziv = 1;
		prethodni = x;
		return x;
	}
}

void stepenuj_niz(double A[], int s[], int duzina){
	int i, j;
	for (i = 0; i < duzina; i++) {
		double zamjena = 1;
		for (j = 0; j < s[i]; j++) {
			zamjena = stepen(A[i]);
		}
		A[i] = zamjena;
		stepen(0); /*Poziva se nakon prelaska na novi clan uslijed mogucnosti ponavljanja clanova niza*/
	}
}

int main() {
	double niz[3] = {4, 3, 2};
	int stepeni[3] = {1, 2, 3};
	int i;
	stepenuj_niz(niz, stepeni, 3);
	for (i = 0; i < 3; i++){
		printf("%g ", niz[i]);
	}
	return 0;
}