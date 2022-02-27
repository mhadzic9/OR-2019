#include <stdio.h>
#include <math.h>

int prebroj(char* string)/*Broji koliko string ima karaktera*/
{
	int broj_karaktera = 0;
	while (*string != '\0')
	{
		broj_karaktera++;
		string++;
	}
	return broj_karaktera;
}

double daj_broj(char* izraz)/*Funkcija koja uzima string a vraca prvi broj u stringu*/
{
	double broj1=0;
	int bio_zarez=0;
	int na_minus=1;
	while ((*izraz <='9' && *izraz >= '0') || *izraz =='.')
	{
		if (*izraz == '.')
		{
			bio_zarez = 1;
			izraz++;
			continue;
		}
		
		int cifra = *izraz-'0';
		
		if (bio_zarez == 1)
		{
			broj1 += cifra*pow(10, -na_minus);
			na_minus++;
		}
		else
		{
			broj1*=10;
			broj1+=cifra;
		}
		izraz++;
	}
	return broj1;
}

int da_li_je_validan(char* broj)/*Provjerava da li je broj realan, te vraca koliko prostora zauzima*/
{
	if(*broj =='-')
		broj++;
	int brojac = 0;
	int bio_zarez = 0;
	int bila_cifra_poslije_zareza = 0;
	
	while ((*broj <='9' && *broj >= '0') || *broj =='.')
	{
		if (*broj == '.')
			bio_zarez = 1;
		if (bio_zarez==1 && (*broj <='9' && *broj >= '0') && bila_cifra_poslije_zareza==0)
			bila_cifra_poslije_zareza = 1;
		brojac++;
		broj++;
	}
	
	if (bio_zarez && bila_cifra_poslije_zareza)
		return brojac;
	else if (!bio_zarez)
		return brojac;
	
	
	return 0;
	
}

char* nadji_zbir(char* string)
{
	int broj_karaktera = prebroj(string);/*Prebrojava broj karaktera u stringu*/
	int prvi = 0, drugi = 0, treci = 0;/*Da li je nadjen prvi, drugi, treci broj*/
	double broj1, broj2, zbir; /*PRVI DRUGI I TRECI BROJ*/
	char* povratni_pokazivac;/*Ono sto treba da vrati*/
	
	int i;
	for (i = 0; i < broj_karaktera; i++)
	{
		if (*(string+i) >= '0' && *(string+i)<='9')/*Ako naidje na broj cifru*/
		{
			int duzina = da_li_je_validan(string+i);/*Provjerava da li je to validan broj, te koliko je dug*/
			
			if (duzina)
			{
				if (*(string+i-1) =='-')/*Ako je broj negativan, stavi pokazivac na -*/
				{
					if (prvi == 0)
					{
						povratni_pokazivac = (string+i-1);
						broj1 = -daj_broj(string+i);
						prvi = 1;
					}
					
					else if (drugi == 0)
					{
						broj2 = -daj_broj(string+i);
						drugi = 1;
					}
						
					else if (treci == 0)
					{
						zbir = -daj_broj(string+i);
						treci = 1;
						break;
					}
						
				}
				else
				{
						if (prvi == 0)
					{
						povratni_pokazivac = (string+i);
						broj1 = daj_broj(string+i);
						prvi = 1;
					}
					
					else if (drugi == 0)
					{
						broj2 = daj_broj(string+i);
						drugi = 1;
					}
						
					else if (treci == 0)
					{
						zbir = daj_broj(string+i);
						treci = 1;
						break;
					}
					
				}
				i+= duzina;
			}
		}
	}
	
	if (treci == 1)/*Da li su nadjena tri realna broja*/
	{
		if (fabs(broj1+broj2-zbir) <= 0.00001)
		return povratni_pokazivac;
		else return nadji_zbir(povratni_pokazivac+da_li_je_validan(povratni_pokazivac)+1);
	}
	return NULL;
	
}

void razlike (char* string)
{
	char* izraz = nadji_zbir(string);
	if (!izraz)
	{ 
		return;
	}
	char*sljedeci;
	if (string == izraz || *(izraz-1)!='-')
		sljedeci = izraz+da_li_je_validan(izraz);
	else sljedeci = izraz+da_li_je_validan(izraz)+1;
		
	double broj1=0;
	double broj2=0;
	int bio_minus = 0;
	int bio_zarez = 0;
	int na_minus = 1;
	

	if (*izraz == '-')
	{
		bio_minus = 1;
		izraz++;
	}
	while ((*izraz <='9' && *izraz >= '0') || *izraz =='.')
	{
		if (*izraz == '.')
		{
			bio_zarez = 1;
			izraz++;
			continue;
		}
		
		int cifra = *izraz-'0';
		
		if (bio_zarez == 1)
		{
			broj1 += cifra*pow(10, -na_minus);
			na_minus++;
		}
		else
		{
			broj1*=10;
			broj1+=cifra;
		}
		izraz++;
	}
	if (bio_minus)
		broj1*=-1;
	
	
	
	while(*izraz >'9' || *izraz<'0')
		izraz++;
		

	bio_minus = 0;
	bio_zarez = 0;
	na_minus = 1;

	if (*(izraz-1) =='-')
		bio_minus = 1;
		
	while ((*izraz <='9' && *izraz >= '0') || *izraz =='.')
	{
		
		if (*izraz == '.')
		{
			bio_zarez = 1;
			izraz++;
			continue;
		}
		
		int cifra = *izraz-'0';
		
		if (bio_zarez == 1)
		{
			broj2 += cifra*pow(10, -na_minus);
			na_minus++;
		}
		else
		{
			broj2*=10;
			broj2+=cifra;
		}
		izraz++;
	}
	if (bio_minus)
	{
		broj2*=-1;
	}
	

	printf ("%g - %g = %g\n", broj1, broj2, broj1-broj2);
	razlike(sljedeci);
}

int main()
{
	razlike("0.0001 -0.0001 0 42.9989 42.9989 85.9978");
}
