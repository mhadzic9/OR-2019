#include <stdio.h>

int main() {
int s,t;
char c;
for (s=7; s>1; s--)
	for (t=s; t>6; t--) {
		c = 'C'+s+t;
		printf("%c", c);
	}
return 0;
}