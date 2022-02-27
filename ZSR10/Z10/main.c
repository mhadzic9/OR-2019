#include <stdio.h>

struct Grad {
	char naziv[20];
	int broj_stanovnika;
};

int zbir (struct Grad* niz, int vel) {
	int i,zbir=0,sadrzi_a;
	char* s;
	for (i=0;i<vel;i++) {
		sadrzi_a=0;
		s=niz[i].naziv;
		while (*s!='\0') {
			if (*s=='a' || *s=='A') {
				sadrzi_a=1;
				break;
			}
			s++;
		}
		if (sadrzi_a) {
			zbir+=niz[i].broj_stanovnika;
		}
	}
	return zbir;
}

int main() {
	
}
