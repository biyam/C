#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    x += 50; //150
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    x -= 50; //100
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    x *= 50; //5000
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    x /= 50; //1000
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    x %= 3; //1
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    return 0;
}