#include <stdio.h>

int main() {
	int a,b,suma1=0,suma2=0,razlika1,razlika2,broj1=0,broj2=0;
	char c1,c2,novired;
	printf ("Unesite pogotke za Sabita: ");
	while (1) {
	    scanf ("%c" , &c1);
	    if (c1=='.') {
	        if (broj1!=9) {
	            scanf ("%c" , &novired);
	            printf ("Neispravni ulazni podaci.\n");
	            printf ("Unesite pogotke za Sabita: ");
	            suma1=0;
	            broj1=0;
	        }
	        else {
	            break;
	        }
	    }
	    else if (c1=='S' || c1=='D' ||c1=='T') {
	        scanf ("%d" , &a);
	        if (c1=='S') {
	            suma1+=a;
	        }
	        else if (c1=='D') {
	            suma1+=2*a;
	        }
	        else if (c1=='T') {
	            suma1+=3*a;
	        }
	        broj1++;
	    }
	    else if (c1=='O') {
	        suma1+=25;
	        broj1++;
	    }
	    else if (c1=='I') {
	        suma1+=50;
	        broj1++;
	    }
	    else if (c1=='X') {
	        suma1+=0;
	        broj1++;
	    }
	    else {
	        while (1) {
	            scanf ("%c" , &c1);
	            if (c1=='.') {
	                break;
	            }
	        }
	            scanf ("%c" , &novired);
	            printf ("Neispravni ulazni podaci.\n");
	            printf ("Unesite pogotke za Sabita: ");
	            broj1=0;
	            suma1=0;
	        
	    }
	}
	scanf ("%c" , &novired);
	printf ("Unesite pogotke za Fadilu: ");
	while (1) {
	    scanf ("%c" , &c2);
	    if (c2=='.') {
	        if (broj2!=9) {
	            scanf ("%c" , &novired);
	            printf ("Neispravni ulazni podaci.\n");
	            printf ("Unesite pogotke za Fadilu: ");
	            suma2=0;
	            broj2=0;
	        }
	        else {
	            break;
	        }
	    }
	    else if (c2=='S' || c2=='D' || c2=='T') {
	        scanf ("%d" , &b);
	        if (c2=='S') {
	            suma2+=b;
	        }
	        else if (c2=='D') {
	            suma2+=2*b;
	        }
	        else if (c2=='T') {
	            suma2+=3*b;
	        }
	        broj2++;
	    }
	    else if (c2=='O') {
	        suma2+=25;
	        broj2++;
	    }
	    else if (c2=='I') {
	        suma2+=50;
	        broj2++;
	    }
	    else if (c2=='X') {
	        suma2+=0;
	        broj2++;
	    }
	    else {
	        while (1) {
	            scanf ("%c" , &c2);
	            if (c2=='.') {
	                break;
	            }
	        }
	        scanf ("%c" , &novired);
	        printf ("Neispravni ulazni podaci.\n");
	        printf ("Unesite pogotke za Fadilu: ");
	        broj2=0;
	        suma2=0;
	    }
	}
    /*for (i=1;i<=9;i++) {
    	scanf (" %c" , &c1);
    	scanf ("%d" , &a);
    	if (c1=='S' && c1=='D' && c1=='T' && c1=='O' && c1=='I' && c1=='X') {
    	    broj1++;
    	}
    	if (c1=='.') {
    	    break;
    	}
    }
    	if (broj1!=9) {
    	    printf ("Neispravni ulazni podaci.\n");
    	    printf ("Unesite pogotke za Sabita: ");
    	    scanf ("%c" , &c3);
    	    for (i=1;i<=9;i++) {
    	        scanf (" %c" , &c2);
    	        scanf ("%d" , &a1);
    	        if (c2=='.') {
    	            break;
    	        }
    	        if (c2=='S') {
    	            suma1+=a1;
    	        }
    	        else if (c2=='D') {
    	            suma1+=2*a1;
    	        }
    	        else if (c2=='T') {
    	            suma1+=3*a1;
    	        }
    	        else if (c2=='O') {
    	            suma1+=25;
    	        }
    	        else if (c2=='I') {
    	            suma1+=50;
    	        }
    	        else if (c2=='X') {
    	            suma1+=0;
    	        }
    	    }
    	}
    printf ("Unesite pogotke za Fadilu: ");
    for (i=0;i<=9;i++) {
        scanf (" %c" , &c4);
        scanf ("%d" , &b);
        if (c4=='S' && c4=='D' && c4=='T' && c4=='O' && c4=='I' && c4=='X') {
            broj2++;
        }
        if (c4=='.') {
            break;
        }
    }
    if (broj2!=9) {
        printf ("Neispravni ulazni podaci.\n");
        printf ("Unesite pogotke za Fadilu: ");
        scanf ("%c" , &c5);
        for (i=1;i<=9;i++) {
            scanf (" %c" , &c6);
            scanf ("%d" , &b1);
            if (c6=='.') {
                break;
            }
        if (c6=='S') {
    		suma2+=b1;
    	}
    	if (c6=='D') {
    		suma2+=2*b1;
    	}
    	if (c6=='T') {
    		suma2+=3*b1;
    	}
    	if (c6=='O') {
    		suma2+=25;
    	}
    	if (c6=='I') {
    		suma2+=50;
    	}
    	if (c6=='X') {
    		suma2+=0;
    	}
    }
    }*/
    
    
    razlika1=301-suma1;
    razlika2=301-suma2;
    if (suma1==suma2 && suma1<301 && suma2<301) {
        printf ("Sabit je ostvario %d poena, Fadila je ostvarila %d poena. Rezultat je nerijesen.\n",suma1,suma2);
        return 0;
    }
    if (suma1>301 && suma2>301) {
        printf ("Oba igraca su premasila potrebni broj poena, rezultat je nerijesen.\n");
        return 0;
    }
    if (suma1>301 && suma2<301) {
        printf ("Sabit je premasio potrebni broj poena, Fadila je ostvarila %d poena. Pobjednik je Fadila, kojoj je ostalo jos %d poena do pobjede.\n",suma2,razlika2);
        return 0;
    }
    if (suma1<301 && suma2>301) {
        printf ("Fadila je premasila potrebni broj poena, Sabit je ostvario %d poena. Pobjednik je Sabit, kojem je ostalo jos %d poena do pobjede.\n",suma1,razlika1);
        return 0;
    }
    
    if (suma1<301 && suma2<301) {
        if (razlika1<razlika2) {
            printf ("Sabit je ostvario %d poena, Fadila je ostvarila %d poena. Pobjednik je Sabit, kojem je ostalo jos %d poena do pobjede.\n",suma1,suma2,razlika1);
            return 0;
        }
        else if (razlika1>razlika2) {
            printf ("Sabit je ostvario %d poena, Fadila je ostvarila %d poena. Pobjednik je Fadila, kojoj je ostalo jos %d poena do pobjede.\n",suma1,suma2,razlika2);
        }
    }
    
    return 0;
}
