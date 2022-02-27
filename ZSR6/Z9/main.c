#include <stdio.h>
#define DIMENZIJA 50
#define EPSILON1 0.000001
#define EPSILON2 -0.000001

int main()
{
    double nizA[DIMENZIJA],nizB[DIMENZIJA],nizC[DIMENZIJA];
    int i,j,m,n,c,brojac=0,k=0,l=0;
    printf ("Unesite elemente 1.niza (-1 kraj): \n");
    for (i=0; i<DIMENZIJA; i++) {
        scanf ("%lf", &nizA[i]);
        if (nizA[i]+1>EPSILON2 && nizA[i]+1<EPSILON1) break;
    }
    m=i;
    printf ("Unesite elemente 2.niza (-1 kraj): \n");
    for (j=0; j<DIMENZIJA; j++) {
        scanf ("%lf", &nizB[j]);
        if (nizB[j]+1>EPSILON2 && nizB[j]+1<EPSILON1) break;
    }
    n=j;
    while (k<m) {
        for (i=1; i<m; i++) {
            if (nizA[k]==nizA[i] && i!=k) {
                for (j=i+1; j<m; j++) {
                    nizA[j-1]=nizA[j];
                }
                m--;
                i--;
            }
        }
        k++;
    }

    while (l<n) {
        for (i=1; i<n; i++) {
            if (nizB[l]==nizB[i] && i!=l) {
                for (j=i+1; j<n; j++) {
                    nizB[j-1]=nizB[j];
                }
                n--;
                i--;
            }
        }
        l++;
    }
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (nizA[i]==nizB[j]) {
                nizC[brojac]=nizA[i];
                brojac++;
            }
        }
    }
    c=brojac;
    if (c==0) {
        printf ("Presjek unesenih nizova je prazan skup!");
        return 0;
    }

    printf ("Presjek unesenih nizova je: ");
    for (i=0; i<c; i++) {
        if (i<c-1) {
            printf ("%g, ",nizC[i]);
        } else if (i==c-1) {
            printf ("%g",nizC[i]);
        }
    }

    return 0;
}
