#include <stdio.h>

struct Student {
	char ime[20];
	char prezime[20],broj_indexa[20];
};
struct Ocjene {
	char index[20];
	int n;
	int ocjene [100];
};

int UcitajIzTekstualne(struct Student* studenti)
{
	FILE *ulaz=fopen("studenti.txt","r");
	if (ulaz==NULL) {
		printf ("Greska pri otvaranju datoteke studenti.txt");
		return 1;
	}
	int j=0;
	int kap = 1000;
	char znak = fgetc(ulaz);
	if (znak==EOF) {
		printf ("Nema podataka");
		return 2;
	}
	int vel = 0;
	while(kap>vel && znak!=EOF) {
		j = 0;
		while(znak!='_') {
			studenti[vel].ime[j]=znak;
			znak=fgetc(ulaz);
			j++;
		}
		studenti[vel].ime[j]='\0';
		j=0;
		znak=fgetc(ulaz);
		while(znak!='_') {
			studenti[vel].prezime[j]=znak;
			znak=fgetc(ulaz);
			j++;
		}
		studenti[vel].prezime[j]='\0';
		j=0;
		znak=fgetc(ulaz);
		while(znak!='_' && znak != EOF) {
			studenti[vel].broj_indexa[j]=znak;
			znak=fgetc(ulaz);
			j++;
		}
		znak = fgetc(ulaz);
		studenti[vel].broj_indexa[j]='\0';
	}
	fclose (ulaz);
	return vel;
}

int UcitajBinarnu(struct Ocjene* ocjene, int velicina)
{
	FILE* ulaz=fopen("ocjene.dat","rb");

	if (ulaz==NULL) {
		printf ("Greska pri otvaranju datoteke studenti.txt");
		return -1;
	}
	int i=0;
	while (i < velicina) {
		fread((ocjene+i)->index,sizeof(char),20,ulaz);
		fread(&((ocjene+i)->n), sizeof(int),1,ulaz);
		fread((ocjene+i)->ocjene,sizeof(int), (ocjene+i)->n, ulaz);
		i++;
		printf("Index: %s ", (ocjene+i)->index);
		printf("Broj ocjena: %d ", (ocjene+i)->n);
		for (int j = 0; j < (ocjene+i)->n; j++)
		{
			printf("%d",(ocjene+i)->ocjene[j]);
		}
		printf("\n");
	}
	fclose(ulaz);
	return i;
}

int main()
{
	struct Student studenti [1000];
	struct Ocjene ocjene [1000];
	int velicina = UcitajIzTekstualne(studenti);
	int velicina2 = UcitajBinarnu(ocjene, velicina);
	printf("%d", velicina);
	printf("%d", velicina2);
		return 0;
	}
