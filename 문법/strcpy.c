#include <stdio.h>
#include <string.h>
int main(void)
{
    char *strncpy(char * restrict s1, const char * restrict s2, size_t n);   
    char str01[20] = "C is Cool!";
    char str02[11];  
    // str02 배열의 크기만큼만 복사를 진행하며, 
    // 마지막 한 문자는 널 문자를 위한 것임
    strncpy(str02, str01, sizeof(str02)-1);
    str02[sizeof(str02)-1] = '\0'; 
    // 위의 부분을 주석 처리하면, 맨 마지막에 널 문자를 삽입하지 않음
    puts(str02);
    char str[20] = "C is cool!";  
    strncpy(str+5, "nice", 4); 
    // 배열 이름을 이용한 포인터 연산으로 수정할 부분의 시작 부분을 지정함
    puts(str);
}