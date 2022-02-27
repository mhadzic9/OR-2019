#include <stdio.h>

struct Klub {
    char naziv[20];
    int broj_igraca;
};

int broj_rijeci(char *s) {
	int broj=0,razmak;
	while (*s!='\0') {
		if (*s==' ') {
			razmak=1;
		}
		else if (razmak=1) {
			razmak=0;
			broj++;
		}
		s++;
	}
	return broj;
}

int suma_igraca(struct Klub* niz, int vel) {
	int i,suma=0;
	for (i=0;i<vel;i++) {
		if (broj_rijeci(niz[i].naziv)>1) {
			suma+=niz[i].broj_igraca;
		}
	}
	return suma;
}

int main() {
	printf("ZSR 10, Zadatak 11");
	return 0;
}
