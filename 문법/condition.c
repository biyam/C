#include <stdio.h>
int main(void)
{
    int x = -50, y = 30;
    int absoluteX = (x > 0) ? x : -x;
    // x > 0�� ���̸� ������ ��ȯ, �����̸� �������� ��ȯ
    int max = (x > y) ? x : y;
    int min = (x < y) ? x : y;
    printf("x�� ������ %d�Դϴ�.\n",absoluteX);
    printf("x�� y �߿��� �ּڰ��� %d�Դϴ�.\n", min);
    return 0;
}