#include <stdio.h>
int main(void)
{
    char str[100];
    fputs("문자열을 입력해 주세요 : ", stdout);
    fgets(str, sizeof(str), stdin);
    puts("입력하신 문자열: ");
    puts(str);
    fputs("입력하신 문자열: ", stdout);
    fputs(str, stdout);
    return 0;
}