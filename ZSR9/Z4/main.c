#include<stdio.h>
int b(char* p, char x)
{
	char* z = p;
	while (*z < x && *z!='\0') z++;
	return z-p;
}

int main()
{
	char z[9]="Trebinje";
	int y=1;
	y=b(z,'a');
	printf("%d\n",y);
	return 0;
}