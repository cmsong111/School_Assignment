#include <stdio.h>
 
int main(void){
    int x[5];
    double result;
 
    scanf("%d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4]);
    result = (double)(x[0]+x[1]+x[2]+x[3]+x[4])/5;
 
    printf("%0.3f\n",result);
 
    return 0;
 
}