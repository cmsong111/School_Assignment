#include<stdio.h>

int main(void)
{
	int middle, final, grade;
	printf("중간 고사 점수를 입력하시오: ");
	scanf_s("%d", &middle);
	printf("기말  고사 점수를 입력하시오: ");
	scanf_s("%d", &final);

	grade = (middle + final) / 2;

	if (grade >= 90)
		printf("당신의 학점은 A학점입니다.");
	else if (grade >= 80)
		printf("당신의 학점은 B학점입니다.");
	else if (grade >= 70)
		printf("당신의 학점은 C학점입니다.");
	else if (grade >= 60)
		printf("당신의 학점은 D학점입니다.");
	else
		printf("당신의 학점은 F학점입니다.");


	return 0;
}	