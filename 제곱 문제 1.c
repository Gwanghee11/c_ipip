#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int i = 0;
    bool f = true;
    while(f)
    {
        for(i = 0; i < 5; i++)
        {
            printf("%d", i+1);
            if(pow(i, 2) > 6)
            {
                f = false;
            }
        }
    }
}
