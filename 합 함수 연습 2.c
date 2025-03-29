#include <stdio.h>
int sum2(int s)
{
    if(s == 10)
    {
        printf("10");
        return 10;
    }

    int res;

    res = s + sum2(s+1);
    printf("+%d", s);
    return res;
}


int sum(int s)
{
    if(s == 1)
    {
        printf("1");
        return 1;
    }

    int res;

    res = s + sum(s-1);
    printf("+%d", s);
    return res;
}


int main()
{
    int s = sum(10);
    printf("=");
    printf("%d\n", s);
    s = sum2(1);
    printf("=");
    printf("%d", s);

    return 0;
}
