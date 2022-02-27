#include <stdio.h>
#include <math.h>

int main() {
	int sekunde,minute,sati,dani,sek;
	printf ("Unesite broj sekundi: ");
	scanf ("%d" , &sekunde);
	dani=fabs(sekunde/86400);
	sati=fabs((sekunde%86400)/3600);
	minute=fabs(((sekunde%86400)%3600)/60);
	sek=fabs((sekunde%86400)%60);
	printf ("Pretvoreno: %dd %dh %dm %ds",dani,sati,minute,sek);
	
	return 0;
}
