#include <stdio.h>
#include <stdbool.h>

void func(char*str, int len)
{
    for(int i = 0; i < len; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(tolower(str[i]) < tolower(str[j]))
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    char str[] = "AbCdeFG";
    int len = strlen(str);
    func(str, len);
    printf("%s", str);
    return 0;
}
