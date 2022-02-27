#include <stdio.h>

void unesi (char niz [],int velicina) {
	char znak=getchar();
	if (znak=='\n') znak=getchar();
	int i=0;
	while (i<velicina-1 && znak!='\n') {
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
}
int duzina (char *s) {
	int brojac=0;
	while (*s!='\0') {
		if (*s=='\0') break;
		s++;
		brojac++;
	}
	return brojac;
}
int prebroji (const char *p,char znak) {
	int brojac=0;
	char tmp;
	if (znak >='A' && znak<='Z') znak+=32;
	while (*p!='\0') {
		tmp=*p;
		if (tmp >='A' && tmp <='Z') tmp+=32;
		if (tmp==znak) brojac++;
		p++;
	}
	return brojac;
}

char* spoji (char *s1,const char *s2) {
	char *tmp=s1;
	while (*s1!='\0') s1++;
	while (*s2!='\0') {
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
	return tmp;
}
const char* podstring (const char *s1,const char *s2) {
	while (*s1!='\0') {
		const char *p1=s1;
		const char *p2=s2;
		while (*p1==*p2) {
			p1++;
			p2++;
		}
		if (*p2=='\0') return s1;
		s1++;
	}
	return NULL;
}
char max_slovo (const char *s) {
	int brojaci[26]={0};
	while (*s!='\0') {
		if (*s>'A' && *s<'Z') brojaci[*s-'A']++;
		if (*s>'a' && *s<'z') brojaci[*s-'a']++;
		s++;
	}
	int i,imax=0;
	for (i=1;i<26;i++) {
		if (brojaci[i]>brojaci[imax]) {
			imax=i;
		}
	}
	return imax+'A';
	
}

int main() {
	char ime[30],prezime[10];
	printf ("Unesite ime: ");
	unesi(ime,20);
/*	printf ("Unesite prezime: ");
	unesi (prezime,10);
	printf ("Vase ime ima %d slova.\n",duzina(ime));
	char slovo;
	printf ("Unesite slovo: ");
	scanf ("%c" , &slovo);
	printf ("Slovo %c se u vasem imenu pojavljuje %d puta.\n",slovo,prebroji(ime,slovo));
	printf ("%s.",spoji(ime,prezime));
	char s1[]="Ovo je neki primjer";
	char s2[]="primjer";
	printf ("%s",podstring(s1,s2));*/
	printf ("U imenu se najvise pojavljuje slovo %c",max_slovo(ime));
	
	return 0;
}
