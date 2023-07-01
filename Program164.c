#include<stdio.h>

int strlenDigitX(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= '0') & (*str <='9'))
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

    iRet = strlenDigitX(Arr);

    printf("cout  of Digit are : %d\n",iRet);
    
    return 0;
}