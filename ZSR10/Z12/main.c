#include <stdio.h>

struct predmet {
    char naziv[20];
    char ime_prezime_nastavnika[20];
    int semestar;
};

int broj_istih_slova (struct predmet* niz, int vel) {
	int i,broj=0;
	for (i=0;i<vel;i++) {
		char prvo=niz[i].naziv[0];
		char* s=niz[i].naziv;
		while (*s!='\0') s++;
		s--;
		char posljednje=*s;
		if (prvo>='A' && prvo<='Z') prvo+=32;
		if (posljednje>='A' && posljednje<='Z') posljednje+=32;
		if (prvo==posljednje) broj++
	}
	return broj;
}

int main() {
	printf("ZSR 10, Zadatak 12");
	return 0;
}
