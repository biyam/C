#include <stdio.h>

int main(void)
{
    // char x = 'A'; 
    char x = 65; // 위와 결과가 같음
    printf("%c\n", x);


    int y = 65;
    // 정수인 65를 char형으로 출력해라
    printf("%c", y);
    // %c는 char형으로 출력
    return 0;
}