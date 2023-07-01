#include<stdio.h>

int strlenX(char str[])
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        iCnt++;
    }
    
    return iCnt;
    
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Length of string is : %d\n",iRet);
    

    return 0;
}