#include<stdio.h>

int strlenCapitalX(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'A') & (*str <='Z'))
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

    iRet = strlenCapitalX(Arr);

    printf("cout  of Capital character are : %d\n",iRet);
    
    return 0;
}
