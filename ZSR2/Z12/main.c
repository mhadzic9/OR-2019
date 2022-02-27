#include <stdio.h>
#include <math.h>

int main() {
	double ugao;
	int step,min,sek;
	printf ("Unesite stepene: ");
	scanf ("%lf" , &ugao);
	step=(int)ugao;
	min=(int)((ugao-step)*60);
	sek=(int)((((ugao-step)*60)-min)*60);
	printf ("%g = %d^ %d' %d''\n",ugao,step,min,sek);
	return 0;
}
