#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    printf("x�� y�� ������? %d\n", x==y);
    // ���̸� 1, �����̸� 0
    printf("x�� y�� �ٸ���? %d\n", x!=y);
    printf("x�� y�� �ٸ���? %d\n", x > y);
    printf("x�� y�� �ٸ���? %d\n", x < y);
    printf("x�� y�� ������ x��? %d\n", x = y); //30
    return 0;

}