#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* izbaci_iz_stringa (char* string, int index_prvo_slovo, int duzina)/*Funkcija koja izbacuje rijec iz stringa*/
{
	int i;
	for (i = index_prvo_slovo; i < strlen(string)-duzina; i++)
	{
		string[i] = string[i+duzina];
	}
	string[i] = '\0';
	return string;
}

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

int da_li_su_anagrami(char* prva_rijec, char* druga_rijec)/*Funkcija koja provjerava da li su dvije rijeci koje su joj proslijedjene anagrami*/
{
	if (strlen(prva_rijec) != strlen(druga_rijec))
		return 0;
		
	int slova_prve[30];
	int slova_druge[30];
	
	int i = 0;
	for (i = 0; i < 30; i++)
	{
	    slova_prve[i] = 0;
	    slova_druge[i] = 0;
	}
	
	while (*prva_rijec)
	{
		slova_prve[*prva_rijec-'a']++;
		slova_druge[*druga_rijec-'a']++;
		prva_rijec++;
		druga_rijec++;
	}
	

	for (i = 0; i < 30; i++)
	{
		if (slova_prve[i]!= slova_druge[i])
			return 0;
	}
	
	return 1;
}

char* izbaci_anagrame(char* string, char* gramiana)
{
	char* pocetak = string;
	char recenica[100][100];
	char anagrami[100][100];
	
	int i = 0, j=0;
	while (*string)
	{
		if ((*string <'a' || *string > 'z') && (*string < 'A' || *string > 'Z'))/*Sve sto nije slovo, preskacemo*/
        {
            if (j == 0)/*Nema potrebe prelaziti u sljedeci red*/
            {
               string++;
               continue; 
            }
            recenica[i][j] = '\0';
            i++;
            j = 0;
            string++;
            continue;
        }
        recenica[i][j] = *string;/*Upisujemo slovo u matricu*/
        string++;
        j++;
	}
	recenica[i][j] = '\0';
	int broj_rijeci_u_recenici = i+1;
	
	i = 0; j=0;
	while (*gramiana)
	{
		if ((*gramiana <'a' || *gramiana > 'z') && (*gramiana < 'A' || *gramiana > 'Z'))/*Sve sto nije slovo, preskacemo*/
        {
            if (j == 0)/*Nema potrebe prelaziti u sljedeci red*/
            {
               gramiana++;
               continue; 
            }
            anagrami[i][j] = '\0';
            i++;
            j = 0;
            gramiana++;
            continue;
        }
        anagrami[i][j] = *gramiana;/*Upisujemo slovo u matricu*/
        gramiana++;
        j++;
	}
	anagrami[i][j] = '\0';
	int broj_anagrama = i+1;
	
	/*Dio koda koji pretvara svaku rijec iz obje matrice u mala slova*/
	for (i = 0; i < broj_rijeci_u_recenici; i++)
	    U_Mala(recenica[i], recenica[i]);
	for (i = 0; i < broj_anagrama; i++)
	    U_Mala(anagrami[i], anagrami[i]);
	
	
	for (i = 0; i < broj_rijeci_u_recenici; i++)
	{
	    for (j = 0; j < broj_anagrama; j++)
	    {
	        if (da_li_su_anagrami(recenica[i], anagrami[j]))
	        {
                int index = 0;
                int k = 0;
                for (k = 0; k < i; k++)
                {
                    index+=strlen(recenica[k])+1;
                }
                izbaci_iz_stringa(pocetak, index, strlen(recenica[i]));
	            recenica[i][0] = '\0';
	        }
	    }
	}
	
	return pocetak;
}

int main() {
	char tekst[] = "Vatra vata vraTa tava Vrat VARTA";
	printf("'%s'", izbaci_anagrame(tekst, "trava"));
}