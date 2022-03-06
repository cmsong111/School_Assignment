#include<stdio.h>
#include<math.h>

void quad_eqn(int a, int b,int c);

int main(void)
{
    float a,b,c;
    
    printf("2차 방정식의 계수를 입력하시오: \na: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    
    quad_eqn(a,b,c);
    return 0;
}


void quad_eqn(int a, int b, int c){
    float x1, x2;
    
    x1 = (-b + sqrt(b*b - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt(b*b - (4 * a * c))) / (2 * a);

    if (a == 0)
        printf("%f", (-c/b));
    else if (0 > (b * b) - (4 * a * c))
        printf("위의 이차 방적식의 해는 없습니다.");
    else
        printf("%f\n%f\n",x1,x2);
}


