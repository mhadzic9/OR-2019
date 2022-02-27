#include <stdio.h>

void uporedi (char* s1,char* s2) {
	int jednaki;
	char*p=s2;
	while (*p!='\0') p++;
	p--;
	while (p>s2 && *s1!='\0') {
		jednaki=1;
		if (*p!=*s1) {
			jednaki=0;
			break;
		}
		if (*p>='A' && *p<='Z') *p+=32;
		if (*s1>='A' && *s1<='Z') *p+=32;
		p--;
		s1++;
	
	}
	if (jednaki) {
		printf ("Stringovi su jednaki.\n");
	}
	else {
		printf ("Ne valja.\n");
	}
}

int main() {
	char a[]="AnavoliMilovana";
	char b[]="AnavoliAilovana";
	uporedi(a,b);
	return 0;
}
