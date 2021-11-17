#include <stdio.h>

int main(void)
{
	//변수 삽입
	int p_hotel, p_airplane, p_day, p_pocket;
	int sum;
	//변수 입력
	printf("여행일자 호텔가격 비행기가격 하루용돈 금액을 차례대로 적어주세요\n");
	printf("Ex) 3 50000 100000 50000\n");
	scanf("%d%d%d%d", &p_day, &p_hotel, &p_airplane, &p_pocket);
	//입력 확인
	printf("여행일자는 %d\n", p_day);
	printf("호텔 가격은%d\n", p_hotel);
	printf("비행기 비용은%d\n", p_airplane);
	printf("하루 용돈은 %d\n", p_pocket);
	//가격확인
	sum = p_day * (p_hotel + p_pocket) + p_airplane;
	//총 여행경비 돈 확인
	printf("총 여행경비는 %d입니다", sum);


	return 0;
}