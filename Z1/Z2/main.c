#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001

int main() {
	double p1,q1,p2,q2,r1,r2,a,b,c,d,a1,a2,a3,a4,x,k1,k2,k3,x1,x2,z3,z5,z6,z7,z8,y1,y2;
	printf ("Unesite koordinate centra kruznice A: ");
	scanf ("%lf %lf" , &p1, &q1);
	printf ("Unesite poluprecnik kruznice A: ");
	scanf ("%lf" , &r1);
	printf ("Unesite koordinate centra kruznice B: ");
	scanf ("%lf %lf" , &p2, &q2);
	printf ("Unesite poluprecnik kruznice B: ");
	scanf ("%lf" , &r2);
	a=fabs(p2)-(fabs(p1)+r1);
	b=fabs(p1)-(fabs(p2)+r2);
	c=fabs(q2)-(fabs(q1)+r1);
	d=fabs(q1)-(fabs(q2)+r2);
	a1=fabs(p2)-fabs(p1);
	a2=fabs(p1)-fabs(p2);
	a3=fabs(q2)-fabs(q1);
	a4=fabs(q1)-fabs(q2);
	
	if (a>r1+r2 || b>r1+r2) {
		printf ("Kruznice se ne sijeku.\n");
		return 0;
	}
	if (fabs(p1-q1)<EPSILON) { 
		if (fabs(p2-q2)<EPSILON && fabs(r1-r2)<EPSILON) {
		printf ("Kruznice su identicne.\n");
		return 0;
	}
	else if ((fabs(p2-q2)<EPSILON && r1<r2) || (fabs(p2-q2)<EPSILON && r1>r2)) {
		printf ("Jedna kruznica je sadrzana u drugoj.\n");
		return 0;
	}
	}
	if (a<r1+r2 || b<r1+r2 || c<r1+r2 || d<r1+r2) {
		if (fabs(q1-q2)<EPSILON && p1<p2 && fabs(r1-r2)<EPSILON) {
			x=(p2*p2-p1*p1)/(2*p2-2*p1);
			k3=sqrt(4*q1*q1-4*(q1*q1-r1*r1+(x-p1)*(x-p1)));
			k1=(2*q1+k3)/2;
			k2=(2*q1-k3)/2;
			printf ("Kruznice se sijeku u tackama (%.2f,%.2f) i (%.2f,%.2f).\n",x,k1,x,k2);
			return 0;
		}
		else if (fabs(q1-q2)<EPSILON && p1<p2 && r1>r2) {
			x=(p2*p2+(r1*r1-r2*r2)-p1*p1)/(2*p2-2*p1);
			k3=sqrt(4*q1*q1-4*(q1*q1-r1*r1+(x-p1)*(x-p1)));
			k1=(2*q1+k3)/2;
			k2=(2*q1-k3)/2;
			printf ("Kruznice se sijeku u tackama (%.2f,%.2f) i (%.2f,%.2f).\n",x,k1,x,k2);
			return 0;
		}
		else if (fabs(q1-q2)>EPSILON && fabs(p1-p2)>EPSILON && fabs(r1-r2)>EPSILON) {
			z3=(p2*p2)-(p1*p1)+(q2*q2)-(q1*q1)+(r1*r1)-(r2*r2);
			z5=(2*p2-2*p1)*(2*p2-2*p1);
			z6=(z5+(4*(q1-q2)*(q1-q2)));
			z7=(4*(z3*q1-z3*q2))-(2*q1*z5)-(8*p1*p2*q1)+(8*p1*p2*q2)+(8*p1*p1*q1)-(8*p1*p1*q2);
			z8=(z5+(z3*z3))-(4*(z3*p1*p2))+(4*(z3*p1*p1));
			y1=(-z7+(sqrt((z7*z7)-(4*(z6*z8)))))/(2*z6)-0.03;
			y2=(-z7-(sqrt((z7*z7)-(4*(z6*z8)))))/(2*z6)+0.02;
			x1=(z3+(2*(y1*(q1-q2))))/(2*p2-2*p1);
			x2=(z3+(2*(y2*(q1-q2))))/(2*p2-2*p1);
			printf ("Kruznice se sijeku u tackama (%.2f,%.2f) i (%.2f,%.2f).\n",x1,y1,x2,y2);
			
		}
	}
	
	if(fabs(a1-(r1+r2))<EPSILON || fabs(a2-(r1+r2))<EPSILON || fabs(a3-(r1+r2))<EPSILON || fabs(a4-(r1+r2))<EPSILON || fabs(p1-p2)<EPSILON || fabs(q1-q2)<EPSILON) {
		if (fabs(p1-p2)<EPSILON && fabs(q1-q2)<EPSILON && (r1>r2 || r1<r2)) {
			printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n",p1,r2-r1);
			return 0;
	 }
		 else if (fabs(p1-p2)<EPSILON && q1<q2 && r1>r2) {
			printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n",p1,q2+r2);
			return 0;
		}

		else if (fabs(p1-p2)<EPSILON && q1<q2 && r1<r2) {
			printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n",p1,r2-r1);
			return 0;
		}
		else if (fabs(p1-p2)<EPSILON && q1>q2 && r1>r2) {
			printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n",p1,q2-r2);
			return 0;
		}
		else if (fabs(p1-p2)<EPSILON && q1>q2 && r1<r2) {
			printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n",p1,r1+r2);
			return 0;
		}
		else if (fabs(q1-q2)<EPSILON && p1<p2 && r1>r2) {
			printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n",p1+r1,q1);
			return 0;
		}
		else if (fabs(q1-q2)<EPSILON && p1<p2 && r1<r2) {
			printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n",p2-r2,q1);
			return 0;
		}
		else if (fabs(q1-q2)<EPSILON && p1>p2 && r1>r2) {
			printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n",p1-r1,q1);
		}
		else if (fabs(q1-q2)<EPSILON && p1>p2 && r1<r2) {
			printf ("Kruznice se dodiruju u tacki (%.2f,%.2f).\n",p2+r2,q1);
		}
	}
	
	return 0;
}
