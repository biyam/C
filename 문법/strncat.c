#include <stdio.h>
#include <string.h>
int main(void)
{
    char str01[20] = "C language is "; // �� ���ڸ� �����Ͽ� 15����
    char str02[] = "Cool! and funny!";  
    // strcat(str01, str02);   // �� �κ��� �ּ� ó���� ������ �� �����Ű�� �迭 �����÷ο�찡 �߻���
    strncat(str01, str02, 5); // �̷��� �ִ� ���ġ�� ������ ������ �迭 �����÷ο�쿡 ���ؼ��� ��������
    puts(str01);
}