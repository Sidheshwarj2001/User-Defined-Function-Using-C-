#include<stdio.h>

int strlenSmallerX(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'a') & (*str <='z'))
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

    iRet = strlenSmallerX(Arr);

    printf("cout  of small character are : %d\n",iRet);
    
    return 0;
}
