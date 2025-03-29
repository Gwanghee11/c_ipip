#include <stdio.h>
void bin(int a)
{
    if(a == 0)
    {
        return;
    }
    bin(a/2);
    printf("%d", a%2);
}


int main()
{
    printf("숫자 입력:");
    int b;
    scanf("%d", &b);
    bin(b);
    return 0;
}
