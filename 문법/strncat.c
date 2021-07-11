#include <stdio.h>
#include <string.h>
int main(void)
{
    char str01[20] = "C language is "; // 널 문자를 포함하여 15문자
    char str02[] = "Cool! and funny!";  
    // strcat(str01, str02);   // 이 부분의 주석 처리를 삭제한 후 실행시키면 배열 오버플로우우가 발생함
    strncat(str01, str02, 5); // 이렇게 최대 허용치를 설정해 놓으면 배열 오버플로우우에 대해서는 안전해짐
    puts(str01);
}