#include <stdio.h>
#include <math.h>

int main()
{
   int niz[100],i,j,tmp,n;
   printf ("Unesite elemente niza (-1 za kraj unosa): ");
   for (i=0;i<100;i++) {
       scanf ("%d" , &niz[i]);
       if (niz[i]==-1) break;
       if (niz[i]<0 || niz[i]>100) {
           printf ("Prekoracen opseg, unesite ponovo!\n");
           i--;
       }
   }
   n=i;
   for (i=0;i<n;i++) {
       for (j=i+1;j<n;j++) {
           if (niz[i]>niz[j]) {
               tmp=niz[i];
               niz[i]=niz[j];
               niz[j]=tmp;
           }
       }
   }
   printf ("Novi niz glasi: ");
   for (i=0;i<n;i++) {
       printf ("%d ",niz[i]);
   }

    return 0;
}

