#include <stdio.h>
// ��� �Լ� (Recursive Function)
void func(int count)
{
    if(count == 0)
    {
        return;
    }
    else
    {
        printf("���ڿ��� ����մϴ�.\n");
        func(count - 1);
    }
}

int main(void)
{
    int number;
    printf("���ڿ��� �� �� ����ұ��?");
    scanf("%d", &number);
    func(number);
    return 0;
}