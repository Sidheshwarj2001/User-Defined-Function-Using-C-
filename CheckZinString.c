#include <stdio.h>
#include <stdbool.h>

bool CheckZ(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == 'z')
        {
            return true;
        }
        else
        {
            return false;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String \n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckZ(Arr);

    if (bRet = true)
    {
        printf("Z is present in the string");
    }
    else
    {
        printf("Z is not present in the string");
    }
    return 0;
}
