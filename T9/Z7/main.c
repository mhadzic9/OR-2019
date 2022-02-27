#include <stdio.h>

void unesi (char niz[],int velicina) {
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

int strcmpi (const char* s1, const char *s2,int velikamala) {
	while (*s1!='\0' && *s2!='\0') {
		if (*s1>*s2) {
			if (*s1==*s2+32 && velikamala==0) {
				s1++;
				s2++;
				continue;
			}
			return 1;
		}
		if (*s1<*s2) {
			if (*s2==*s1+32 && velikamala==0) {
				s1++;
				s2++;
				continue;
			}
			return -1;
	}
	s1++;
	s2++;
}
if (*s1!='\0') return 1;
if (*s2!='\0') return -1;
return 0;
}

int main() {
	printf("Tutorijal 9, Zadatak 7");
	return 0;
}
