#include <stdio.h>

void unesi(char niz[],int velicina)
{
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
char max_slovo (const char *s) {
	int brojaci[100]={0},i,imax='A';
	while (*s!='\0') {
		if (*s>='A' && *s<='Z') {
			brojaci[(int)*s]++;
		}
		if (*s>='a' && *s<='z') {
			brojaci[*s-32]++;
		}
		s++;
	}
	for (i='B';i<'Z';i++) {
		if (brojaci[i]>brojaci[imax]) {
			imax=i;
		}
	}
	return imax;
}

int main() {
	
	return 0;
}
