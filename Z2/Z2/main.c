/*#include <stdio.h>
#define SEG 4

int main()
{
	int a,b,i,j,n,zbir,c,d,razlika,proizvod,kolicnik,e,f,h,k;
	do {
		printf ("Odaberite cjelobrojnu operaciju:\n");
		printf ("[1] Sabiranje\n");
		printf ("[2] Oduzimanje\n");
		printf ("[3] Mnozenje\n");
		printf ("[4] Dijeljenje\n");
		printf ("[5] Izlaz iz programa\n");
		printf (">>");
		scanf ("%d", &n);
	} while (n<1 || n>5);
	if (n==5) {
		return 0;
	}
	while (n!=5) {
		if (n==1) {
			printf ("[1] Sabiranje\n");
			printf ("Unesite operande: ");
			scanf ("%d %d", &a, &b);
			while (a+b<0 || a+b>100) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==3*SEG && (i>=SEG/2 && i<=SEG)) || (j>=3*SEG+1 && j<=4*SEG+1 && i==SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		printf ("Odaberite cjelobrojnu operaciju:\n");
		printf ("[1] Sabiranje\n");
		printf ("[2] Oduzimanje\n");
		printf ("[3] Mnozenje\n");
		printf ("[4] Dijeljenje\n");
		printf ("[5] Izlaz iz programa\n");
		printf (">>");
		scanf ("%d", &n);
				if (n==5) {
					return 0;
				}
				
			}
			zbir=a+b;
			c=zbir/10;
			d=zbir%10;
		}
		 if (n==2) {
			printf ("[2] Oduzimanje\n");
			printf ("Unesite operande: ");
			scanf ("%d %d", &a, &b);
			razlika=a-b;
			c=razlika/10;
			d=razlika%10;
			while (a+b<0 || a+b>100 || a-b<0 || a-b>100 || a*b<0 || a*b>100) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==3*SEG && (i>=SEG/2 && i<=SEG)) || (j>=3*SEG+1 && j<=4*SEG+1 && i==SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
				if (n==5) {
					return 0;
				}
			}
		}
		 if (n==3) {
			printf ("[3] Mnozenje\n");
			printf ("Unesite operande: ");
			scanf ("%d %d", &a, &b);
			proizvod=a*b;
			c=proizvod/10;
			d=proizvod%10;
			while (a+b<0 || a+b>100 || a-b<0 || a-b>100 || a*b<0 || a*b>100) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==3*SEG && (i>=SEG/2 && i<=SEG)) || (j>=3*SEG+1 && j<=4*SEG+1 && i==SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
				if (n==5) {
					return 0;
				}
			}
		}
		 if (n==4) {
			printf ("[4] Dijeljenje\n");
			printf ("Unesite operande: ");
			scanf ("%d %d", &a, &b);
			kolicnik=a/b;
				while (b==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==3*SEG && (i>=SEG/2 && i<=SEG)) || (j>=3*SEG+1 && j<=4*SEG+1 && i==SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
		 }
		 if (n==5) {
		 	return 0;
		 }
		if (n==3) {
			printf ("[3] Mnozenje\n");
			printf ("Unesite operande: ");
			scanf ("%d %d", &a, &b);
			while (a*b<0 || a*b>100) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==3*SEG && (i>=SEG/2 && i<=SEG)) || (j>=3*SEG+1 && j<=4*SEG+1 && i==SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
				if (n==5) {
					return 0;
				}
			}
			proizvod=a*b;
			c=proizvod/10;
			d=proizvod%10;
			if (c==0 && d==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG)) || j==3*SEG || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==0 && d==1) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG)) || j==3*SEG || j==0 || j==SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==0 && d==2) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG || i==SEG/2)) || (j==4*SEG && (i>=0 && i<=SEG/2)) || (j==3*SEG && (i>=SEG/2 && i<=SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==0 && d==3) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==0 && d==4) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG)) || j==0 || j==SEG || j==4*SEG || (j==3*SEG && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && i==SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==0 && d==5) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG || i==SEG/2)) || (j==3*SEG && i>=0 && i<=SEG/2) || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==0 && d==6) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG || i==SEG/2)) || (j==4*SEG && i>=SEG/2 && i<=SEG) || j==3*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==0 && d==7) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG)) || j==0 || j==SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && i==0)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==0 && d==8) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG)) || j==0 || j==SEG || j==3*SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==0 && d==9) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==3*SEG && (i>=0 && i<=SEG/2)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");

				}
			}
			if (c==1 && d==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || j==3*SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==1 && d==1) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || j==3*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==1 && d==2) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==4*SEG && i>=0 && i<=SEG/2) || (j==3*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==1 && d==3) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==1 && d==4) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && i==SEG/2) || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==1 && d==5) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==3*SEG && i>=0 && i<=SEG/2) || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==1 && d==6) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==1 && d==7) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || (j>=3*SEG && j<=4*SEG && i==0) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==1 && d==8) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==1 && d==9) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==2 && d==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==SEG && i>=0 && i<=SEG/2) || (j==0 && i>=SEG/2 && i<=SEG) || j==3*SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==2 && d==1) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (j==SEG || j==3*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==2 && d==2) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==SEG && i>=0 && i<=SEG/2) || (j==0 && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==4*SEG && i>=0 && i<=SEG/2) || (j==3*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==2 && d==3) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==SEG && i>=0 && i<=SEG/2) || (j==0 && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==2 && d==4) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==SEG && i>=0 && i<=SEG/2) || (j==0 && i>=SEG/2 && i<=SEG) || j==4*SEG || (j>=3*SEG && j<=4*SEG && i==SEG/2) || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==2 && d==5) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==SEG && i>=0 && i<=SEG/2) || (j==0 && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==3*SEG && i>=0 && i<=SEG/2) || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==2 && d==6) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==SEG && i>=0 && i<=SEG/2) || (j==0 && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==2 && d==7) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==SEG && i>=0 && i<=SEG/2) || (j==0 && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && i==0) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==2 && d==8) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==SEG && i>=0 && i<=SEG/2) || (j==0 && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==2 && d==9) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==SEG && i>=0 && i<=SEG/2) || (j==0 && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==3 && d==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || j==3*SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==3 && d==1) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || j==3*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==3 && d==2) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==4*SEG && i>=0 && i<=SEG/2) || (j==3*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==3 && d==3) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==3 && d==4) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && i==SEG/2) || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==3 && d==5) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==3*SEG && i>=0 && i<=SEG/2) || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==3 && d==6) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==3 && d==7) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j>=3*SEG && j<=4*SEG && i==0) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==3 && d==8) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==3 && d==9) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==4 && d==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==SEG/2) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || j==3*SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==4 && d==1) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==SEG/2) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || j==3*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==4 && d==2) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==SEG/2) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==4*SEG && i>=0 && i<=SEG/2) || (j==3*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==4 && d==3) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==SEG/2) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==4 && d==4) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==SEG/2) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || j==4*SEG || (j>=3*SEG && j<=4*SEG && i==SEG/2) || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==4 && d==5) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==SEG/2) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==3*SEG && i>=0 && i<=SEG/2) || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==4 && d==6) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==SEG/2) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==4 && d==7) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==SEG/2) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && i==0) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==4 && d==8) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==SEG/2) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==4 && d==9) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==SEG/2) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==5 && d==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==0 && i>=0 && i<=SEG/2) || (j==SEG && i>=SEG/2 && i<=SEG) || j==3*SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==5 && d==1) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==0 && i>=0 && i<=SEG/2) || (j==SEG && i>=SEG/2 && i<=SEG) || j==3*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==5 && d==2) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==0 && i>=0 && i<=SEG/2) || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==4*SEG && i>=0 && i<=SEG/2) || (j==3*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==5 && d==3) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==0 && i>=0 && i<=SEG/2) || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==5 && d==4) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==0 && i>=0 && i<=SEG/2) || (j==SEG && i>=SEG/2 && i<=SEG) || j==4*SEG || (j>=3*SEG && j<=4*SEG && i==SEG/2) || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==5 && d==5) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==0 && i>=0 && i<=SEG/2) || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==3*SEG && i>=0 && i<=SEG/2) || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==5 && d==6) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==0 && i>=0 && i<=SEG/2) || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==5 && d==7) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==0 && i>=0 && i<=SEG/2) || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && i==0) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==5 && d==8) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==0 && i>=0 && i<=SEG/2) || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==5 && d==9) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==0 && i>=0 && i<=SEG/2) || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==6 && d==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==SEG && i>=SEG/2 && i<=SEG) || j==3*SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==6 && d==1) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==SEG && i>=SEG/2 && i<=SEG) || j==3*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==6 && d==2) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==4*SEG && i>=0 && i<=SEG/2) || (j==3*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==6 && d==3) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==6 && d==4) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==SEG && i>=SEG/2 && i<=SEG) || j==4*SEG || (j>=3*SEG && j<=4*SEG && i==SEG/2) || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==6 && d==5) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==3*SEG && i>=0 && i<=SEG/2) || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==6 && d==6) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==6 && d==7) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && i==0) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==6 && d==8) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==6 && d==9) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==SEG && i>=SEG/2 && i<=SEG) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==7 && d==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==0) || j==SEG || j==3*SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==7 && d==1) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==0) || j==SEG || j==3*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==7 && d==2) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==0) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==4*SEG && i>=0 && i<=SEG/2) || (j==3*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==7 && d==3) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==0) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==7 && d==4) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==0) || j==SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && i==SEG/2) || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==7 && d==5) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==0) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==3*SEG && i>=0 && i<=SEG/2) || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==7 && d==6) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==0) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==7 && d==7) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==0) || j==SEG || (j>=3*SEG && j<=4*SEG && i==0) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==7 && d==8) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==0) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==7 && d==9) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && i==0) || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==8 && d==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || j==SEG || j==3*SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==8 && d==1) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || j==SEG || j==3*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==8 && d==2) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==4*SEG && i>=0 && i<=SEG/2) || (j==3*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==8 && d==3) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==8 && d==4) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || j==SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && i==SEG/2) || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==8 && d==5) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==3*SEG && i>=0 && i<=SEG/2) || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==8 && d==6) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==8 && d==7) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && i==0) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==8 && d==8) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==8 && d==9) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==0 || j==SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==9 && d==0) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || j==3*SEG || j==4*SEG || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG))) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==9 && d==1) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || j==3*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==9 && d==2) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==4*SEG && i>=0 && i<=SEG/2) || (j==3*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==9 && d==3) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==9 && d==4) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || j==4*SEG || (j>=3*SEG && j<=4*SEG && i==SEG/2) || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==9 && d==5) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || (j==3*SEG && i>=0 && i<=SEG/2) || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}

					}
					printf ("\n");
				}
			}
			if (c==9 && d==6) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || (j==4*SEG && i>=SEG/2 && i<=SEG)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==9 && d==7) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && i==0) || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==9 && d==8) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==3*SEG || j==4*SEG) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
			if (c==9 && d==9) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if ((j>=0 && j<=SEG && (i==0 || i==SEG/2 || i==SEG)) || j==SEG || (j==0 && i>=0 && i<=SEG/2) || (j>=3*SEG && j<=4*SEG && (i==0 || i==SEG/2 || i==SEG)) || j==4*SEG || (j==3*SEG && i>=0 && i<=SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
			}
		}
		
		printf ("Odaberite cjelobrojnu operaciju:\n");
		printf ("[1] Sabiranje\n");
		printf ("[2] Oduzimanje\n");
		printf ("[3] Mnozenje\n");
		printf ("[4] Dijeljenje\n");
		printf ("[5] Izlaz iz programa\n");
		printf (">>");
		scanf ("%d", &n);
		if (n==5) {
			return 0;
		}
	}

	return 0;
}*/
#include <stdio.h>
#define SEG 4

int main() {
	char mat0[SEG][SEG],mat1[SEG][SEG],mat2[SEG][SEG],mat3[SEG][SEG],mat4[SEG][SEG],mat5[SEG][SEG],mat6[SEG][SEG],mat7[SEG][SEG],mat8[SEG][SEG],mat9[SEG][SEG];
	int n,a,b,i,j,zbir,razlika,proizvod,kolicnik;
	do {
		printf ("\nOdaberite cjelobrojnu operaciju:\n");
		printf ("[1] Sabiranje\n");
		printf ("[2] Oduzimanje\n");
		printf ("[3] Mnozenje\n");
		printf ("[4] Dijeljenje\n");
		printf ("[5] Izlaz iz programa\n");
		printf (">>");
		scanf ("%d", &n);
	} while (n<1 || n>5);
	if (n==5) {
		return 0;
	}
	while (n!=5) {
			if (n==1) {
			printf ("[1] Sabiranje\n");
			printf ("Unesite operande: ");
			scanf ("%d %d", &a, &b);
			while (a+b<0 || a+b>100) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==3*SEG && (i>=SEG/2 && i<=SEG)) || (j>=3*SEG+1 && j<=4*SEG+1 && i==SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		printf ("Odaberite cjelobrojnu operaciju:\n");
		printf ("[1] Sabiranje\n");
		printf ("[2] Oduzimanje\n");
		printf ("[3] Mnozenje\n");
		printf ("[4] Dijeljenje\n");
		printf ("[5] Izlaz iz programa\n");
		printf (">>");
		scanf ("%d", &n);
				if (n==5) {
					return 0;
				}
				
			}
			zbir=a+b;
		}
			if (n==2) {
			printf ("[2] Oduzimanje\n");
			printf ("Unesite operande: ");
			scanf ("%d %d", &a, &b);
			while (a-b<0 || a-b>100) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==3*SEG && (i>=SEG/2 && i<=SEG)) || (j>=3*SEG+1 && j<=4*SEG+1 && i==SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		printf ("Odaberite cjelobrojnu operaciju:\n");
		printf ("[1] Sabiranje\n");
		printf ("[2] Oduzimanje\n");
		printf ("[3] Mnozenje\n");
		printf ("[4] Dijeljenje\n");
		printf ("[5] Izlaz iz programa\n");
		printf (">>");
		scanf ("%d", &n);
				if (n==5) {
					return 0;
				}
				
			}
			razlika=a+b;
		}
		 if (n==3) {
			printf ("[3] Mnozenje\n");
			printf ("Unesite operande: ");
			scanf ("%d %d", &a, &b);
			while (a*b<0 || a*b>100) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==3*SEG && (i>=SEG/2 && i<=SEG)) || (j>=3*SEG+1 && j<=4*SEG+1 && i==SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		printf ("Odaberite cjelobrojnu operaciju:\n");
		printf ("[1] Sabiranje\n");
		printf ("[2] Oduzimanje\n");
		printf ("[3] Mnozenje\n");
		printf ("[4] Dijeljenje\n");
		printf ("[5] Izlaz iz programa\n");
		printf (">>");
		scanf ("%d", &n);
				if (n==5) {
					return 0;
				}
				
			}
			proizvod=a*b;
		}
		 if (n==4) {
			printf ("[4] Dijeljenje\n");
			printf ("Unesite operande: ");
			scanf ("%d %d", &a, &b);
			while (b==0 || a/b<0 || a/b>100) {
				for (i=0; i<SEG+1; i++) {
					for (j=0; j<4*SEG+1; j++) {
						if (((j>=0 && j<=SEG) && (i==0 || i==SEG/2 || i==SEG)) || j==0 || (j==3*SEG && (i>=SEG/2 && i<=SEG)) || (j>=3*SEG+1 && j<=4*SEG+1 && i==SEG/2)) {
							printf ("*");
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		printf ("Odaberite cjelobrojnu operaciju:\n");
		printf ("[1] Sabiranje\n");
		printf ("[2] Oduzimanje\n");
		printf ("[3] Mnozenje\n");
		printf ("[4] Dijeljenje\n");
		printf ("[5] Izlaz iz programa\n");
		printf (">>");
		scanf ("%d", &n);
				if (n==5) {
					return 0;
				}
				
			}
			kolicnik=a/b;
		}
		 if (n==5) {
		 	return 0;
		 }
			
		}
	for (i=0; i<SEG+1; i++) {
		for (j=0; j<SEG+1; j++) {
			if (i==0 || i==SEG || j==0 || j==SEG) {
				mat0[i][j]='*';
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
				for (i=0; i<SEG+1; i++) {
		for (j=0; j<SEG+1; j++) {
			if (j==SEG) {
				mat1[i][j]='*';
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
	for (i=0; i<SEG+1; i++) {
		for (j=0; j<SEG+1; j++) {
			if (i==0 || i==SEG || i==SEG/2 || (i>=0 && j<=SEG/2 && j==SEG) || (i>=SEG/2 && i<=SEG && j==0)) {
				mat2[i][j]='*';
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
	for (i=0; i<SEG+1; i++) {
		for (j=0; j<SEG+1; j++) {
			if (i==0 || i==SEG || i==SEG/2 || j==0) {
				mat3[i][j]='*';
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		for (i=0; i<SEG+1; i++) {
		for (j=0; j<SEG+1; j++) {
			if (i==SEG/2 || j==0 || (j==0 && i>=0 && i<=SEG/2)) {
				mat4[i][j]='*';
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		for (i=0; i<SEG+1; i++) {
		for (j=0; j<SEG+1; j++) {
			if (i==0 || i==SEG || i==SEG/2 || (i>=0 && j<=SEG/2 && j==0) || (i>=SEG/2 && i<=SEG && j==SEG)) {
				mat5[i][j]='*';
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		for (i=0; i<SEG+1; i++) {
		for (j=0; j<SEG+1; j++) {
			if (i==0 || i==SEG || i==SEG/2 || j==0 || (j==SEG && i>=SEG/2 && i<=SEG)) {
				mat6[i][j]='*';
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		for (i=0; i<SEG+1; i++) {
		for (j=0; j<SEG+1; j++) {
			if (i==0 || j==SEG) {
				mat7[i][j]='*';
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		for (i=0; i<SEG+1; i++) {
		for (j=0; j<SEG+1; j++) {
			if (i==0 || i==SEG || i==SEG/2 || j==0 || j==SEG) {
				mat8[i][j]='*';
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		for (i=0; i<SEG+1; i++) {
		for (j=0; j<SEG+1; j++) {
			if (i==0 || i==SEG || i==SEG/2 || j==SEG || (j==0 && i>=0 && j<=SEG/2)) {
				mat9[i][j]='*';
						} else {
							printf (" ");
						}
					}
					printf ("\n");
				}
		
	
}
