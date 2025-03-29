#include <stdio.h>

int fact(a)
{
    if(a == 1)
    {
        return a;
    }
    else
    {
        a *= fact(a - 1);
    }

}


int main()
{
    int a = fact(5);

    printf("%d", a);

    return 0;
}
