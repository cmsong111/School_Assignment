#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void game(int a);

int main(void)
{
    int x;
    srand(time(NULL));
    while(1){
        printf("앞(0) 또는 뒤(1)를 선택하시오 (종료는 -1):");
        scanf("%d",&x);
        
        if (x == -1)
            break;
        
        game(x);
    }
    
}

void game(int a){
    int temp;
    temp = rand()%2;
    if (temp == a){
        printf("컴퓨터가 이겼습니다.\n");
    }
    else{
        printf("사용자가 이겼습니다.\n");
    }
    return;
}

