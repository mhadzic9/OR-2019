#include <stdio.h>
	void unesi (char niz [],int vel) {
	char znak=getchar();
	if (znak=='\n') znak=getchar();
	int i=0;
	while (i<vel-1 && znak!='\n') {
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
}

	struct Liga {
		int broj_bodova;
		int broj_pobjeda;
		int broj_nerijesenih;
		int broj_poraza;
		int broj_datih;
		int broj_primljenih;
		char ime[21];
	};
	
	int izbaci (struct Liga* niz, int vel) {
		struct Liga* pok=niz;
		struct Liga* pok1=niz;
		int i,j,suma_bodova;
		for (pok=niz;pok<niz+vel;pok++) {
			suma_bodova=0;
			suma_bodova=3*(*pok).broj_pobjeda+(*pok).broj_nerijesenih;
			if (suma_bodova<20) {
				for (pok1=pok+1;pok1<niz+vel;pok1++) {
					*(pok1-1)=*(pok1);
				}
				vel--;
				pok--;
			}
		}
		struct Liga* pok2=niz;
		struct Liga* pok3=niz;
		struct Liga l;
		for (i=0;i<vel;i++) {
			for (j=i+1;j<vel;j++) {
				if ((3*(*pok2).broj_pobjeda+(*pok2).broj_nerijesenih)<(3*(*pok3).broj_pobjeda+(*pok3).broj_nerijesenih)) {
					l=*(pok2+i);
					*(pok2+i)=*(pok3+j);
					*(pok3+j)=l;
				}
			}
		}
		struct Liga* pok4=niz;
		struct Liga max=*pok4;
		for (i=0;i<vel;i++) {
			if (max.broj_datih-max.broj_primljenih<(*(pok4)).broj_datih-(*(pok4)).broj_primljenih) {
				max=*pok4;
			}
		}
		printf ("\nNajvecu gol razliku ima:");
		printf ("\n");
		printf ("%s\n",max.ime);
		return vel;
	}
	int main() {
		int n,N,i;
		struct Liga niz[100];
		printf ("Unesite broj timova: ");
		scanf ("%d" , &n);
		N=n;
		for (i=0;i<N;i++) {
			printf ("Unesite naziv %d. tima: ",i+1);
			unesi (niz[i].ime,20);
			printf ("Broj pobjeda: ");
			scanf ("%d" , &niz[i].broj_pobjeda);
			printf ("Broj nerijesenih: ");
			scanf ("%d" , &niz[i].broj_nerijesenih);
			printf ("Broj poraza: ");
			scanf ("%d" , &niz[i].broj_poraza);
			printf ("Broj datih golova: ");
			scanf ("%d" , &niz[i].broj_datih);
			printf ("Broj primljenih golova: \n");
			scanf ("%d" , &niz[i].broj_primljenih);
			
		}
		struct Liga *r;
		r=&niz[0];
		int v=izbaci(r,N);
		printf ("Tabela nakon izbacivanja:\n");
		for (i=0;i<v;i++) {
			printf ("%d. %s\n",i+1,niz[i].ime);
		}
		
		
	return 0;
}
