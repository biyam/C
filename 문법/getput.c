#include <stdio.h>
int main(void)
{
    char str[100];
    fputs("���ڿ��� �Է��� �ּ��� : ", stdout);
    fgets(str, sizeof(str), stdin);
    puts("�Է��Ͻ� ���ڿ�: ");
    puts(str);
    fputs("�Է��Ͻ� ���ڿ�: ", stdout);
    fputs(str, stdout);
    return 0;
}