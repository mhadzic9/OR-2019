#include <stdio.h>
#include <math.h>

int main() {
	char c,novired;
	double BMI,RFMm,RFMz,visina,obim,masa,a,z;
	int b,broj,kile;
	printf ("Unesite spol (mM/zZ), visinu (u cm), obim struka (u cm), tezinu (u kg): ");
	scanf ("%c %lf %lf %lf" , &c, &visina, &obim, &masa);
	while (c!='m' && c!='M' && c!='z' && c!='Z') {
		printf ("\nGreska u unosu za spol.\n");
		printf ("Unesite spol (mM/zZ), visinu (u cm), obim struka (u cm), tezinu (u kg): ");
		scanf ("%c" , &novired);
		scanf ("%c %lf %lf %lf" , &c, &visina, &obim, &masa);
	}
	while (visina<100 || visina>220 || obim<40 || obim>200 || masa<0 || masa>200) {
		printf ("\nGreska u unosu atributa.\n");
		printf ("Unesite spol (mM/zZ), visinu (u cm), obim struka (u cm), tezinu (u kg): ");
		scanf ("%c" , &novired);
		scanf ("%c %lf %lf %lf" , &c, &visina, &obim, &masa);
	}
	printf ("Odaberite zeljenu opciju za trening:\n");
	printf ("[1] Joga\n");
	printf ("[2] Joga PLUS\n");
	printf ("[3] Cardio\n");
	printf ("[4] Super cardio\n");
	printf ("[5] Total Body\n");
	printf ("[6] Body Builder\n");
	printf (">> "); 
	scanf ("%d" , &broj);
	while (broj<1 || broj>6) {
		printf ("Greska u odabiru opcija.\n");
		printf ("Odaberite zeljenu opciju za trening:\n");
		printf ("[1] Joga\n");
		printf ("[2] Joga PLUS\n");
		printf ("[3] Cardio\n");
		printf ("[4] Super cardio\n");
		printf ("[5] Total Body\n");
		printf ("[6] Body Builder\n");
		printf (">> ");
		scanf ("%d" , &broj);
	}
	printf ("Unesite broj kilograma za koliko zelite smanjiti svoju masu (1-10): ");
	scanf ("%d" , &kile);
	a=visina/100;
	BMI=masa/(a*a);
	z=round(BMI*10)/10;
	RFMm=64-(20*(visina/obim));
	RFMz=76-(20*(visina/obim));
	if ((c=='z' || c=='Z' || c=='m' || c=='M') && z<=18.5 && broj!=1 && broj!=2) {
		printf ("Odabrani program nije preporucen uz predate podatke.\n");
		return 0;
	}
	if ((c=='z' || c=='Z') && BMI>=18.5 && BMI<25) {
		printf ("Vas BMI iznosi: %.2f (normalan).\n",BMI);
		printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
	}
	if ((c=='z' || c=='Z') && BMI>=25 && BMI<30) {
		printf ("Vas BMI iznosi: %.2f (povisen).\n",BMI);
		printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
	}
	if ((c=='z' || c=='Z') && BMI>30) {
		printf ("Vas BMI iznosi: %.2f (visok).\n",BMI);
		printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
	}
	if ((c=='m' || c=='M') && BMI>=18.5 && BMI<25) {
		printf ("Vas BMI iznosi: %.2f (normalan).\n",BMI);
		printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
	}
	if ((c=='m' || c=='M') && BMI>=25 && BMI<30) {
		printf ("Vas BMI iznosi: %.2f (povisen).\n",BMI);
		printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
	}
	if ((c=='m' || c=='M') && BMI>30) {
		printf ("Vas BMI iznosi: %.2f (visok).\n",BMI);
		printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
	}
	if (z<=18.5 && (broj==1 || broj==2) && (c=='m' || c=='M')) {
		if (kile==1) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
			return 0;
		}
		else if (kile==2) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
			return 0;
		}
		else if (kile==3) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
			return 0;
		}
		else if (kile==4) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
		}
		else if (kile==5) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
			return 0;
		}
		else if (kile==6) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
			return 0;
		}
		else if (kile==7) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
			return 0;
		}
		else if (kile==8) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
			return 0;
		}
		else if (kile==9) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
			return 0;
		}
		else if (kile==10) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMm);
			return 0;
		}
	}
	if (z<=18.5 && (c=='z' || c=='Z') && (broj==1 || broj==2)) {
		if (kile==1) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
			return 0;
		}
		else if (kile==2) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
			return 0;
		}
		else if (kile==3) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
			return 0;
		}
		else if (kile==4) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
			return 0;
		}
		else if (kile==5) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
			return 0;
		}
		else if (kile==6) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
			return 0;
		}
		else if (kile==7) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
			return 0;
		}
		else if (kile==8) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
			return 0;
		}
		else if (kile==9) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
			return 0;
		}
		else if (kile==10) {
			printf ("Vas BMI iznosi: %.2f (nizak).\n",BMI);
			printf ("Vas RFM iznosi: %.2f %%.\n",RFMz);
			return 0;
		}
	}
	if (c=='z' || c=='Z' || c=='m' || c=='M') {
		if (broj==1) {
			if (kile==1) {
				b=(int)7000/(200*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==2) {
				b=(int)14000/(200*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==3) {
				b=(int)21000/(200*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==4) {
				b=(int)28000/(200*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==5) {
				b=(int)35000/(200*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==6) {
				b=(int)42000/(200*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==7) {
				b=(int)49000/(200*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==8) {
				b=(int)56000/(200*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==9) {
				b=(int)63000/(200*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==10) {
				b=(int)70000/(200*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			
		}
		if (broj==2) {
			if (kile==1) {
				b=(int)7000/(300*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==2) {
				b=(int)14000/(300*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==3) {
				b=(int)21000/(300*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==4) {
				b=(int)28000/(300*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==5) {
				b=(int)35000/(300*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==6) {
				b=(int)42000/(300*5);
				printf ("Minimalni broj sedmica za treninranje: %d.\n",b);
			}
			else if (kile==7) {
				b=(int)49000/(300*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==8) {
				b=(int)56000/(300*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==9) {
				b=(int)63000/(300*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==10) {
				b=(int)70000/(300*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
		}
		if (broj==3) {
			if (kile==1) {
				b=(int)7000/(400*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==2) {
				b=(int)14000/(400*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==3) {
				b=(int)21000/(400*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==4) {
				b=(int)28000/(400*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==5) {
				b=(int)35000/(400*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==6) {
				b=(int)42000/(400*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==7) {
				b=(int)49000/(400*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==8) {
				b=(int)56000/(400*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==9) {
				b=(int)63000/(400*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==10) {
				b=(int)70000/(400*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
		}
		if (broj==4) {
			if (kile==1) {
				b=(int)7000/(500*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==2) {
				b=(int)14000/(500*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==3) {
				b=(int)21000/(500*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==4) {
				b=(int)28000/(500*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==5) {
				b=(int)35000/(500*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==6) {
				b=(int)42000/(500*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==7) {
				b=(int)49000/(500*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==8) {
				b=(int)56000/(500*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==9) {
				b=(int)63000/(500*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==10) {
				b=(int)70000/(500*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
		}
		if (broj==5) {
			if (kile==1) {
				b=(int)7000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==2) {
				b=(int)14000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==3) {
				b=(int)21000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==4) {
				b=(int)28000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==5) {
				b=(int)35000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==6) {
				b=(int)42000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==7) {
				b=(int)49000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==8) {
				b=(int)56000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==9) {
				b=(int)63000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==10) {
				b=(int)70000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
		}
		if (broj==6) {
			if (kile==1) {
				b=(int)7000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==2) {
				b=(int)14000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==3) {
				b=(int)21000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==4) {
				b=(int)28000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==5) {
				b=(int)35000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==6) {
				b=(int)42000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==7) {
				b=(int)49000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==8) {
				b=(int)56000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==9) {
				b=(int)63000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
			else if (kile==10) {
				b=(int)70000/(600*5);
				printf ("Minimalni broj sedmica za treniranje: %d.\n",b);
			}
		}
		
		
	}
	return 0;
}
