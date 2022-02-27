#include <stdio.h>

struct Student{
	char ime[20];
	char prezime[20];
	int br_indeksa;
	float prosjek;
};

//Zapisi u datoteku niz od 3 studenta, a potom učitaj iz iste datoteke te iste podatke i upiši ih u drugi pomocni niz koji je na početku prazan

int main() {
	struct Student niz[3] = { {"Hamo", "Hamic", 17988, 7.6}, {"Zadatak", "Zadatakovic", 16842, 8.2}, {"Havana", "Havana", 18787, 9.5}};
	struct Student pomocni[3];
	FILE* ulaz;
	int zapisano, procitano;
	
	//zapisao u datoteku studenti.dat iz niza NIZ koji je ispunjen sa 3 studenta
	ulaz = fopen("studenti.dat", "wb");
	if(ulaz==NULL){
		printf("Greska");
		return 1;
	}
	zapisano = fwrite(niz, sizeof(struct Student), 3, ulaz);
	printf("U datoteku je uspjesno upisano %d elemenata\n", zapisano);
	fclose(ulaz);
	
	//nakon toga, zatvorio si datoteku i otvorio je opet u modusu READ ovaj put, i sad čitaš iz te zapisane datoteke
	//i to pročitano UPISUJEŠ u drugi niz, POMOCNI koji je prazan.
	//ako je dobro upisao, nizovi se moraju podudarati
	ulaz = fopen("studenti.dat", "rb");
	if(ulaz==NULL){
		printf("Greska!");
		return 1;
	}
	procitano = fread(pomocni,sizeof(struct Student), 3, ulaz);
	int i;
	for(i=0; i<procitano; i++){
		printf("%s %s %d %.2f\n", pomocni[i].ime, pomocni[i].prezime, pomocni[i].br_indeksa, pomocni[i].prosjek);
	}
	
	return 0;
}