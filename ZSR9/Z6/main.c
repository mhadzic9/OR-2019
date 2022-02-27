#include <stdio.h>

int main()
{
	int i;
	for (i=60;i>=5;i--) {
		if (i==48 || i==34) continue;
		printf ("%d\n",i);
	}
	
	return 0;
}