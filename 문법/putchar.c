#include <stdio.h>  
int main(void)
{
    char ch;
    printf("x가 입력될 때까지 영문자를 계속 입력받습니다 :\n");  
    while ((ch = getchar()) != 'x')
    {
        putchar(ch);
    }  
    printf("x를 입력하셨습니다.\n");  
    return 0;
}