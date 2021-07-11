#include <stdio.h>
// 두 변수의 값을 서로 변환하는 포인터 함수
// 두 값을 변환할 때는 포인터를 써야 한다.
// 포인터를 사용하면 프로그램 전역에 영향을 미칠 수 있음.
// &는 주소
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(void)
{   
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}