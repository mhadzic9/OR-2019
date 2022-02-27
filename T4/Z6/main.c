#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 1
#define MAX 100

int main() {
	int broj1,broj2;
	srand ((unsigned)time NULL);
	broj2=rand ()% MAX+MIN;
	printf ("\nIzabrao sam broj. Probaj ga pogoditi (-1 za izlaz).");
	do {
		printf ("\nUnesite broj: ");
		scanf ("%d" , &broj1);
		if (broj1==-1) {
			printf ("Kraj igre.");
			break;
		}
	if (broj1<broj2) {
		printf ("MANJI");
	}
	if (broj1>broj2) {
		printf ("VECI");
	}
	if (broj1==broj2) {
		printf ("JEDNAK");
		printf ("\nKraj igre.");
	}
		
	} while (broj1!=broj2);
	
	return 0;
}