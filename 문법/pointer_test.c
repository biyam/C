#include <stdio.h>
int main(void)
{
    int num1 = 1234; // 정수
    double num2 = 3.14; // 실수 
    int* ptr1 = &num1; // ptr1이 가리키는 곳은 num1의 주소값이다.
    double* ptr2 = &num2; // ptr2가 가리키는 곳은 num2의 주소값이다.
    printf("포인터의 크기는 %d입니다.\n", sizeof(ptr1));
    printf("포인터 ptr1이 가리키고 있는 주소값은 %#x입니다.\n", ptr1);
    printf("포인터 ptr2가 가리키고 있는 주소값은 %#x입니다.\n", ptr2);
    printf("포인터 ptr1이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr1);
    printf("포인터 ptr2가 가리키고 있는 주소에 저장된 값은 %f입니다.\n", *ptr2);
}