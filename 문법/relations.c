#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    printf("x가 y와 같은가? %d\n", x==y);
    // 참이면 1, 거짓이면 0
    printf("x가 y와 다른가? %d\n", x!=y);
    printf("x가 y와 다른가? %d\n", x > y);
    printf("x가 y와 다른가? %d\n", x < y);
    printf("x에 y를 넣으면 x는? %d\n", x = y); //30
    return 0;

}