#include <stdio.h>

int sum(int s)
{
    int r;
    if(s == 1)
    {
        printf("1");
        return 1;
    }


    r = s + sum(s-1);
    printf("+%d", s);
    return r;
}


int main()
{
    int s = sum(10);
    printf("=");
    printf("%d", s);

    return 0;
}
