#include<stdio.h>
int main(void)
{
	int id, password;

	printf("아이디를 입력하시오\n");
	printf("id:____\b\b\b\b");
	scanf("%d", &id);
	printf("패스워드를 입력하시오\n");
	printf("password:____\b\b\b\b");
	scanf("%d", &password);
	printf("입력된 id는 \"%d\" 이고 패스워드는 \"%d\"입니다.\n", id, password);
	return 0;

}