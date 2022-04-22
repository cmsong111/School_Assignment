#include <stdio.h>
 
int main(void)
{
    int str1, str2, count;
    int str1_what, str2_what;
    // 0이면 숫자 아님, 1이면 대문자 2이면 소문자
    scanf("%d", &count);
    while (count--)
    {
        scanf("%d %d", &str1, &str2);
        //문자 판별하기
        // str1
        if (65 <= str1 && str1 <= 90)
        {
            str1_what = 1;
        }
        else if (97 <= str1 && str1 <= 122)
        {
            str1_what = 2;
        }
        else
        {
            str1_what = 0;
        }
        // str2
        if (65 <= str2 && str2 <= 90)
        {
            str2_what = 1;
        }
        else if (97 <= str2 && str2 <= 122)
        {
            str2_what = 2;
        }
        else
        {
            str2_what = 0;
        }
 
        //출력부
        if (str1_what == 0 || str2_what == 0)
        {
            printf("No Alphabet!\n");
        }
        else if (str1_what == 1 && str2_what == 1)
        {
            printf("%c%c\n", str1 + 32, str2 + 32);
        }
        else if (str1_what == 2 && str2_what == 2)
        {
            printf("%c%c\n", str1 - 32, str2 - 32);
        }
        else{
            printf("%c%c\n", str1, str2);
        }
         
    }
}