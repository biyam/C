#include <stdio.h>
int main(void)
{
    int str_len = 0;
    char str[] = "Hello World";
    while (str[str_len] != '\0') // �� ���ڰ� ���� ������ ���̸� ������
    {
        str_len++;
    }

printf("�� ���ڿ��� ���̴� %d�Դϴ�.\n", str_len);
}