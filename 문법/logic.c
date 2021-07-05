#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    printf("x가 y보다 크고 y는 40 미만입니까? %d\n", (x > y) && (y < 40));//and
    printf("x가 y보다 작거나 혹은 y가 30입니까? %d\n", (x > y) || (y < 40));//or
}