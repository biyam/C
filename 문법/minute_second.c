// operator = ??????
#include <stdio.h>
#define SECOND_PER_MINUTE 60;
int main(void)
{
    int input = 1000; 
    int minute = input / SECOND_PER_MINUTE;
    int second = input % SECOND_PER_MINUTE;
    printf("%d분은 %d분 %d초입니다.", input, minute, second);
    return 0;
}