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
    printf("���� �Է�:");
    int b;
    scanf("%d", &b);
    bin(b);
    return 0;
}
