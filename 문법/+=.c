#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("현재 x의 값은 %d입니다.\n", x);
    x += 50; //150
    printf("현재 x의 값은 %d입니다.\n", x);
    x -= 50; //100
    printf("현재 x의 값은 %d입니다.\n", x);
    x *= 50; //5000
    printf("현재 x의 값은 %d입니다.\n", x);
    x /= 50; //1000
    printf("현재 x의 값은 %d입니다.\n", x);
    x %= 3; //1
    printf("현재 x의 값은 %d입니다.\n", x);
    return 0;
}