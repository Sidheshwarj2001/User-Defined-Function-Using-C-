#include<stdio.h>

int CountZ(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == 'z')
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

    iRet = CountZ(Arr);

    printf("cout  of z in string are : %d\n",iRet);
    
    return 0;
