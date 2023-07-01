#include<stdio.h>

// vowels : a e i o u /  A E I O U
int CountSpace(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);

    printf("cout  of spaces in string are : %d\n",iRet);
    
    return 0;
}