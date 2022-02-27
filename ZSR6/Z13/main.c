/*#include <stdio.h>
#define VELICINA 50

int main() {
	int mat[VELICINA][VELICINA],i,j,n;
	printf ("Unesite dimenziju matrice: \n");
	scanf ("%d" , &n);
	for (i=0;i<n;i++) {
	    printf ("Unesite elemente %d. reda: \n",i+1);
	    for (j=0;j<n;j++) {
	        scanf ("%d" , &mat[i][j]);
	    }
	}
	if (n%2!=0) {
	    for (i=0;i<n;i++) {
	        for (j=0;j<n-1;j++) {
	            if (i==j) {
	                mat[i][j]=mat[i][j+1];
	            }
	        }
	    }
	    n--;
	}
	printf ("Nakon izbacivanja glavne dijagonale matrica glasi: \n");
	for (i=0;i<n;i++) {
	    for (j=0;j<n;j++) {
	        printf ("%5d",mat[i][j]);
	    }
	    printf ("\n");
	}
	
	
	return 0;
}*/
#include <stdio.h>
 
int main()
{
    int n,i,j,nove_kol, el_sporedne_index;
    printf("Unesite dimenziju matrice: \n");
    scanf("%d",&n);
    int mat[50][50];
    if(n<1 || n>50) return 0;
 
    for(i=0; i<n; i++) {
        printf("Unesite elemente %d. reda: \n",i+1);
        for(j=0; j<n; j++) {
            scanf("%d",&mat[i][j]);
        }
 
    }
 
    for(i=0; i<n; i++) 
    {
        for(j=i; j<n-1; j++) 
        {
 
            mat[i][j]=mat[i][j+1];
 
        }
 
    }
 
 
    nove_kol=n-1;
 
    if(n%2==0) {
        for(i=0; i<n; i++)
        {
            el_sporedne_index = nove_kol-1-i; // odakle krece briwasnje, odnosno na mjestu "granica" je element sporedne dijagonale originalne matrice
            if(i>=n/2) el_sporedne_index++; //od polovine matrice gledajuci po redovima, se granica pomjeri uvijek za jedno mjesto u desno u odnosu na generalno sto bi bila sporedna dijagonala
            for(j=el_sporedne_index; j<nove_kol-1; j++)
            {
                mat[i][j]=mat[i][j+1];
 
            }
 
        }
        nove_kol--;
    }
    printf("Matrica nakon izbacivanja dijagonale:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<nove_kol; j++) {
            printf("%-5d",mat[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}