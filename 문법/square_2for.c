#include <stdio.h>
#define N 10
// 사각형 출력하기

int main(void)
{
  int i, j;
  for(i = 0; i < N; i++) // 초기화, 범위, 증감. N번 반복된다.
  {
    for(j = 0; j < N; j++)
    {
      printf("*"); //10*10 = 총 100개 출력
    }
    printf("\n");
  }
  return 0;
}