#include <stdio.h>
// 반복함수를 이용해서 숫자 피라미드 출력
// 반복함수의 경우 오직 for문과 while문으로 구성됨
int print(int a)
{
    int i, j;
    for(i = 0; i < a; i++)
    {
        for(j = 0; j <= i; j ++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }  
}

int main(void)
{
    int a;
    scanf("%d", &a);
    print(a);
    return 0;
}