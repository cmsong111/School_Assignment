#include <stdio.h>

void exchange(int *ptr1,int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(void){
    int a = 100;
    int b = 200;

    printf("변경 전: a = %d , b = %d\n",a,b);
    exchange(&a,&b);

    printf("변경 후: a = %d , b = %d",a,b);
    return 0;
}
