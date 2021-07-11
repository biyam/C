#include <stdio.h>
int main(void)
{
    int str_len = 0;
    char str[] = "Hello World";
    while (str[str_len] != '\0') // 널 문자가 나올 때까지 길이를 증가함
    {
        str_len++;
    }

printf("이 문자열의 길이는 %d입니다.\n", str_len);
}