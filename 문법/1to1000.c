#include <stdio.h>
// 1부터 1000까지의 합
int main(void)
{
  int i = 1, sum = 0;
  while(i <= 1000) // 이 부분이 참일 때까지 실행됨
  {
    sum += i;
    i++;
  }
  printf("1부터 1000까지의 합은 %d입니다.",sum);
  return 0;
}