#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    printf("x�� y���� ũ�� y�� 40 �̸��Դϱ�? %d\n", (x > y) && (y < 40));//and
    printf("x�� y���� �۰ų� Ȥ�� y�� 30�Դϱ�? %d\n", (x > y) || (y < 40));//or
}