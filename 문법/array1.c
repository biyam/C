#include <stdio.h>
#include <limits.h>
#define NUMBER 5
int main(void)
{
    int i, max, min, index1, index2;
    int array[NUMBER];
    max = 0; // �ʱ�ȭ �ʼ�
    index1 = 0;
    index2 = 0;
    for(i = 0;i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if(max < array[i]) // �ִ� ���ϱ�
        {
            max = array[i];
            index1 = i;
        }
        if(min > array[i]) // �ִ� ���ϱ�
        {
            min = array[i];
            index2 = i;
        }
    }
    printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n���� ���� ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.", max, index1 + 1, min, index2 + 1);
    return 0;
}