#include <stdio.h>
// 재귀 함수 (Recursive Function)
void func(int count)
{
    if(count == 0)
    {
        return;
    }
    else
    {
        printf("문자열을 출력합니다.\n");
        func(count - 1);
    }
}

int main(void)
{
    int number;
    printf("문자열을 몇 개 출력할까요?");
    scanf("%d", &number);
    func(number);
    return 0;
}