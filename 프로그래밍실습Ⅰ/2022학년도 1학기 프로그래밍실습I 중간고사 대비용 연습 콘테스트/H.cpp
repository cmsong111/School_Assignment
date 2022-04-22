#include <stdio.h>
#include <math.h>
 
int main(void) {
 
    double a, b, c, D;
    double answer1, answer2;
;   scanf("%lf%lf%lf", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D < 0) {
        printf("imaginary");
    }
    else if (D == 0) {
        answer1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (a*2);
        printf("%.4lf", answer1);
    }
    else if (D > 0) {
        answer1 = (-1 * b + sqrt((b * b - 4 * a * c))) / (2*a);
        answer2 = (-1 * b - sqrt((b * b - 4 * a * c))) / (2*a);
 
        printf("%.4lf\n%.4lf", answer1, answer2);
    }
     
 
    return 0;
}