#include <stdio.h>
int main(void)
{
    char ch;
    printf("EOF�� �Էµ� ������ �����ڸ� ��� �Է¹޽��ϴ� :\n");
    printf("(�����쿡�� EOF�� ���� �߻��� Ctrl+Z�� ������ ���� Enter�� ������ �˴ϴ�)\n");
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    return 0;
}