#include <stdio.h>
#define N 10
// �簢�� ����ϱ�

int main(void)
{
  int i, j;
  for(i = 0; i < N; i++) // �ʱ�ȭ, ����, ����. N�� �ݺ��ȴ�.
  {
    for(j = 0; j < N; j++)
    {
      printf("*"); //10*10 = �� 100�� ���
    }
    printf("\n");
  }
  return 0;
}