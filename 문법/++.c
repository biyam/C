#include <stdio.h>

int main(void)
{
    int x = 0;
    printf("현재의 x는 %d입니다.\n", x);
    x++; //1을 더한다.
    printf("현재의 x는 %d입니다.\n", x);
    x--;
    printf("현재의 x는 %d입니다.\n", x);
    printf("현재의 x는 %d입니다.\n", x--);
    // 뒤에 붙어 있으면 x를 출력하고 나서 1을 빼게 된다. 
    // 따라서 출력 값은 동일함 (-1이 아니라 0)
    printf("현재의 x는 %d입니다.\n", x);
    printf("현재의 x는 %d입니다.\n", ++x);
    // 앞에 붙어 있으면 1을 더하고 x를 출력함
    // 따라서 출력 값은 -1에 1을 더한 0
    return 0;
}