#include <stdio.h>

int main(void){

    for (int i = 1; i < 10; i++)
    {
        for (int ii = 1; ii < 10; ii++) {
            printf("%d x %d = %d\n", i, ii, i * ii);
        }
    }

    return 0;
}