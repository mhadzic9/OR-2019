#include <stdio.h>

int provjeri (int matrica [][100], int V){
	int i,j;
	for(i = 0; i < V; i++){
		for (j = 0; j < 100; j++){
			if (matrica[i][j] <= 0 && matrica[i][j] != -1)
				return 0;
			else if (matrica[i][j] == -1)
				break;
			if (j == 99)
				if (matrica[i][j] != -1)
					return 0;
		}
	}
	return 1;
}

int fibonacci_matrica (int matrica[][100], int V){
	int i, j;
	for (i = 0; i < V; i++){
		for (j = 0; j < 99; j++)
		{
			if (matrica[i][j] == -1)/*kraj reda*/
				break;
			if (matrica[i][j] == 1)/*1 je uvijek dio fibonacijevog niza*/
				continue;
				
			int kec = 1;
			int dvica = 1;
			while (1) /*Provjera da li je broj clan fibonacijevog niza*/
			{
				int zbir = kec + dvica;
				if (zbir > matrica[i][j])
					return 0;
				else if (zbir == matrica[i][j])
					break;
				else{
					kec = dvica;
					dvica = zbir;
				
				}
			}
		}
	}
	return 1;
}


int main() {
	int V;
	for(;;)
	{
		printf("Unesite visinu matrice: ");
		scanf("%d", &V);
		if (V >0)
			break;
	}
	printf ("Unesite matricu:\n");
	int matrica[100][100];
	int i, j;
	for (i = 0; i < V; i++){
		for (j = 0; j < 99; j++){
			scanf("%d", &matrica[i][j]);
			if (matrica[i][j] == -1)
				break;
			if (matrica[i][j] <= 0)
				j--;
		}
	}
	
	if (provjeri(matrica, V) == 1)
		printf ("Matrica je validna.\n");
	else printf ("Matrica nije validna.\n");
	
	if (fibonacci_matrica(matrica, V) == 1)
		printf ("Matrica je Fibonacci matrica.\n");
	else printf ("Matrica nije Fibonacci matrica.\n");
	return 0;
}