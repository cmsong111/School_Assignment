#include<stdio.h>
#include<math.h>

double cal(int x1, int x2, int x3, int x4);

int main(void)
{
    int x1, x2, y1, y2;
    printf("첫번째 점의 좌표를 입력하시오(x,y):");
    scanf("%d %d",&x1,&y1);
    printf("두번째 점의 좌표를 입력하시오(x,y):");
    scanf("%d %d",&x2,&y2);
    printf("두점 사이의 거리는 %lf입니다.\n",cal(x1,x2,y1,y2));
    return 0;
}

double cal(int x1, int x2, int y1, int y2) {
    double result = sqrt(pow((x1-x2),2)+pow((y1-y2),2));

    return result;
}
