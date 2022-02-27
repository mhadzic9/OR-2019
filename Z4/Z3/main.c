#include <stdio.h>
#include <string.h>
#include <ctype.h>

void U_Mala(char* string, char* odrediste)/*Funkcija koja prepisuje string iz prvog u drugi parametar, ali samo kao mala slova*/
{
    int i = 0;
    for (i = 0; ;i++)
    {
        if (string[i] == '\0')
        {
            odrediste[i] = '\0';
            break;
        }
        
        odrediste[i] = tolower(*(string+i));
    }
}

void max_slog(char* recenica, char *slog)
{
    char slogovi[100][100];/*U ovoj matrici cuvamo slogove*/
    int i = 0, j = 0;
    while (*recenica != '\0')
    {
        if ((*recenica <'a' || *recenica > 'z') && (*recenica < 'A' || *recenica > 'Z'))/*Sve sto nije slovo, preskacemo*/
        {
            if (j == 0)/*Nema potrebe prelaziti u sljedeci red*/
            {
               recenica++;
               continue; 
            }
            slogovi[i][j] = '\0';
            i++;
            j = 0;
            recenica++;
            continue;
        }
        slogovi[i][j] = *recenica;/*Upisujemo slovo u matricu*/
        if (slogovi[i][j] == 'a' || slogovi [i][j] == 'e' || slogovi[i][j] == 'i' || slogovi [i][j] == 'o' || slogovi [i][j] == 'u')/*Mala slova*/
        {
            slogovi[i][j+1] = '\0';
            j = 0;
            recenica++;
            i++;
            continue;
        }
        if (slogovi[i][j] == 'A' || slogovi [i][j] == 'E' || slogovi[i][j] == 'I' || slogovi [i][j] == 'O' || slogovi [i][j] == 'U')/*Velika slova*/
        {
            slogovi[i][j+1] = '\0';
            j = 0;
            recenica++;
            i++;
            continue;
        }
        recenica++;
        j++;
    }
    
    int najduzi_slog = 0;
    int k;
    
    for (j = 1; j < i; j++)/*Poredimo koliko se koji slog puta pojavljuje u recenici*/
    {
        int brojac1 = 0;
        int brojac2 = 0;
        char velika1[100];
        char velika2[100];
        char velika3[100];
            
        U_Mala(slogovi[najduzi_slog], velika1);
        U_Mala(slogovi[j], velika2);
            
        for (k = 0; k < i; k++)
        {
            U_Mala(slogovi[k], velika3);
            if (strcmp(velika1, velika3) == 0)
                brojac1++;
            if (strcmp(velika2, velika3) == 0)
                brojac2++;
        }
        if (brojac2 > brojac1)
        {
            najduzi_slog = j;
        }
        
        else if(brojac2 == brojac1)/*Ukoliko se dva sloga pojavljuju isto puta, uzimamo onaj s duzom vrijednosti*/
        {
            if (strlen(slogovi[j]) > strlen(slogovi[najduzi_slog]))
            {
                najduzi_slog = j;
            }
        }
    }

    U_Mala(slogovi[najduzi_slog], slogovi[najduzi_slog]);/*Autotest broj1 trazi da vratim malo slovo, iako se slog prvenstveno pojavljuje u velikom*/
    strcpy(slog,slogovi[najduzi_slog]);/*Kopiramo slog koji je trazen u drugi parametar koji je primila funkcija*/
}


int main()
{
	char slog[100];
    max_slog("AUTO-stoper je podigao prst u zrak.", slog);
    printf("'%s'", slog);
	return 0;
}