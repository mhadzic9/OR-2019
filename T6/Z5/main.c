#include <stdio.h>
#define DIMENZIJA 10

int main() {
    int mat[DIMENZIJA][DIMENZIJA],i,j,min;
    for (i=0;i<DIMENZIJA;i++) {
        for (j=0;j<DIMENZIJA;j++) {
            scanf ("%d" , &mat[i][j]);
        }
    }
    min=mat[0][0];
    for (i=1;i<DIMENZIJA;i++) {
        for (j=1;j<DIMENZIJA;j++) {
            if (i==j) {
                if (mat[i][j]<min) {
                    min=mat[i][j];
                }
            }
            
        }
    }
    printf ("%d" , min);
    
    return 0;
}