#include <stdio.h>
#define GODINA 2015

int main() {
	int godina_rodjenja,r;
	char c,novired;
	printf ("Unesite godinu rodjenja osobe: ");
	scanf ("%d" , &godina_rodjenja);
	if (godina_rodjenja>GODINA) {
		printf ("Neispravna godina rodjenja!\n");
		return 0;
	}
	printf ("Unesite spol osobe (m/M ili z/Z): ");
	scanf ("%c" , &novired);
	scanf ("%c" , &c);
	if (c!='m' && c!='M' && c!='z' && c!='Z') {
		printf ("Pogresan unos spola osobe!\n");
		return 0;
	}
	
	r=GODINA-godina_rodjenja;
	if (r>=0 && r<6) {
		if ((c=='m' || c=='M') && (r%10==2 || r%10==3 || r%10==4)) {
		printf ("Osoba ima %d godine, klasificirana je u kategoriju: 'prije skole', musko je.",r );
	}
	else if ((c=='m' || c=='M') && (r%10==0 || r%10==5)){
		printf ("Osoba ima %d godina, klasificirana je u kategoriju: 'prije skole', musko je.",r );
	}
	else if ((c=='m' || c=='M') && (r%10==1)) {
		printf ("Osoba ima %d godinu, klasificirana je u kategoriju: 'prije skole', musko je.",r );
	}
	else if ((c=='z' || c=='Z') && (r%10==2 || r%10==3 || r%10==4)) {
		printf ("Osoba ima %d godine, klasificirana je u kategoriju: 'prije skole', zensko je.",r );
	}
	else if ((c=='z' || c=='Z') && (r%10==0 || r%10==5)){
		printf ("Osoba ima %d godina, klasificirana je u kategoriju: 'prije skole', zensko je.",r );
	}
	else if ((c=='z' || c=='Z') && (r%10==1)) {
		printf ("Osoba ima %d godinu, klasificirana je u kategoriju: 'prije skole', zensko je.",r );
	}
	}
	if (r>=6 && r<14) {
		if (c=='m' || c=='M') {
		printf ("Osoba ima %d godina, klasificirana je u kategoriju: 'osnovna skola', musko je.",r );
	}
	else if (c=='z' || c=='Z') {
		printf ("Osoba ima %d godina, klasificirana je u kategoriju: 'osnovna skola', zensko je.",r );
	}
	}
	if (r>=14 && r<18) {
		if (c=='m' || c=='M') {
		printf ("Osoba ima %d godina, klasificirana je u kategoriju: 'srednja skola', musko je.",r );
	}
	else if (c=='z' || c=='Z') {
		printf ("Osoba ima %d godina, klasificirana je u kategoriju: 'srednja skola', zensko je.",r );
	}
	}
	if (r>=18 && r<=23) {
		if ((c=='m' || c=='M') && (r%10==8 || r%10==9 || r%10==0)) {
		printf ("Osoba ima %d godina, klasificirana je u kategoriju: 'fakultet', musko je.",r );
	}
	else if ((c=='m' || c=='M') && (r%10==2 || r%10==3)) {
		printf ("Osoba ima %d godine, klasificirana je u kategoriju: 'fakultet', musko je.",r );
	}
	else if ((c=='m' || c=='M') && (r%10==1)) {
		printf ("Osoba ima %d godinu, klasificirana je u kategoriju: 'fakultet', musko je.",r );
	}
	else if ((c=='z' || c=='Z') && (r%10==8 || r%10==9 || r%10==0)) {
		printf ("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'fakultet', zensko je.",r );
	}
	else if ((c=='z' || c=='Z') && (r%10==2 || r%10==3)) {
		printf ("Osoba ima %d godine, klasificirana je u kategoriju: 'fakultet', zensko je.",r );
	}
	else if ((c=='z' || c=='Z') && (r%10==1)) {
		printf ("Osoba ima %d godinu, klasificirana je u kategoriju: 'fakultet', zensko je.",r );
	}
	}
	if (r>23) {
		if ((c=='m' || c=='M') && (r%10==5 || r%10==6 || r%10==7 || r%10==8 || r%10==9 || r%10==0)) {
		printf ("Osoba ima %d godina, klasificirana je u kategoriju: 'ostalo', musko je.",r );
	}
	else if ((c=='m' || c=='M') && (r%10==2 || r%10==3 || r%10==4)){
		printf ("Osoba ima %d godine, klasificirana je u kategoriju: 'ostalo', musko je.",r );
	}
	else if ((c=='m' || c=='M') && (r%10==1)) {
		printf ("Osoba ima %d godinu, klasificirana je u kategoriju: 'ostalo', musko je.",r );
	}
	else if ((c=='z' || c=='Z') && (r%10==5 || r%10==6 || r%10==7 || r%10==8 || r%10==9 || r%10==0)) {
		printf ("Osoba ima %d godina, klasificirana je u kategoriju: 'ostalo', zensko je.",r );
	}
	else if ((c=='z' || c=='Z') && (r%10==2 || r%10==3 || r%10==4)){
		printf ("Osoba ima %d godine, klasificirana je u kategoriju: 'ostalo', zensko je.",r );
	}
	else if ((c=='z' || c=='Z') && (r%10==1)) {
		printf ("Osoba ima %d godinu, klasificirana je u kategoriju: 'ostalo', zensko je.",r );
	}
	}
	
	
	return 0;
}