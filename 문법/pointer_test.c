#include <stdio.h>
int main(void)
{
    int num1 = 1234; // ����
    double num2 = 3.14; // �Ǽ� 
    int* ptr1 = &num1; // ptr1�� ����Ű�� ���� num1�� �ּҰ��̴�.
    double* ptr2 = &num2; // ptr2�� ����Ű�� ���� num2�� �ּҰ��̴�.
    printf("�������� ũ��� %d�Դϴ�.\n", sizeof(ptr1));
    printf("������ ptr1�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr1);
    printf("������ ptr2�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr2);
    printf("������ ptr1�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr1);
    printf("������ ptr2�� ����Ű�� �ִ� �ּҿ� ����� ���� %f�Դϴ�.\n", *ptr2);
}