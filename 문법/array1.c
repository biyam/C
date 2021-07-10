#include <stdio.h>
#include <limits.h>
#define NUMBER 5
int main(void)
{
    int i, max, min, index1, index2;
    int array[NUMBER];
    max = 0; // 초기화 필수
    index1 = 0;
    index2 = 0;
    for(i = 0;i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if(max < array[i]) // 최댓값 구하기
        {
            max = array[i];
            index1 = i;
        }
        if(min > array[i]) // 최댓값 구하기
        {
            min = array[i];
            index2 = i;
        }
    }
    printf("가장 큰 값은 %d입니다. 그리고 %d번째에 있습니다.\n가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.", max, index1 + 1, min, index2 + 1);
    return 0;
}