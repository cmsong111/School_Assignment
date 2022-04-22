#include <stdio.h>
 
int main(void)
{
 
    double speed, time, distance;
 
    scanf("%lf %lf", &speed, &time);
 
    printf("%.3lf %.3lf %.2lf",speed, time, speed*time);
 
    return 0;
}