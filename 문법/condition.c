#include <stdio.h>
int main(void)
{
    int x = -50, y = 30;
    int absoluteX = (x > 0) ? x : -x;
    // x > 0이 참이면 왼쪽이 반환, 거짓이면 오른쪽이 반환
    int max = (x > y) ? x : y;
    int min = (x < y) ? x : y;
    printf("x의 절댓값은 %d입니다.\n",absoluteX);
    printf("x와 y 중에서 최솟값은 %d입니다.\n", min);
    return 0;
}