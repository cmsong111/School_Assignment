#include<stdio.h>
#include<math.h>

int ipower(int temp, int count);

int main(void)
{
    for (int i = 0; i < 6 ; i++) {
        printf("%d\n", ipower(3,i));
    }
    
    return 0;
}


int ipower(int temp, int count) {
    return pow(temp, count);
}
