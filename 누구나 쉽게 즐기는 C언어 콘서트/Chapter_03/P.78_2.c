#include <stdio.h>

int main(void){
    float light_speed = 300000;
    printf("빛의 속도는 %fkm/s\n",light_speed);
    float distance = 149600000;
    printf("태양과 지구와의 거리 %fkm\n",distance);
    printf("도달시간은: %f초",distance/light_speed);

    return 0;
}