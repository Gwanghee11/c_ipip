#include <stdio.h>

int fact2(a)
{
    if(a == 5)
    {
        printf("5");
        return 5;
    }
    int res;
    res = a * fact2(a+1);
    printf("*%d", a);
    return res;
}
int fact(a)
{
    if(a == 1)
    {
        printf("1");
        return 1;
    }
    int res;
    res = a * fact(a-1);
    printf("*%d", a);
    return res;
}

int main()
{
    int a = fact(5);
    printf("=");
    printf("%d", a);
    printf("\n");
    a = fact2(1);
    printf("=");
    printf("%d", a);
    return 0;
}
