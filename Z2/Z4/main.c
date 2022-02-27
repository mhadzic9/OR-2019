#include <stdio.h>
#include <math.h>
#define VELICINA 25
#define RACUN 100
#define EPSILON 0.0001

int main()
{
	double niz[VELICINA],matrica[VELICINA][VELICINA],cijena,racun,min;
	int i,j,k,l,komb1,komb2,brojac,prvi,min_i,min_j,unos,niz_racun[RACUN];
	int prekid=0,ponuda=0;
	for (i=0; i<VELICINA; i++) {
		scanf ("%lf", &niz[i]);
		if (niz[i]<0) {
			printf ("Neispravan unos.\n");
			i--;
		}
	}
	for(i=0; i<VELICINA; i++) {
		for(j=0; j<VELICINA; j++) {
			if(i==j) matrica[i][j]=niz[i];
			else matrica[i][j]=0;
		}
	}
	while(1) {
		printf("Unesite kombinaciju: ");
		scanf("%d",&komb1);
		if(komb1==0) break;
		scanf("%d",&komb2);
		scanf("%lf",&cijena);
		if((niz[komb1-1]+niz[komb2-1])<=cijena || niz[komb2-1]<EPSILON || niz[komb1-1]<EPSILON) printf("Neispravna kombinacija!\n");
		else {
			if(matrica[komb1-1][komb2-1]>EPSILON) printf("Neispravna kombinacija!\n");
			else {
				matrica[komb1-1][komb2-1]=cijena;
				matrica[komb2-1][komb1-1]=cijena;
			}
		}
	}

	while(1) {
		brojac=0;
		printf("Unesite racun: ");
		while(1) {
			scanf("%d", &unos);
			if(brojac==0 && unos==0) {
				prekid=1;
				break;
			}
			if(unos==0) {
				niz_racun[brojac]=unos;
				break;
			}
			niz_racun[brojac]=unos;
			brojac++;
		}
		if(prekid==1) break;
		racun=0;
		ponuda=0;
		for(i=0; i<brojac; i++) {
			prvi=0;
			if(niz[niz_racun[i]-1]<EPSILON) {
				printf("Jelo nije u ponudi\n");
				ponuda=1;
			} else {
				for(j=i+1; j<brojac; j++) {
					if(niz_racun[i]!=0 && niz_racun[j]!=0) {
						k=niz_racun[i];
						l=niz_racun[j];
						if(k!=l) {
							if(prvi==0 && matrica[k-1][l-1]>EPSILON) {
								prvi=1;
								min=matrica[k-1][l-1];
								min_i=i;
								min_j=j;
							}
							if(matrica[k-1][l-1]>EPSILON && matrica[k-1][l-1]<min) {
								min=matrica[k-1][l-1];
								min_i=i;
								min_j=j;
							}
							if(prvi==1) {
								racun=racun+min;
								niz_racun[min_i]=0;
								niz_racun[min_j]=0;
							}
						}
					}
				}
			}
			if(i==brojac-1 && ponuda==0) {
				for(j=0; j<brojac; j++) {
					l=niz_racun[j];
					if(l!=0) racun=racun+niz[l-1];
				}
				printf("Ukupan iznos racuna je: %.2f KM\n",racun);
			}
		}
	}

	return 0;
}
