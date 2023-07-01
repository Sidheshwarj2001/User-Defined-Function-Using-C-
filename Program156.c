
#include <stdio.h>
#include<stdbool.h>

bool checkDigit(char cValue)
{
    if((cValue >= '0') && (cValue <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{

    char ch = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&ch);

    bRet = checkDigit(ch);

    if(bRet == true)
    {
        printf("%c is Digit letter",ch);
    }
    else
    {
        printf("%c is not Digit lettter",ch);
    }
    

    return 0;
}