#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001
#define DELTA 0.01

double f(double x){
    return sin(x);
}

double g(double x) {
    return cos(x);
}

double presjek(double A, double B, int* status) {
    double polovina = (A+B)/2.;
    double razlika1 = f(A)-g(A);
    double razlika2 = f(polovina)-g(polovina);
    double razlika3 = f(B)-g(B);
    
    if ( fabs(razlika1) < EPSILON && fabs(razlika2)<EPSILON && fabs(razlika3)<EPSILON){
        *status = 2;
        return 0;
    }
    else if (fabs(razlika1) <= EPSILON){
        *status = 0;
        return A;
    }
    else if (fabs(razlika2) <= EPSILON){
        *status = 0;
        return polovina;
    }
    else if (fabs(razlika3) <= EPSILON){
        *status = 0;
        return B;
    }
    
    if ((razlika1 < 0 && razlika2 >= 0) || (razlika2<0 && razlika1 >=0))
        return presjek(A, polovina, status);
    else if ((razlika3 < 0 && razlika2 >= 0) || (razlika2<0 && razlika3 >= 0))
        return presjek(B, polovina, status);
    //PROMJENEEEEE
    if (fabs(A-B) > DELTA){
        int stat;
        int staty;
        presjek(A, polovina, &stat);
        presjek(polovina, B, &staty);
        if (stat != 1)
            return presjek(A, polovina, status);
        else if (staty != 1)
            return presjek(polovina, B, status);
        else{
            *status = 1;
            return 0;
        }
    }
    else{
        *status = 1;
    }
    return 0;
}


int main() {
    int status=-1;
	double rez = presjek(0, 1, &status);
	printf("%.3f %d\n", rez, status);
	rez = presjek(1, 2, &status);
	printf("%.3f %d\n", rez, status);
}
