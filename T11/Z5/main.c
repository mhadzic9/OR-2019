#include <stdio.h>
#include <math.h>

struct Vrijeme {
	int sati,minute,sekunde;
};

struct Vrijeme unos_vremena() {
	struct Vrijeme v;
	scanf ("%d %d %d",&v.sati,&v.minute,&v.sekunde);
	return v;
}

struct Vrijeme proteklo (struct Vrijeme v1,struct Vrijeme v2) {
	struct Vrijeme razlika;
	int ukupno1,ukupno2,minus;
	ukupno1=v1.sati*3600+v1.minute*60+v1.sekunde;
	ukupno2=v2.sati*3600+v2.minute*60+v2.sekunde;
	minus=fabs(ukupno1-ukupno2);
	razlika.sati=minus/3600;
	razlika.minute=(minus/60)%60;
	razlika.sekunde=minus%60;
	return razlika;
	
}

int main() {
	struct Vrijeme v1,v2;
	printf ("Unesite prvo vrijeme (h m s): \n");
	v1=unos_vremena();
	printf ("Unesite drugo vrijeme (h m s): \n");
	v2=unos_vremena();
	struct Vrijeme razlika=proteklo(v1,v2);
	printf ("Izmedju dva vremena je proteklo %d sati, %d minuta i %d sekundi.",razlika.sati,razlika.minute,razlika.sekunde);
	
	return 0;
}
