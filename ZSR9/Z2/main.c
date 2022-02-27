#include <stdio.h>

char* posljednja_rijec (char *s)
{
	char *p=s;
	char *k=s;
	while (*p!='\0') {
		if (*p!=' ') break;
		p++;
	}
	if (*p=='\0') return "";
	while (*s!='\0') s++;
	s--;
	if (*s==' ') {
		while (*s==' ') s--;
		s++;
		*s='\0';
		while (*s!=' ') s--;
		s++;
		return s;
	} else {
		while (*s!=*k && *s!=' ') s--;
	}
	return s;
}

int main()
{


	return 0;
}
