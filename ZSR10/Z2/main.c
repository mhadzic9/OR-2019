#include <stdio.h>

struct Datum {
    int dan,mjesec,godina;
};

struct Datum unesi_datum (void) {
    struct Datum d;
    printf ("Unesite datum: ");
    scanf ("%d %d %d",&d.dan, &d.mjesec, &d.godina);
    return d;
}

void ispisi_datum (struct Datum d) {
    printf ("%d. %d. %d.",d.dan,d.mjesec,d.godina);
}

int prestupna (int godina) {
    if ((godina%4==0 && godina%100!=0) || godina%400==0) {
        return 1;
    }
    return 0;
}

int broj_dana (struct Datum d) {
    int ukupno=0,i;
    for (i=1;i<d.godina;i++) {
        ukupno+=365+prestupna(i);
    }
    int bdum[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (prestupna(d.godina)) {
        bdum[2]++;
    }
    for (i=1;i<d.mjesec;i++) {
        ukupno+=bdum[i];
    }
    ukupno+=d.dan;
    return ukupno;
}
int main() {
    struct Datum d1=unesi_datum();
    struct Datum d2=unesi_datum();
    int razlika=broj_dana(d2)-broj_dana(d1);
    printf ("Izmedju unesenih datuma proteklo je %d dana.\n",razlika);
    
    return 0;
}