#include <stdio.h>

struct Grad {
    char ime [30];
    int broj_stanovnika;
};

void ucitaj (struct Grad* niz,int n) {
    FILE* ulaz=fopen ("gradovi.txt,"r");
    if (ulaz==NULL) {
        printf ("Greska");
        return;
    }
    
}

int main() {


	return 0;
}