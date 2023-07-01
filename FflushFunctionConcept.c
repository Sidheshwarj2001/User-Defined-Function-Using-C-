#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str , char cValue)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == cValue)
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
    char ch = '\0';

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);

    printf("Enter the characterr that you want to check in the string : \n");
    scanf("%c",&ch);// input buffer happend in this case

    iRet = CountChar(Arr,ch);

    printf("cout of %c in string are : %d\n",ch,iRet);
    
    return 0;
}
