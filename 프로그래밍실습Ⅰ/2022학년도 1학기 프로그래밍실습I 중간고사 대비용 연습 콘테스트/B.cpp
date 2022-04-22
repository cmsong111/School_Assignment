#include <stdio.h>
 
int main(void) {
 
    int count;
    int temp;
    scanf("%d",&count);
     
    for(int i=0;i<count;i++){
        scanf("%d",&temp);
        printf("%c\n",temp);
    }
 
 
    return 0;
 
}