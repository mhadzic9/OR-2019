#include <stdio.h>

char* velika(char *s) {
	char* ret=s;
	while (*s!='\0') {
		if (*s>='a' && *s<='z') {
			*s-=32;
		}
	}
	return ret;
}
	
int main() {
	char s[] = "0vo je primjer.";
	printf("%s", velika(s));
	
	return 0;
}