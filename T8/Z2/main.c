#include <stdio.h>

float maxtemp (float p[8]) {
	int i;
	float max=p[0];
	for (i=0;i<8;i++) {
		if (p[i]>max) {
			max=p[i];
		}
	}
	return max;
}
float prtemp (float p[8]) {
	int i;
	float suma=0,prosjek;
	for (i=0;i<8;i++) {
		suma+=p[i];
	}
	prosjek=suma/8;
	return prosjek;
}

int main() {
	printf("Tutorijal 8, Zadatak 2");
	return 0;
}
