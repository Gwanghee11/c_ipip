#include <stdio.h>

int testfunc(int n)
{
    if(n < 2)
        return 1;
    return n*testfunc(n-1);
}

int main()
{
    int n = 5;
    printf("%d", testfunc(n));
}
