#include <stdio.h>  
int main(void)
{
    char ch;
    printf("x�� �Էµ� ������ �����ڸ� ��� �Է¹޽��ϴ� :\n");  
    while ((ch = getchar()) != 'x')
    {
        putchar(ch);
    }  
    printf("x�� �Է��ϼ̽��ϴ�.\n");  
    return 0;
}